template<class T>
class EdgeNode 
{
    T val;
    int index;
    int weight;
	std::unique_ptr<EdgeNode> next;
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
class Graph 
{
    bool directed;
    int nvertices;
    int nedges;
    std::unique_ptr<std::unique_ptr<EdgeNode>> edges;
    std::unique_ptr<int> degree;
    void initialize_graph(std::vector<std::pair<int,int>>);

public:
    Graph ():
        directed(false), nvertices(0), nedges(0) {
            initialize_graph();
        } 

    Graph (bool isDirect):
        directed(isDirect) {
            initialize_graph();
        }

    Graph (bool isDirect, int vertices, int edges, std::vector<std::pair<int,int>> edgeVals):
        directed(isDirect), nvertices(vertices), nedges(edges) {
            initialize_graph(edgeVals);
        }
    
    void insertEdge(int valA, int valB, bool directed);

    friend std::ostream& operator<<(std::ostream& print, Graph graph);
};
