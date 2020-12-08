#include <bits/stdc++.h>

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

std::vector<std::string> readInput() {
    return readInput([](std::string str) { return std::move(str);});
}


void part1() {
    using namespace std;

    auto input = readInput();

    std::vector<vector<string>> groups;
    std::vector<std::string> answers;
    for (int i = 0; i < input.size(); i++) {
        auto& line = input[i];

        if (line.empty()) {
            groups.push_back(std::move(answers));
            answers.clear();
            continue;
        }
        answers.push_back(line);

        if (i == input.size() - 1) {
            groups.push_back(std::move(answers));
        }
    }

    int acc = 0;
    for (const auto& g : groups) {
        unordered_map<char, int> map;
        for (const auto& line : g) {
            for (const auto answer : line) {
                map[answer]++;
            }
        }
        int count = map.size();
        acc += count;
    }

    cout << acc << '\n';
}

void part2() {
    using namespace std;

    auto input = readInput();

    std::vector<vector<string>> groups;
    std::vector<std::string> answers;
    for (int i = 0; i < input.size(); i++) {
        auto& line = input[i];

        if (line.empty()) {
            groups.push_back(std::move(answers));
            answers.clear();
            continue;
        }
        answers.push_back(line);

        if (i == input.size() - 1) {
            groups.push_back(std::move(answers));
        }
    }

    int acc = 0;
    for (const auto& g : groups) {
        unordered_map<char, int> map;
        for (const auto& line : g) {
            for (const auto answer : line) {
                map[answer]++;
            }
        }
        for (const auto& [k, count] : map) {
            if (count == g.size()) {
                acc++;
            }
        }

    }

    cout << acc << '\n';
}

int main() {
    part2();
}
