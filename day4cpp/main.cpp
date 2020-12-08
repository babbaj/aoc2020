#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <type_traits>
#include <charconv>
#include <unordered_map>
#include <functional>
#include <bits/stdc++.h>

#include "ctre.hpp"

template<typename F>
auto readInput(F parser) {
    std::ifstream file("../input.txt", std::ios_base::in | std::ios_base::binary);
    file.exceptions(std::ios_base::badbit);

    std::vector<std::invoke_result_t<F, std::string>> vec;
    std::string line;
    while (std::getline(file, line)) {
        vec.push_back(parser(std::move(line)));
    }

    return vec;
}

std::vector<std::string> readInput() {
    return readInput([](std::string str) { return std::move(str);});
}


std::vector<std::string> split0(std::string_view str, std::string_view delim) {
    std::vector<std::string> out;
    size_t pos = 0;
    std::string token;
    std::string s = std::string{str};
    while ((pos = s.find(delim)) != std::string::npos) {
        token = s.substr(0, pos);
        //std::cout << token << std::endl;
        out.push_back(token);
        s.erase(0, pos + delim.length());
    }
    out.push_back(s);
    return out;
}

int parseInt(std::string_view str) {
    int result;
    std::from_chars(str.data(), str.data() + str.size(), result);
    return result;
}

bool isYear(std::string_view str, int min, int max) {
    using namespace ctre::literals;
    if ("\\d{4}"_ctre.match(str)) {
        int i = parseInt(str);
        return i >= min && i <= max;
    }
    return false;
}

bool isHeight(std::string_view str, int minCm, int maxCm, int minIn, int maxIn) {
    using namespace ctre::literals;
    auto [match, num, type, owo, uwu] = "(\\d+)((cm)|(in))"_ctre.match(str);
    if (match) {
        int i = parseInt(num.view());
        if (str.find("cm") != std::string_view::npos) {
            return i >= minCm && i <= maxCm;
        } else {
            return i >= minIn && i <= maxIn;
        }
    }
    return false;
}

bool isHair(std::string_view str) {
    using namespace ctre::literals;
    return "#[0-9a-f]+"_ctre.match(str);
}

bool isEye(std::string_view str) {
    using namespace ctre::literals;
    return "(amb)|(blu)|(brn)|(gry)|(grn)|(hzl)|(oth)"_ctre.match(str);
}

bool isPid(std::string_view str) {
    using namespace ctre::literals;
    return "\\d{9}"_ctre.match(str);
}

std::unordered_map<std::string, std::/*function*/add_pointer_t<bool(std::string_view)>> CHECKS = {
    {"byr", [](auto s) { return isYear(s, 1920, 2002); }},
    {"iyr", [](auto s) { return isYear(s, 2010, 2020); }},
    {"eyr", [](auto s) { return isYear(s, 2020, 2030); }},
    {"hgt", [](auto s) { return isHeight(s, 150, 193, 59, 76); }},
    {"hcl", [](auto s) { return isHair(s); }},
    {"ecl", [](auto s) { return isEye(s); }},
    {"pid", [](auto s) { return isPid(s); }},
    {"cid", [](auto s) { return true; }}
};

bool hasAllFields(const std::vector<std::vector<std::string>>& passprt) {
    for (const auto&[str, fn] : CHECKS) {
        if (str == "cid") continue;
        bool yes = false;
        for (const auto& vec : passprt) {
            if (vec[0] == str) yes = true;
        }
        if (!yes) return false;
    }
    return true;
}

void part1() {
    using namespace ctre::literals;

    auto input = readInput();
    std::vector<std::vector<std::vector<std::string>>> passports;
    std::vector<std::vector<std::string>> fields;

    for (int i = 0; i < input.size(); i++) {
        auto& line = input[i];
        if (line.back() == '\r') {
            line.erase(line.end() - 1);
        }
        if (line.empty()) {
            passports.push_back(std::move(fields));
            fields.clear();
            continue;
        }
        auto split = split0(line, " ");
        for (const auto&  s : split) {
            fields.push_back(split0(s, ":"));
        }
        if (i == input.size() - 1) {
            passports.push_back(std::move(fields));
        }
    }

    int valid = 0;
    for (const auto& passport : passports) {
        for (const auto& field : passport) {
            if (field.size() == 1) continue;
            const auto& id = field[0];
            const auto& val = field[1];

            //std::cout << id << "\n";
            if (!CHECKS.contains(id)) {
                std::cout << " no " << id << '\n';
            }
            if (!hasAllFields(passport))
                goto skip;
            if (!CHECKS.at(id)(val)) {
                goto skip;
            }
        }
        valid++;
        skip:;
    }
    std::cout << "size = " << passports.size() << '\n';
    std::cout << "valid = " << valid << "\n";
}

int main() {
    auto start = std::chrono::steady_clock::now();
    part1();
    auto end = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << elapsed.count() << '\n';
    return 0;
}
