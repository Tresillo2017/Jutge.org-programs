#include <iostream>
using namespace std;
int main() {
    char x;
    cin >> x;
    if (x >= 97)
    {
        cout << "lowercase" << endl;
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        {
            cout << "vowel" << endl;
        }
        else
        {
            cout << "consonant" << endl;
        }
    }
    else
    {
        cout << "uppercase" << endl;
        if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
        {
            cout << "vowel" << endl;
        }
        else
        {
            cout << "consonant" << endl;
        }
    }
}