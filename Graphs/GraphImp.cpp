#include <vector>
#include <utility>
#include <iostream>

template<class T>
Graph<T>::Graph ():
    directed(false), nvertices(0), nedges(0) {
        // Initializes the graph setting the number of vertices, edges and degrees of each vertex to zero.
        initialize_graph();
} 

template<class T>
Graph<T>::~Graph () {
    clear();
}

template<class T>
Graph<T>::Graph (bool isDirect):
    directed(isDirect), nvertices(0), nedges(0) {
        initialize_graph();
}

template<class T>
Graph<T>::Graph (bool isDirect, int vertices, int edge, std::vector<std::pair<int,int>>& edgeVals):
directed(isDirect), nvertices(vertices), nedges(edge) {
    initialize_graph(edgeVals);
}

template<class T>
void Graph<T>::initialize_graph() {
    degree = new int[nvertices];
    for (int i=0; i<nvertices; i++) 
        degree[i] = 0;
    for (int i=0; i<nvertices; i++) 
        edges[i] = nullptr;
}

template<class T>
void Graph<T>::initialize_graph(std::vector<std::pair<int,int>>& edge) {
    initialize_graph();
    for(auto &[a,b]: edge) {
        insert_edge(a, b);
    }
}

template<class T>
void Graph<T>::clear() {
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
