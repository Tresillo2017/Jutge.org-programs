#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    if(a>=b && a>=c)
    {
        d = a;
    }
    else if(b>=c && b>=a)
    {
        d = b;
    }
    else if(c>=b && c>=a)
    {
        d = c;
    }
    cout << d << endl;
}