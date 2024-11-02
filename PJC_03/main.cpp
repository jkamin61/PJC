#include <vector>
#include <algorithm>
#include <iostream>
#include <ranges>


auto findIntegerInVector(const int element, std::vector<int>& vector) {
    return std::ranges::find(vector, element);
}

auto findMaxElementInVector(std::vector<int>& vector) {
    return std::ranges::max(vector);
}

auto findMinElementInVector(std::vector<int>& vector) {
    return std::ranges::min(vector);
}

int main() {
    auto vector1 = std::vector<int>{1, 2, 3, 1};
    const auto value = findIntegerInVector(2, vector1);
    if (value != std::end(vector1)) {
        std::cout << "Element found: " << *value << std::endl;
    } else std::cout << "Element not found" << std::endl;

    return 0;
}
