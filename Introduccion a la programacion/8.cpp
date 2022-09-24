#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a > 0)
    {
        if(a >= 100)
        {
            cout << "it's hot" << endl << "water would boil"<< endl;
        }
        else if(a > 30)
        {
            cout << "it's hot" << endl;
        }
        else if(a < 10)
        {
            cout << "it's cold" << endl;
        }
        else
        {
            cout << "it's ok" << endl;
        }
    }
    else 
    {
        cout << "it's cold" << endl << "water would freeze"<< endl;
    }
}