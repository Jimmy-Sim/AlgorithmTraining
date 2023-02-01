#include <iostream>

using namespace std;

const int MAX = 1005;

int N, M;
char mirrors[MAX][MAX];
int count, maxCount;

void pointLaser(int row, int col, string prevPos) {
    count = 0;
    while ((row >= 0 && row < N) && (col >= 0 && col < M)) {
        char mirror = mirrors[row][col];
        if (prevPos == "left") {
            if (mirror == '/') {
                row--;
                prevPos = "down";
            }
            else {
                row++;
                prevPos = "up";
            }
        }
        else if (prevPos == "right") {
            if (mirror == '/') {
                row++;
                prevPos = "up";
            }
            else {
                row--;
                prevPos = "down";
            }
        }
        else if (prevPos == "up") {
            if (mirror == '/') {
                col--;
                prevPos = "right";
            }
            else {
                col++;
                prevPos = "left";
            }
        }
        else {
            if (mirror == '/') {
                col++;
                prevPos = "left";
            }
            else {
                col--;
                prevPos = "right";
            }
        }

        count++;
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> mirrors[i][j];
    }

    // Left vertical:
    for (int i = 0; i < N; i++) {
        pointLaser(i, 0, "left");
        maxCount = count > maxCount ? count : maxCount;
    }
    // Upper horizontal:
    for (int i = 0; i < M; i++) {
        pointLaser(0, i, "up");
        maxCount = count > maxCount ? count : maxCount;
    }
    // Right vertical:
    for (int i = 0; i < N; i++) {
        pointLaser(i, M - 1, "right");
        maxCount = count > maxCount ? count : maxCount;
    }
    // Lower horizontal:
    for (int i = 0; i < M; i++) {
        pointLaser(N - 1, i, "down");
        maxCount = count > maxCount ? count : maxCount;
    }

    cout << maxCount << '\n';

    return 0;
}