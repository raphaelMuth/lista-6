#include <iostream>
using namespace std;

int main (){
	
	int i = 0, j = 0, k = 0;
	
	k = (j + 13) / 27;
	
	while (k < 10) {
		if (k > 10) break;
		
		k = k + 1;
		i = 3 * k - 1;
	}
	
	cout << "K: " << k << "   I: " << i << endl;
	
	return 0;
}
