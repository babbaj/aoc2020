#include <bits/stdc++.h>

using namespace std::literals;

#include <immintrin.h>


using namespace std::literals::string_view_literals;

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

int column(std::string_view column) {
    char a = column[0];
    char b = column[1];
    char c = column[2];
    return (int(a == 'R') << 2) | (int(b == 'R') << 1) | (int(c == 'R') << 0);
}

int row(std::string_view row) {
    char a = row[0];
    char b = row[1];
    char c = row[2];
    char d = row[3];
    char e = row[4];
    char f = row[5];
    char g = row[6];
    return (int(a == 'B') << 6) | (int(b == 'B') << 5) |(int(c == 'B') << 4) |(int(d == 'B') << 3) |(int(e == 'B') << 2) |(int(f == 'B') << 1) |(int(g == 'B') << 0);
}


int idSimd(std::string_view seatStr) {
    constexpr uint8_t R = 'R';
    constexpr uint8_t B = 'B';
    constexpr uint8_t filterBytes[16] {
        B, B, B, B, B, B, B,
        R, R, R,
        0, 0, 0, 0, 0, 0 // dummy values
    };
    const __m128i filter = _mm_loadu_si128((__m128i*) filterBytes);
    __m128i seat;
    memcpy(&seat, seatStr.data(), 10);
    __m128i eq = _mm_cmpeq_epi8(seat, filter);

    constexpr uint8_t indices[16] {
        9, 8, 7, 6, 5, 4, 3, // row
        2, 1, 0, // column
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF // these all have the high bit set which will make the irrelevant bytes 0
    };
    eq = _mm_shuffle_epi8(eq, _mm_loadu_si128((__m128i*) indices));

    return _mm_movemask_epi8(eq);
}

void part1() {
    using namespace std;
    vector input = readInput();
    int64_t highest = 0;
    for (const auto& line : input)
    {
        auto r = row(line);
        auto c = column(line.substr(7));
        auto num = r * 8 + c;
        auto simd = idSimd(line);
        if (num != simd) {
            std::cout << "reee\n";
        } else {
            std::cout << "yay!\n";
        }
       //cout << r << '\n';
       //cout << c << '\n';
       //cout << num << '\n';
        if (num > highest) highest = num;
    }
    cout << highest << '\n';
}

void part2() {
    using namespace std;
    vector input = readInput();
    unordered_set<int> allIds;
    for (const auto& line : input)
    {
        auto r = row(line);
        auto c = column(line.substr(7));
        auto num = r * 8 + c;

        allIds.insert(num);
    }
    for (int i = 0; i < 1024; i++) {
        constexpr auto backrow = 0b1111111;
        constexpr auto frontrow = 0b0000000;
        int r = i >> 3;
        int c = i & 0b111;

        auto num = r * 8 + c;
        //if (num != i) std::cout << "uwu\n";
        if (r != backrow && r != frontrow && !allIds.contains(num)) {
            if (allIds.contains(num - 1) && allIds.contains(num + 1)) {
                cout << num << '\n';
            }
        }
    }
}

int main() {
    part1();
}
