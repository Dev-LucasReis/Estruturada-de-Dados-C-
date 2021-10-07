#include <iostream>

using namespace std;

bool VerificaPrimo(int n){
	
	if (n % 2 != 0){
	     return true;
	}else{
		 return false;
	}
}

int main(){
	
	int n;
	
	cout << "Digite um numero: " << "\n";
	cin >> n;
	
	if (VerificaPrimo(n) == true){
		
		cout << "1." << " " << "Numero Primo!";
	}else{
		
		cout << "0." << " " << "Numero nao e Primo!";
	}
	
	return 0;
}
