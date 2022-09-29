#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a1,b1,a2,b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 && b1 == b2) // Caso 1
    {
        cout << "=" << endl; 
    }
    else if (a1 <= a2 && b1 >= b2)
    {
        cout << "2" << endl;
    }
    else if(a2 <= a1 && b1 <= b2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "?" << endl;
    }
    
}