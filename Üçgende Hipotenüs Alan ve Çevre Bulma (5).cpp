#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a,b,c;
	cout<<"A Kenarini Giriniz:"<<endl;
	cin>>a;
	cout<<"B Kenarini Giriniz:"<<endl;
	cin>>b;
	
	c= sqrt(a*a+b*b);
	cout<<"Hipotenus Degerin: "<< (float)c << endl;
	cout<<"Ucgenin Cevresi: "<< a+b+c <<endl;
	cout<<"Ucgenin Alani: "<< (float)a*b/2<<endl;
	
	
	




}
