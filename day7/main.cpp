#include <bits/stdc++.h>

#include "ctre.hpp"

using namespace ctre::literals;
using namespace std::literals::string_literals;
using namespace std::literals::string_view_literals;

struct ParseError : std::exception {
    std::string msg;
    explicit ParseError(std::string_view msg_): msg(msg_) {}

    const char* what() const noexcept final {
        return msg.c_str();
    }
};

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


int parseInt(std::string_view str) {
    int result;
    auto [p, ec] = std::from_chars(str.data(), str.data() + str.size(), result);
    if (ec != std::errc{}) {
        throw ParseError{str};
    }
    return result;
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

struct Bag;
using BagMap = std::unordered_map<std::string, std::pair<int, std::shared_ptr<Bag>>>;

struct Bag {
    std::string color;
    std::vector<const Bag*> parents;
    BagMap children;

    bool isGold() const {
        return color == "shiny gold"sv;
    }
};


void forEachChildren0(const BagMap& children, const std::function<void(const Bag&)>& fn) {
    for (const auto& [c, b] : children) {
        fn(*b.second);
        forEachChildren0(b.second->children, fn);
    }
}

void foreachbag(const Bag& bag, const std::function<void(const Bag&)>& fn) {
    fn(bag);
    forEachChildren0(bag.children, fn);
}


void forEachParent(const Bag& bag, const std::function<void(const Bag&)>& fn) {
    for (const Bag* b : bag.parents) {
        fn(*b);
        forEachParent(*b, fn);
    }
}

int numGoldShiny(const std::unordered_map<std::string, std::shared_ptr<Bag>>& bags) {
    std::unordered_set<std::string> goldBags;
    for (const auto& [c, b] : bags) {
        foreachbag(*b, [&](const Bag& arg) {
            if (arg.isGold()) {
                forEachParent(arg, [&](const auto& p) {
                    goldBags.emplace(p.color);
                });
            }
        });
    }
    return goldBags.size();
}

int part1Simple(const std::unordered_map<std::string, std::shared_ptr<Bag>>& bags) {
    std::unordered_set<std::string> goldBags;
    forEachParent(*bags.find("shiny gold")->second, [&](const Bag& b) { goldBags.emplace(b.color); });
    return goldBags.size();
}

auto createTheFuckingTrees() {
    using namespace std;

    auto input = readInputLines();

    unordered_map<string, shared_ptr<Bag>> allbags;
    for (const auto& l : input) {
        auto [whole, parent, bags] = "(.+) bags contain (.+)\\."_ctre.match(l);

        std::string parentColor = std::string{parent.view()};
        auto it = allbags.find(parentColor);
        Bag& parentBag = it != allbags.end() ?
                         *it->second :
                         *allbags.emplace(parentColor, make_shared<Bag>(Bag{parentColor, {}, {}})).first->second;

        if (bags.view() != "no other bags"sv) {
            auto subs = split(bags, ", ");
            for (const auto& b : subs) {
                auto[whole2, num, color] = "(\\d+) (.+) bags?"_ctre.match(b);
                auto colorStr = std::string{color.view()};
                const int NUMBER = parseInt(num.view());

                auto childIt0 = allbags.find(colorStr);
                if (childIt0 != allbags.end()) {
                    shared_ptr<Bag>& childBag = childIt0->second;
                    childBag->parents.push_back(&parentBag);
                    parentBag.children.emplace(colorStr, std::pair{NUMBER, childBag});
                } else {
                    auto childIt = parentBag.children.emplace(
                        colorStr,
                        std::pair{
                            NUMBER,
                            make_shared<Bag>(Bag{std::string{color.view()}, {&parentBag}, {}})
                        });

                    allbags.emplace(childIt.first->first, childIt.first->second.second);
                }
            }
        }
    }

    return allbags;
}

void part1() {
    auto allbags = createTheFuckingTrees();
    std:: cout << numGoldShiny(allbags) << '\n';
    std:: cout << part1Simple(allbags) << '\n';
}

void forEachChildrenXD(const BagMap& children, const std::function<void(int, const Bag&)>& fn) {
    for (const auto& [c, b] : children) {
        fn(b.first, *b.second);
        forEachChildrenXD(b.second->children, fn);
    }
}

// this is slightly wrong and always returns the correct result + 1
int64_t numGoldShinyChildren0(const BagMap& bags) {
    int64_t acc = 1;
    for (const auto& [name, pair] : bags) {
        const auto& [c, bptr] = pair;
        acc += c * numGoldShinyChildren0(bptr->children);
    }
    return acc;
}

int numGoldShinyChildren(const std::unordered_map<std::string, std::shared_ptr<Bag>>& bags) {
    const auto& gold = *bags.find("shiny gold")->second;

    return numGoldShinyChildren0(gold.children);
}

void part2() {
    auto allbags = createTheFuckingTrees();
    std::cout << numGoldShinyChildren(allbags) << '\n';
}

int main() {
   part1();
}
