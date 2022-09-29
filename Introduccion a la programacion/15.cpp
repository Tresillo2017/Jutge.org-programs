#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int e, c, nbilletes, nmonedas; // e = euros; c = cents
    cin >> e >> c;
    // Billetes
    nbilletes = e/500;
    cout << "Banknotes of 500 euros: " << nbilletes << endl;
    e = e-nbilletes*500;

    nbilletes = e/200;
    cout << "Banknotes of 200 euros: " << nbilletes << endl;
    e = e-nbilletes*200;

    nbilletes = e/100;
    cout << "Banknotes of 100 euros: " << nbilletes << endl;
    e = e-nbilletes*100;

    nbilletes = e/50;
    cout << "Banknotes of 50 euros: " << nbilletes << endl;
    e = e-nbilletes*50;

    nbilletes = e/20;
    cout << "Banknotes of 20 euros: " << nbilletes << endl;
    e = e-nbilletes*20;

    nbilletes = e/10;
    cout << "Banknotes of 10 euros: " << nbilletes << endl;
    e = e-nbilletes*10;

    nbilletes = e/5;
    cout << "Banknotes of 5 euros: " << nbilletes << endl;
    e = e-nbilletes*5;

    c = c+e*100;
    // Centimos
    nmonedas = c/200;
    cout << "Coins of 2 euros: " << nmonedas << endl;
    c = c-nmonedas*200;

    nmonedas = c/100;
    cout << "Coins of 1 euro: " << nmonedas << endl;
    c = c-nmonedas*100;

    nmonedas = c/50;
    cout << "Coins of 50 cents: " << nmonedas << endl;
    c = c-nmonedas*50; 

    nmonedas = c/20;
    cout << "Coins of 20 cents: " << nmonedas << endl;
    c = c-nmonedas*20;

    nmonedas = c/10;
    cout << "Coins of 10 cents: " << nmonedas << endl;
    c = c-nmonedas*10;

    nmonedas = c/5;
    cout << "Coins of 5 cents: " << nmonedas << endl;
    c = c-nmonedas*5;

    nmonedas = c/2;
    cout << "Coins of 2 cents: " << nmonedas << endl;
    c = c-nmonedas*2;

    nmonedas = c/1;
    cout << "Coins of 1 cent: " << nmonedas << endl;
}