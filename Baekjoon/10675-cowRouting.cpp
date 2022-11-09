#include <iostream>

using namespace std;

int main()
{
    int startCity, endCity, routeCount;
    cin >> startCity >> endCity >> routeCount;

    int minCost = 1005;
    for (int i = 0; i < routeCount; i++) {
        int routeCost, cityCount;
        cin >> routeCost >> cityCount;

        int startIndex = 0, endIndex = 0;
        for (int j = 1; j <= cityCount; j++) {
            int city;
            cin >> city;

            if (city == startCity) {
                startIndex = j;
            }
            if (city == endCity) {
                endIndex = j;
            }
        }

        if (startIndex > 0 && endIndex > 0 && startIndex < endIndex) {
            minCost = routeCost < minCost ? routeCost : minCost;
        }
    }

    if (minCost == 1005) {
        cout << -1 << "\n";
    }

    else {
        cout << minCost << "\n";
    }

    return 0;
}