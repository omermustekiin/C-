#include <iostream>
using namespace std;
int main() {
	
 int mesafe,hiz;
 cout<<"Mesafeyi Km Cinsinden Giriniz: "<<endl;
 cin>>mesafe;
 
 cout<<"Hizinizi Giriniz: "<<endl;
 cin>>hiz;
 
 cout<<"Tahmini Varis Sureniz: "<< mesafe/hiz;
 int saat=mesafe/hiz;
 float dakikakismi= (float)mesafe/hiz - (int)mesafe/hiz;
 int dakika= dakikakismi * 60;
 cout<<"saat ve"<< dakika << "dakikadir"<<endl;
 }
