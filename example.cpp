#include <iostream>
#include <vector>
#include "include/eee.hpp"

static std::vector<std::string> test = {
        "e100",
        "e101",
        "e102",
        "e104",
        "e110",
        "e120",
        "e122",
        "e123",
        "e124",
        "e127",
        "e129",
        "e131",
        "e132",
        "e133",
        "e140",
        "e141",
        "e142",
        "e150A",
        "e150B",
        "e150C",
        "e150D",
        "e151",
        "e153"
};

int main() noexcept {
    for(std::string& e_code : test) {
        std::cout << e_code << " : " << e::get(e_code) << '\n';
    }
}