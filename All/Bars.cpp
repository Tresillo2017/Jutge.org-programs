#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int bars = pow(2,n)-1 << endl;
    for (int i = 0; i < bars; i++) {
        cout << "*" << endl;
    }
}
