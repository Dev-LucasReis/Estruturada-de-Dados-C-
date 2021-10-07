#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int idade;
	
	cout << "Informe a sua idade: " << endl;
	cin >> idade;
	
	if (idade >= 0 & idade <= 11){
		
		cout << "E uma Crianca!";
	}
	
	if (idade >= 12 & idade <= 17){
		
		cout << "E um Adolecente!";
	}
	
	if (idade >= 18 & idade <= 49){
		
		cout << "E um Adulto(a)!";
	}
	
	if (idade >= 50){
		
		cout << "E um Idoso(a)!";
	}
		
	return 0;
}
