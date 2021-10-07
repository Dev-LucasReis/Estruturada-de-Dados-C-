#include <iostream>
#include <stdlib.h>
using namespace std;


class PosPar{
	
	
	
	public:
		int n;
	
	void entrada(){
		cout <<"Digite um numero:" <<"\n";
		cin >> n ;
	}
	
	bool VerificaPosPar(){
	
	if(n >= 0 && n % 2 == 0){
		return true;
	}else{
		return false;
	}
}

int cont(){
	
	int aux = 1;
	
	while(VerificaPosPar() == true){
		
		entrada();

        aux = aux + 1;
        	
		}if(VerificaPosPar() == false){
			
			aux = aux - 1;
		}
		
		return aux;
	}
	
	

};



int main(){
	
PosPar obj;
obj.entrada();
cout<<"\n";
cout<< obj.VerificaPosPar() << "\n";
cout << "Quantidade de numeros pares e positivos: " << "\n" <<obj.cont();
	
	return 0;
}
