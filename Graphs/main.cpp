#include <iostream>
#include "Graph.h"
#include <vector>
#include <memory>
#include <utility>

int main() {
    std::vector<std::pair<int,int>> edges(5, {0,0});
    std::unique_ptr<Graph<int>> g = std::make_unique<Graph<int>>(false, 5, 5, edges);
    return 0;
}

