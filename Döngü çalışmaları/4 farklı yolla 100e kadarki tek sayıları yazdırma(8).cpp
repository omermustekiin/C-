#include <iostream>
using namespace std;
int main ()
{

   
   int a;
   a = 1;
   while (a<100)
   {
   	 cout<< a << ", ";
   	 a+=2;
   }
   
   
   
   cout<<endl;

   a=1;
   while(a<100)
   {
   	if ( a%2 == 1)           // 2ye bölündüðünde kalaný 1, yani tek sayý
   	{ cout<< a << " ";
	   }
	   a++;
   }



   cout<<endl;

   for (int i = 1; i<100; i++)
   {
   	 if (i%2 == 1)
   	 {
   	 	cout<<i<<" ";
		}
   }
   
   
   cout<<endl;
   for ( int i = 1; i<100; i+=2)
   {
   	cout<< i << " ";
   }
}
