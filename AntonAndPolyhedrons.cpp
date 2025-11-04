#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string polyhedrons[] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    int faces[] = {4, 6, 8, 12, 20};

    int totalFaces = 0;
    for (int i = 0; i < n; ++i) {
        string polyhedron;
        cin >> polyhedron;

        for (int j = 0; j < 5; ++j) {
            if (polyhedron == polyhedrons[j]) {
                totalFaces += faces[j];
                break;
            }
        }
    }

    cout << totalFaces << endl;

    return 0;
}
