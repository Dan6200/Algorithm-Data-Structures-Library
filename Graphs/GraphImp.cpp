
template<class T>
class EdgeNode 
{
    T val;
    int index;
    int weight;
	EdgeNode* next;
public:
    EdgeNode(T item):
        val(item), index(0), weight(0), next(nullptr) {}
    EdgeNode(T item, int i):
        val(item), index(i), weight(0), next(nullptr) {}
    EdgeNode(T item, int i, int w):
        val(item), index(i), weight(w), next(nullptr) {}
    EdgeNode(T item, int i, int w):
        val(item), index(i), weight(w), next(nullptr) {}
};
template<class T>
void initialize_graph() {
    degree = new int[nvertices];
    for (int i=0; i<N; i++) 
        degree[i] = 0;
    for (int i=0; i<N; i++) 
        edges[i] = nullptr;
}

template<class T>
void initialize_graph(std::vector<std::pair<int,int>> edge) {
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
