#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int minTime = 1005;

    unordered_map<pair<int, int>, int> visited;
    int northSouth = 0, westEast = 0;
    int totalTime = 1;
    for (int i = 0; i < N; i++) {
        char direction;
        int units;
        cin >> direction >> units;

        if (direction == 'N') northSouth++;
        else if (direction == 'S') northSouth--;
        else if (direction == 'W') westEast--;
        else westEast++;

        for (int j = totalTime; j < totalTime + units; j++) {
            if (visited.find({northSouth, westEast}) == visited.end()) visited[{northSouth, westEast}] = j;
            else {
                minTime = j - visited[{northSouth, westEast}] < minTime ? j - visited[{northSouth, westEast}] : minTime;
                visited[{northSouth, westEast}] = j;
            }
        }

        totalTime += units;
    }

    cout << minTime << '\n';

    return 0;
}