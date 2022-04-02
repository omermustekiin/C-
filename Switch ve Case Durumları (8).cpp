#include <iostream>
using namespace std;
int main()
{
	int a;
	a=1;
	switch(a){
	
	case 1 : cout<<'1';              //break; görmediði için alttaki iþlemi de uygulayacak
	 
	case 2 : cout<<'2';
	    break;
	
	default:
	    cout<<"Other Situations"<<endl;	   
}
	
}
