// DFS helper function
void findTopoSort(int node, std::vector<bool>& visited,
                  const std::vector<std::vector<int>>& adj, std::stack<int>& st) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            findTopoSort(neighbor, visited, adj, st);
        }
    }
    st.push(node); // Push node onto stack after all its dependencies are processed
}

// Main topological sort function
std::vector<int> topologicalSort(int N, const std::vector<std::vector<int>>& adj) {
    std::vector<bool> visited(N, false);
    std::stack<int> st;

    for (int i = 0; i < N; ++i) {
        if (!visited[i]) {
            findTopoSort(i, visited, adj, st);
        }
    }

    std::vector<int> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    // The result is already in topological order due to stack's LIFO property
    return result;
}
