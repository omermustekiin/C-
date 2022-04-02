#include <iostream>
using namespace std;

int main() {
	
	int x,y,z;
	cout<<"Birinci Kenari Giriniz: "<<endl;
	cin>>x;
	
	cout<<"Ikinci Kenari Giriniz: "<<endl;
	cin>>y;
	
	cout<<"Ucuncu Kenari Giriniz: "<<endl;
	cin>>z;
	
if(x*x+y*y==z*z || y*y+z*z==x*x || x*x+z*z==y*y) {
   	cout<<"Bu Bir Ozel Ucgendir."<<endl;
   }
   	 else {
   		cout<<"Bu Bir Ozel Ucgen degildir."<<endl;
}

	
	

	
}

