#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
float menor, maior, altura, area;

cout << "Digite o lado com a base menor: " << endl;
cin >> menor;
cout << "Digite o lado com a base maior: " << endl;
cin >> maior;
cout << "Digite a altura (h) da base: " << endl;
cin >> altura;

area = (maior + menor) * altura;
area = area /2;

cout << "A area do trapezio e: " << area << endl;
	return 0;
}
