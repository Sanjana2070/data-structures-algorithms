class Graph {
public:
    int V; // Number of vertices
    std::vector<std::list<int>> adj; // Adjacency list

    Graph(int V) : V(V), adj(V) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        // For undirected graph, add: adj[v].push_back(u);
    }

    void DFSUtil(int u, std::vector<bool>& visited) {
        visited[u] = true;
        std::cout << u << " "; // Process the current node (e.g., print)

        for (int v : adj[u]) {
            if (!visited[v]) {
                DFSUtil(v, visited);
            }
        }
    }

    void DFS(int startNode) {
        std::vector<bool> visited(V, false);
        DFSUtil(startNode, visited);

        // Handle disconnected components (if any)
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                DFSUtil(i, visited);
            }
        }
    }
};
