#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
float n1, n2, n3, n4, media, maior, menor;

cout << "Digite o primeiro numero: " << endl;
cin >> n1;

maior = n1;
menor = n1;

cout << "Digite o segundo numero: " << endl;
cin >> n2;

if (n1 > n2){
	maior = n1;
	menor = n2;
}else {
	maior = n2;
	menor = n1;
}

cout << "Digite o terceiro numero: " << endl;
cin >> n3;

if (n3 > maior){
	maior = n3;
}else {
	menor = n3;
}

cout << "Digite o quarto numero: " << endl;
cin >> n4;

if (n4 > maior){
	maior = n4;
}else {
	menor = n4;
}

media = (n1+n2+n3+n4)/4;

cout << " A Media e: " << media << endl;
cout << " O Maior e: " << maior << endl;
cout << " O Menor e: " << menor << endl;

	return 0;
}
