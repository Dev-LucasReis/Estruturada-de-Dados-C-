#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	float l1,l2,l3;
	
	cout << "Digite o primeiro lado: " << endl;
	cin >> l1;
	
	if(l1 <=0){
		cout << "Angulo Invalido!" << endl;
	
	}
	cout << "Digite o segundo lado: " << endl;
	cin >> l2;
	
	if(l2 <=0){
		cout << "Angulo Invalido!" << endl;
	
	}
	
	cout << "Digite o terceiro lado: " << endl;
	cin >> l3;
	
	if(l3 <=0){
		cout << "Angulo Invalido!" << endl;
	
	}
	
	//Verificando se a soma dos �ngulos do tri�ngulo equivale a 180�. Se n�o for, ent�o a figura geom�trica n�o � um tri�ngulo 
	
	if (l1 > l2 + l3 || l2 > l1 + l3 || l3 > l1 + l2 ){
		
	cout << "Nao existe um triangulo" << endl;
	
	}


cout << endl; 

//Verificando os �ngulos 

if (l1 == l2 && l2 == l3) { //Todos os �ngulos iguais, ent�o ele � equil�tero 

cout << "Este e um triangulo equilatero"; 

} else if (l1 == l2 || l2 == l3 || l1 == l3) { //Um par de �ngulos igual, ent�o � is�sceles 

cout << "Este e um triangulo isosceles"; 

} else { //Todos os �ngulos s�o diferentes, ent�o ele � escaleno 

cout << "Este e um triangulo escaleno"; 

} 

cout << endl; 
    
	return 0;
}
