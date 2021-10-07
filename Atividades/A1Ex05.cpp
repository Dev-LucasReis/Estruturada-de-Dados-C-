#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int valor;
	
	cout << "Informe um valor" << endl;
	cin >> valor;
	
	if (valor % 2 == 0){
		
		    cout << valor << " e um valor Par!";
	} else {
			cout << valor << " e um valor Impar!";
	}
			
	
	
	return 0;
}
