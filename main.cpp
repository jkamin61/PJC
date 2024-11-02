#include <iostream>
#include <vector>
#include <algorithm>
#include "fmt/args.h"

int main() {
    std::cout << "Main file" << std::endl;
    auto numbers = std::vector<int>{3, 1, 2, 5, 8, 4, 2};
    std::ranges::sort(numbers, std::ranges::less());
    for (int val : numbers) {
        fmt::print("{} ", val);
    }
    fmt::print("\n");
    return 0;
}

