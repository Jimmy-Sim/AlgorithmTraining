#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n--) {
        string polyhedron;
        cin >> polyhedron;

        if (polyhedron == "Tetrahedron") count += 4;
        else if (polyhedron == "Cube") count += 6;
        else if (polyhedron == "Octahedron") count += 8;
        else if (polyhedron == "Dodecahedron") count += 12;
        else count += 20;
    }

    cout << count << '\n';

    return 0;
}