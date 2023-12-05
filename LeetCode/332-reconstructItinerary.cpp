class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> graph;
        for (auto ticket : tickets) graph[ticket[0]].insert(ticket[1]);

        vector<string> path;
        builtItn("JFK", graph, path);

        return vector<string>(path.rbegin(), path.rend());
    }

    
private:
    void builtItn(string src, unordered_map<string, multiset<string>> & graph, vector<string> & path) {
        while (graph[src].size()) {
            string next = *graph[src].begin();
            graph[src].erase(graph[src].begin());
            builtItn(next, graph, path);
        }
        
        path.push_back(src);
    }    
};
