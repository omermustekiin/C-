#include <iostream>
using namespace std;

int main()
{
	int a;
	a = 10;
	cout << a << endl;

	a++; 
	cout << a << endl; //(a nın değerini bir arttıır. POSTFİX - 11 )

	++a;
	cout << a << endl; //(bu da a nın değerini arttırır. PREFİX - 12 )

	/* POSTFİX ve PREFİX arasındaki fark:
	   POSTFİX: a nın değerini işleme al, bir arttır.
	   PREFİX: a nın değerini bir arttır, işleme al. */

	int b;
	b = 20;
	cout << a+b << endl;

	--b;
	cout << b << endl;

	b--;
	cout << b << endl;

	cout << 10+20*2 << endl; // ( İşlem Önceliği. )

	cout << 15%2 << endl; // (15 in 2 ye bölümünden kalanı yani 1 i verir.)

	int x = 10;
	x -= 1; // x = x - 1  ,  x--  ,  --x     AYNIDIR.
	cout << x << endl;

	int y = 5;
	y *= 2;
	cout << y << endl;









	  


}

