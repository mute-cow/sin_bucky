#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int sin_size;

    cin >> sin_size;

    for (int i = 0; i < 30; i++) {
        double k = sin(i) * sin_size;

        for (int j = -10; j <= (int)k; j++) {
            if ((int)k == j) {
                cout << "#";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}