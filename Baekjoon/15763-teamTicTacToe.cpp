#include <iostream>

using namespace std;

char squares[5][5];
int indivCheck[30], teamCheck[30][30];
int indivAns, teamAns;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) cin >> squares[i][j];
    }

    // Horizontals:
    for (int i = 1; i <= 3; i++) {
        int square1 = squares[i][1], square2 = squares[i][2], square3 = squares[i][3];
        // Individual:
        if (square1 == square2 && square2 == square3) indivCheck[square1 - 64]++;

        // Team:
        else if (square1 == square2) teamCheck[min(square1 - 64, square3 - 64)][max(square1 - 64, square3 - 64)]++;
        else if (square1 == square3) teamCheck[min(square1 - 64, square2 - 64)][max(square1 - 64, square2 - 64)]++;
        else if (square2 == square3) teamCheck[min(square2 - 64, square1 - 64)][max(square2 - 64, square1 - 64)]++;
    }

    // Verticals:
    for (int i = 1; i <= 3; i++) {
        int square1 = squares[1][i], square2 = squares[2][i], square3 = squares[3][i];
        // Individual:
        if (square1 == square2 && square2 == square3) indivCheck[square1 - 64]++;

        // Team:
        else if (square1 == square2) teamCheck[min(square1 - 64, square3 - 64)][max(square1 - 64, square3 - 64)]++;
        else if (square1 == square3) teamCheck[min(square1 - 64, square2 - 64)][max(square1 - 64, square2 - 64)]++;
        else if (square2 == square3) teamCheck[min(square2 - 64, square1 - 64)][max(square2 - 64, square1 - 64)]++;
    }

    // Diagonals:
    // Left --> Right
    int square1 = squares[1][1], square2 = squares[2][2], square3 = squares[3][3];
    if (square1 == square2 && square2 == square3) indivCheck[square1 - 64]++;
    else if (square1 == square2) teamCheck[min(square1 - 64, square3 - 64)][max(square1 - 64, square3 - 64)]++;
    else if (square1 == square3) teamCheck[min(square1 - 64, square2 - 64)][max(square1 - 64, square2 - 64)]++;
    else if (square2 == square3) teamCheck[min(square2 - 64, square1 - 64)][max(square2 - 64, square1 - 64)]++;

    // Right --> Left
    int square4 = squares[1][3], square5 = squares[2][2], square6 = squares[3][1];
    if (square4 == square5 && square5 == square6) indivCheck[square4 - 64]++;
    else if (square4 == square5) teamCheck[min(square4 - 64, square6 - 64)][max(square4 - 64, square6 - 64)]++;
    else if (square4 == square6) teamCheck[min(square4 - 64, square5 - 64)][max(square4 - 64, square5 - 64)]++;
    else if (square5 == square6) teamCheck[min(square5 - 64, square4 - 64)][max(square5 - 64, square4 - 64)]++;

    // Individual Check:
    for (int i = 1; i <= 26; i++) {
        if (indivCheck[i] > 0) indivAns++;
    }

    // Team Check:
    for (int i = 1; i <= 26; i++) {
        for (int j = 1; j <= 26; j++) {
            if (teamCheck[i][j] > 0) teamAns++;
        }
    }

    cout << indivAns << "\n";
    cout << teamAns << "\n";

    return 0;
}