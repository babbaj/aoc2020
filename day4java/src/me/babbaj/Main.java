package me.babbaj;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.*;
import java.util.stream.Collectors;

public class Main {

    static List<String> readInput() {
        try {
            return Files.readAllLines(Paths.get("input.txt"));
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
    }

    static List<Integer> readInputInts() {
        try {
            return Files.lines(Paths.get("input.txt")).map(Integer::parseInt).collect(Collectors.toList());
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
    }


    static final List<String> REQUIRED = Arrays.asList("byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid"
        //, "cid"
    );

    static void part1() {
        List<String> input = readInput();

        List<List<String[]>> passports = new ArrayList<>();
        List<String[]> fields = new ArrayList<>();

        for (int i = 0; i < input.size(); i++) {
            String line = input.get(i);
            if (line.isEmpty()) {
                passports.add(fields);
                fields = new ArrayList<>();
                continue;
            }
            String[] split = line.split(" ");
            for (String s : split) {
                fields.add(s.split(":"));
            }
            if (i == input.size() - 1) {
                passports.add(fields);
            }
        }


        int valid = 0;
        for (List<String[]> passport : passports) {
            passport.stream().map(split -> split[0]).forEach(str -> System.out.print(str + " "));
            System.out.println();
            if (REQUIRED.stream().allMatch(str -> passport.stream().map(split -> split[0]).anyMatch(str::equals))) {
                valid++;
            }
        }
        System.out.println(valid);

    }

    void part2() {

    }

    public static void main(String[] args) {
        part1();
    }
}
