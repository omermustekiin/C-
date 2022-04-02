#include <iostream>
using namespace std;
int main ()
{
	
	int x,y,z;
  
  cout<<"Lutfen Birinci Sayiyi Giriniz:"<<endl;
  cin>>x;
  
  cout<<"Lutfen lkinci Sayiyi Giriniz:"<<endl;
  cin>>y;
  
  cout<<"Lutfen Ucuncu Sayiyi Giriniz:"<<endl;
  cin>>z;
  
  int enbuyuk = x;
  
  if(y>enbuyuk)
  enbuyuk=y;
  
  if(z>enbuyuk)
  enbuyuk=z;
  
  int enkucuk=x;
  
  if(y<enkucuk)
  enkucuk=y;
  
  if(z<enkucuk)
  enkucuk = z;
  
  cout<<"enbuyuk:"<< enbuyuk << endl;
  cout<<"enkucuk:"<< enkucuk<< endl;
	
	
	
	
	
}
