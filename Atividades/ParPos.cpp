#include <iostream>

using namespace std;


bool VerificaPosPar(int n){
	
	if(n >= 0 && n % 2 == 0){
		return true;
	}else{
		return false;
	}
}

int cont(int n){
	
	int aux = 0;
	
	while(VerificaPosPar(n) == true){
		
		cout << "Digite um numero: " << "\n";
	    cin >> n;

        aux = aux + 1;
        
        if(VerificaPosPar(n) == false){
        	
        	aux = aux - 1;
		}
	}
	
	return aux;
}

int main(){
	
int n;
	
	cout << "\n";
	cout << "Quantidade de numeros pares e positivos: " << "\n" << cont(n);
	
	return 0;
}
