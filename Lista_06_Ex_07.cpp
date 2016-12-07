#include <iostream>
using namespace std;

int main (){

	int k = 0;
	int j = 0;
	
	cout << "Digite um valor entre 1 - 8: ";
	cin >> k;
	
	switch (k){
		case 1:
		case 2:
			j = 2 * k - 1;
			break;
			
		case 3:
		case 5:
			j = 3 * k - 1;
			break;
			
		case 4:
			j = 4 * k - 1;
			break;		
			
		case 6:
		case 7:
		case 8:
			j = k - 2;
			break;
	}
	
	cout << "K: " << k << "  J: " << j << endl;
	
	return 0;
}
