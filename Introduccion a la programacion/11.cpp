#include <iostream>
using namespace std;
int main() {
    char x;
    cin >> x;
    if (x >= 97)
    {
        cout << (char) (x-32) << endl;
    }
    else
    {
        cout << (char) (x+32) << endl;
    }
}