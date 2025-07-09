void bfs(const std::vector<std::vector<int>>& adj, int start_node) {
    std::queue<int> q;
    std::unordered_set<int> visited; // Use unordered_set for fast lookups

    // Initialize: Add start_node to queue and mark as visited
    q.push(start_node);
    visited.insert(start_node);

    while (!q.empty()) {
        int current_node = q.front();
        q.pop();

        std::cout << current_node << " "; // Process the current node (e.g., print)

        // Explore neighbors
        for (int neighbor : adj[current_node]) {
            if (visited.find(neighbor) == visited.end()) { // If neighbor not visited
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    std::cout << std::endl;
}
