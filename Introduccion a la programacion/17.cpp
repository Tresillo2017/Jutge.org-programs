#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a1,b1,a2,b2,inf,sup;
    cin >> a1 >> b1 >> a2 >> b2;

    if (b1 < a2 || b2 < a1) // Caso 1
    {
        cout << "[]" << endl; 
    }
    else
    {
        inf = a1;
        if(a2>a1) inf = a2;
        sup = b1;
        if(b2<b1) sup = b2; 
        cout << "[" << inf << "," << sup << "]" << endl;
    }
}