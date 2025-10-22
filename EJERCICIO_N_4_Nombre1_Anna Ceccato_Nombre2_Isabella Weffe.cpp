#include <iostream>

using namespace std;

int main (){
	
	int num, suma=0, i= 1;
	char key;
	
	do {
	cout << "ingrese un numero entero que sea positivo:" << endl;
	cin >> num;
	
	
		
		if (num <= 0) {
			cout << "ingrese un numero positivo:" << endl;
			cin >> num;
		}
		
		
		for (i=1; i< num; i++){
			if (num % i==0) {
				suma+= i;
			
			}
		}
		
		if (suma == num){
			cout << num << " es un numero perfecto" << endl;
		} else {
			cout << num << " no es un numero perfecto" << endl;
		}
		
		cout << "si desea continuar ingrese la letra 'n', sino ingresa cualquier otra" << endl;
		cin >> key;

	}while (key == 'n' || key== 'N');
	
	return 0;
}
