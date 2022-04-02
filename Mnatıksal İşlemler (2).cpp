#include <iostream>
using namespace std;
int main() {
	
	int x,y;
	cout<<"Lutfen ilk Sayinizi Giriniz:"<<endl;
	cin >> x;
	cout<<"Lutfen ikinci Sayinizi Giriniz:"<<endl;
	cin>> y;
	
	if(x == y) {
		
		cout<< "Sayilar Esittir"<<endl;
   }
 
    else {
    	cout<<"Sayilar Esit Degildir"<<endl;
   }
	
	if(x != y) {
		cout<<"Sayilar Farklidir"<<endl;
	}

	else {
		cout<<"Sayilar Farkli Degildir"<<endl;
	}
	
	if(x<y) {
		  cout<<"ilk sayi kucuktur"<<endl;
   }
   
	else {
	      cout<<"ilk sayi kucuk degildir"<<endl;
	  }
		  
    
   	if(x>y) {
		  cout<<"ilk sayi buyuktur"<<endl;
	}
    
	else {
	      cout<<"ilk sayi buyuk degildir"<<endl;
	  }

   	if(x<=y) {
		  cout<<"ilk sayi ikinciye kucuk esittir"<<endl;
	}
    
	else {
	      cout<<"ilk sayi ikinciye kucuk esit degildir"<<endl;
	  }
		  
	if(x>=y) {
          
		  cout<<"ilk sayi ikinciye buyuk esittir"<<endl;
	}
    
	else {
	      cout<<"ilk sayi ikinciye buyuk esit degildir"<<endl;
	  }
		
	

}
