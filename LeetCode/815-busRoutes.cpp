class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target) return 0;

        unordered_map<int, unordered_set<int>> stopToRoutes;
        for (int i = 0; i < routes.size(); i++) {
            for (int stop : routes[i]) stopToRoutes[stop].insert(i);
        }

        unordered_set<int> visitedStops;
        queue<pair<int, int>> queue;

        queue.push({source, 0});

        while (!queue.empty()) {
            auto currentStopAndBuses = queue.front();
            queue.pop();
            int currentStop = currentStopAndBuses.first, numBuses = currentStopAndBuses.second;

            const auto& routesForCurrentStop = stopToRoutes[currentStop];
            for (int routeIndex : routesForCurrentStop) {
                for (int nextStop : routes[routeIndex]) {
                    if (nextStop == target) return numBuses + 1;

                    if (visitedStops.find(nextStop) == visitedStops.end()) {
                        visitedStops.insert(nextStop);
                        queue.push({nextStop, numBuses + 1});
                    }
                }

                routes[routeIndex].clear();
            }
        }

        return -1;
    }
};
