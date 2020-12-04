#include <iostream>
#include <fstream>
#include <vector>


template<typename F>
auto readLines(const std::string& fileName, F parser) {
    std::ifstream file(fileName, std::ios_base::in | std::ios_base::binary);
    file.exceptions(std::ios_base::badbit);

    std::vector<std::invoke_result_t<F, std::string>> vec;
    std::string line;
    while (std::getline(file, line)) {
        vec.push_back(parser(std::move(line)));
    }

    return vec;
}

void part1() {
    std::vector<int> nums = readLines("../input.txt", [](const std::string& str) { return std::stoi(str); });
    for (int x : nums) {
        for (int y : nums) {
            if (x + y == 2020) {
                std::cout << x * y << std::endl;
            }
        }
    }
}

void part2() {
    std::vector<int> nums = readLines("../input.txt", [](const std::string& str) { return std::stoi(str); });

    for (int x : nums) {
        for (int y : nums) {
            for (int z : nums) {
                if (x + y + z == 2020) {
                    std::cout << x * y * z << std::endl;
                }
            }
        }
    }
}

int main() {
    part2();

    return 0;
}
