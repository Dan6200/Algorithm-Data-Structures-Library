#include <ostream>
#include <vector>
#include <utility>

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
};

template<class T>
class Graph 
{
    bool directed;
    int nvertices;
    int nedges;
    EdgeNode<T>** edges;
    int* degree;
    void initialize_graph(std::vector<std::pair<int,int>>&);
    void initialize_graph();

public:
    Graph ();

    Graph (const Graph<T>&);

    ~Graph (); 

    Graph (bool); 

    Graph (bool, int, int, std::vector<std::pair<int,int>>&);
    
    void clear(); 

    void insertEdge(int, int, bool);

    template<class U> friend std::ostream& operator<<(std::ostream&, Graph<U>&);
};

#include "GraphImp.cpp"
