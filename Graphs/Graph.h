#include <vector>

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
    void initialize_graph(std::vector<std::pair<int,int>>);
    void initialize_graph();

public:
    Graph ():
        directed(false), nvertices(0), nedges(0) {
            // Initializes the graph setting the number of vertices, edges and degrees of each vertex to zero.
            initialize_graph();
        } 

    ~Graph () {
        // Free the memory allocated on the heap clear the Graph
        clear();
    }

    Graph (bool isDirect):
        directed(isDirect), nvertices(0), nedges(0) {
            initialize_graph();
        }

    Graph (bool isDirect, int vertices, int edges, std::vector<std::pair<int,int>> edgeVals):
        directed(isDirect), nvertices(vertices), nedges(edges) {
            initialize_graph(edgeVals);
        }
    
    void clear() {
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

    void insertEdge(int valA, int valB, bool directed);

    template<typename U> friend std::ostream& operator<<(std::ostream& print, Graph<U>& graph);
};
