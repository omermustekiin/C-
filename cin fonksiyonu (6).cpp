#include <iostream>
using namespace std;
int main()
{
	int a;
	a = 30;
	cin >> a;
	cout << a << " degerini girdiniz " << endl;
	cout << " girdiginiz degeri senin icin 2 ile carptik : " << a * 2 << endl;

	int b;
	b = 120;
	cin >> b;
	cout << b << " degerini girdiniz " << endl;
	cout << " girdigin degerin 5 ile bolumunden kalani verelim: " << b%5 << endl;

	int c;
	c = b - 10;
	cin >> c;
	cout << c << " degerini girdiniz " << endl;
	cout << " girdigin degerden 30 cikaralim: " << c-30 << endl;
}

