#include <iostream>
#include <cmath>
using namespace std;
string intersecion(int a1, int b1, int a2, int b2)
{
	int inf,sup;

    if (b1 < a2 || b2 < a1)
    {
        // cout << "? " << ", " << "[]" << endl; 
        return "[]";
    }
    else
    {
        inf = a1;
        if(a2>a1) inf = a2;
        sup = b1;
        if(b2<b1) sup = b2; 
        // cout << "[" << inf << "," << sup << "]" << endl;
        string s = "[" +  to_string(inf) + "," + to_string(sup) + "]";
        return s;
    }
}

int main()
{
	int a1,b1,a2,b2;
    string resultado;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 && b1 == b2) // Caso 1
    {
        resultado = "="; 
    }
    else if (a1 <= a2 && b1 >= b2)
    {
        resultado = "2";
    }
    else if(a2 <= a1 && b1 <= b2)
    {
        resultado = "1";
    }
    else
    {
        resultado = "?";
    }
    cout << resultado << " , " << intersecion(a1,b1,a2,b2) << endl;
}