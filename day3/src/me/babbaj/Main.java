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

    static class Trees {
        public List<String> trees;

        public Trees(List<String> trees) {
            this.trees = trees;
        }

        boolean get(int x, int y) {
            return trees.get(y)
                .charAt(x % trees.get(0).length()) == '#';
        }
    }


    static void part1() {
        List<String> input = readInput();
        Trees trees = new Trees(input);

        int count = 0;
        for (int i = 0; i < input.size(); i++) {
            if (trees.get(i * 3, i)) count++;
        }
        System.out.println(count);
    }

    static void part2() {
        List<String> input = readInput();
        Trees trees = new Trees(input);

        long a = 0;
        for (int i = 0; i < input.size(); i++) {
            if (trees.get(i, i)) a++;
        }
        long b = 0;
        for (int i = 0; i < input.size(); i++) {
            if (trees.get(i * 3, i)) b++;
        }
        long c = 0;
        for (int i = 0; i < input.size(); i++) {
            if (trees.get(i * 5, i)) c++;
        }
        long d = 0;
        for (int i = 0; i < input.size(); i++) {
            if (trees.get(i * 7, i)) d++;
        }
        long e = 0;
        for (int x = 0, y = 0; y < input.size(); x++, y += 2) {
            if (trees.get(x, y)) e++;
        }


        System.out.println(a * b * c * d * e);
    }

    public static void main(String[] args) {
        part2();
    }
}
