#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
	int num, numfinal;
	int numpositivo;
	float EsPrimo;
	char key;
	
	do {
		
		cout << "ingrese el numero final del rango" << endl;
		cin >> numfinal;
		
		
		for ( num = 1; num <= numfinal; num++){
			
			for(int i= 2; sqrt (num); ++i) {
			if (num % i == 0)
			return false;
		}
		}
		return true;
		
		cout << "si desea continuar ingrese la letra 'n', sino ingresa cualquier otra" << endl;
		cin >> key;
		
	} while (key == 'n' || key== 'N');
	
	return 0;
}
