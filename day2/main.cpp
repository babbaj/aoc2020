#include <cassert>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <charconv>

#include "input.h"

struct Policy {
    int num1;
    int num2;
    char letter;
};

int parseInt(std::string_view str) {
    int result;
    std::from_chars(str.data(), str.data() + str.size(), result);
    return result;
}

std::pair<std::string_view, std::string_view> split(std::string_view str, std::string_view delim) {
    auto idx = str.find(delim);
    assert(idx != std::string_view::npos);
    return {str.substr(0, idx), str.substr(idx + delim.size())};
}

std::pair<Policy, std::string_view> parseLine(std::string_view line) {
    const auto [left, password] = split(line, ": ");
    const auto [low, right] = split(left, "-");
    const auto [high, letter] = split(right, " ");

    return std::pair{
        Policy {
            .num1 = parseInt(low),
            .num2 = parseInt(high),
            .letter = letter[0]
        },
        password
    };
}

void part1() {
    int valid = 0;
    for (const auto& line : INPUT) {
        const auto& [policy, password] = parseLine(line);
        auto count = std::count(password.begin(), password.end(), policy.letter);
        if (count >= policy.num1 && count <= policy.num2) {
            valid++;
        }
    }
    printf("%d valid lines\n", valid);
}

void part2() {
    int valid = 0;
    for (const auto& line : INPUT) {
        const auto [policy, password] = parseLine(line);
        const bool a = password[policy.num1 - 1] == policy.letter;
        const bool b = password[policy.num2 - 1] == policy.letter;
        if ((a || b) && a != b) {
            valid++;
        }
    }

    printf("%d valid lines\n", valid);
}

int main() {
    part2();
    return 0;
}
