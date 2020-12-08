#include <bits/stdc++.h>

#include "ctre.hpp"

using namespace ctre::literals;

template<typename F>
auto readInput(F parser) {
    std::ifstream file("../input.txt", std::ios_base::in | std::ios_base::binary);
    file.exceptions(std::ios_base::badbit);

    std::vector<std::invoke_result_t<F, std::string>> vec;
    std::string line;
    while (std::getline(file, line)) {
        if (line.back() == '\r') line.erase(line.end() - 1);
        vec.push_back(parser(std::move(line)));
    }

    return vec;
}

std::vector<std::string> readInputLines() {
    return readInput([](std::string str) { return std::move(str);});
}


std::vector<std::string> split(std::string_view str, std::string_view delim) {
    std::vector<std::string> out;
    size_t pos;
    std::string_view token;
    std::string_view s = str;
    while ((pos = s.find(delim)) != std::string::npos) {
        token = s.substr(0, pos);
        out.emplace_back(token);
        s.remove_prefix(pos + delim.length());
    }
    out.emplace_back(s);
    return out;
}



void part1() {
    using namespace std;

    auto input = readInputLines();
    unordered_set<int> visited;

    int acc = 0;
    for (int i = 0; i < input.size(); i++) {
        if (visited.contains(i)) {
            cout << "acc = " << acc << '\n';
            break;
        } else {
            visited.emplace(i);
        }
        const auto& l = input[i];
        auto splt = split(l, " ");

        const auto& opcode = splt[0];
        auto numStr = splt[1];
        const int operand = std::stoi(splt[1]);
        if (opcode == "nop") {
            continue;
        }
        if (opcode == "acc") {
            acc += operand;
            continue;
        }
        if (opcode == "jmp") {
            i += operand - 1;
            continue;
        }

    }
}

bool simulate(const std::vector<std::string>& code) {
    using namespace std;
    unordered_set<int> visited;

    int acc = 0;
    for (int i = 0; i < code.size(); i++) {
        if (visited.contains(i)) {
            cout << "infinite loop at " << i << '\n';
            return false;
        } else {
            visited.emplace(i);
        }
        if (i == code.size() - 1) {
            cout << "success\n";
            cout << acc << '\n';
            return true;
        }

        const auto& l = code[i];
        auto splt = split(l, " ");

        const auto& opcode = splt[0];
        auto numStr = splt[1];
        const int operand = std::stoi(splt[1]);
        if (opcode == "nop") {
            continue;
        }
        if (opcode == "acc") {
            acc += operand;
            continue;
        }
        if (opcode == "jmp") {
            i += operand - 1;
            continue;
        }
    }
    return true;
}

int nextJmp(int i, const std::vector<std::string>& code) {
    for (; i < code.size(); i++) {
        if ("jmp.*"_ctre.match(code[i])) {
            return i;
        }
    }
    return -1;
}

void part2() {
    using namespace std;

    auto code = readInputLines();
    for (int i = 0; i < code.size(); i++/*i = nextJmp(i + 1, code)*/) {
        auto oldstr = code[i];
        auto newStr = oldstr;
        newStr.replace(0, 3, "nop");
        code[i] = newStr;
        if (simulate(code)) {
            std::cout << i << '\n';
            break;
        } else {
            code[i] = std::move(oldstr);
        }
    }
}

int main() {
    part2();
}
