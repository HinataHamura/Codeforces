#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string exhibit;
    cin >> exhibit;
    int rotations = 0;
    char current = 'a';
    for (char c : exhibit)
    {
        int clockwise = abs(c - current);
        int counterclockwise = 26 - clockwise;
        rotations += min(clockwise, counterclockwise);
        current = c;
    }

    cout << rotations << endl;

    return 0;
}
