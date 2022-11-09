#include <iostream>
#include <vector>

using namespace std;

const int MAX = 505;

int departure, destination, N;
int routes[MAX][MAX], routeCosts[MAX], routeCityCount[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> departure >> destination >> N;
    for (int i = 0; i < N; i++) {
        cin >> routeCosts[i] >> routeCityCount[i];
        for (int j = 0; j < routeCityCount[i]; j++) cin >> routes[i][j];
    }

    int minCost = 5000;

    // 1 Route:
    for (int i = 0; i < N; i++) {
        int departureIndex = 10000, destinationIndex = 0;
        for (int j = 0; j < routeCityCount[i]; j++) {
            if (routes[i][j] == departure) departureIndex = j;
            else if (routes[i][j] == destination) destinationIndex = j;
        }

        if (departureIndex < destinationIndex) minCost = routeCosts[i] < minCost ? routeCosts[i] : minCost;
    }

    // 2 Routes:
    for (int i = 0; i < N; i++) {
        int departureIndex = 10000;
        for (int j = 0; j < routeCityCount[i]; j++) {
            if (routes[i][j] == departure) departureIndex = j;
        }

        if (departureIndex == 10000 || departureIndex == routeCityCount[i] - 1) continue;

        vector<int> laterCities;
        for (int j = departureIndex + 1; j < routeCityCount[i]; j++) laterCities.push_back(routes[i][j]);

        for (int j = 0; j < N; j++) {
            if (j == i) continue;

            int destinationIndex = 0;
            for (int k = 0; k < routeCityCount[j]; k++) {
                if (routes[j][k] == destination) destinationIndex = k;
            }

            if (destinationIndex == 0) continue;

            vector<int> earlierCities;
            for (int k = 0; k <= destinationIndex; k++) earlierCities.push_back(routes[j][k]);

            int count = 0;
            for (int k = 0; k < laterCities.size(); k++) {
                for (int l = 0; l < earlierCities.size(); l++) {
                    if (laterCities[k] == earlierCities[l]) count++;
                }
            }

            if (count > 0) minCost = routeCosts[i] + routeCosts[j] < minCost ? routeCosts[i] + routeCosts[j] : minCost;
        }
    }

    if (minCost == 5000) minCost = -1;
    
    cout << minCost << "\n";

    return 0;
}