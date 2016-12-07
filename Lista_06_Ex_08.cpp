#include <iostream>
using namespace std;

int main (){

	int x[10][10];
	bool parou = false;
	
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10;++j){
			x[i][j] = 0;
		}
	}
	

	for (int i = 0; i < 10; ++i){
		
		for (int j = 0; j < 10; ++j){
			
			if (x[i][j] != 0){
				parou = true;
				break;
			}
		}
		if (parou) break;
		cout << "Primeira linha de Zeros: " << i << endl;
		break;
	}
	
	return 0;
}
