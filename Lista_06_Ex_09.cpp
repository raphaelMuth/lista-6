#include <iostream>
using namespace std;

int main (){

	int j = -3;
	
	for (int i = 0; i < 3; ++i){
		j += 2;
		switch (j){
			case 3:
			case 2:
				j--;
				goto end;
			case 0:
				j += 2;
				goto end;
			default:
				j = 0;
		}
		
		if (j > 0)
			goto end;	
			
		j = 3 - 1;
	}
	
	end:	
	return 0;	
}
