
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "lutfen notunuzu giriniz" << endl;
	cin >> a;

	if (a < 50) {
		cout << "F" << endl;
	}
	
	else if (a < 70) {
		cout << "C" << endl;
	}
	
	else if (a < 90) {
		cout << "B" << endl;

	}

	else if (a<100){
		cout << "A" << endl;
	}

	else 
	{
		cout << "YOU ARE GREAT" << endl;
	}
}

