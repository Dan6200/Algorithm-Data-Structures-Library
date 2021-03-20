#include "Graph.h"
#include <vector>
#include <algorithm>
#include <iostream>

template<class T>
void initialize_graph() {
    degree = new int[nvertices];
    for (int i=0; i<N; i++) 
        degree[i] = 0;
    for (int i=0; i<N; i++) 
        edges[i] = nullptr;
}

template<class T>
void initialize_graph(std::vector<std::pair<int,int>>& edge) {
    initialize_graph();
    for(auto &[a,b]: edge) {
        insert_edge(a, b);
    }
}

template<class T>
void Graph::clear() {
    // Reset the graph...
    delete [] degree;
    for(int i=0; i<nedges; i++) {
        delete edges[i];
    }
    delete [] edges;
    directed=false;
    nedges = 0;
    nvertices = 0;
}
