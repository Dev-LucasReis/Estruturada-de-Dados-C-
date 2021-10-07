#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int ano; 

 

//Lendo o ano informado pelo usu�rio 

cout << "Informe um ano: "; 

cin >> ano; 

 

//Validando o ano (n�o pode ser negativo) 

if (ano < 0) { 

cout << endl << "Ano invalido!" << endl; 

return 0; 

} 

 

cout << endl; 

 

//Verifica se o ano � divis�vel por 400 

bool divisivelPor400 = (ano % 400 == 0); 

 

//Verifica se o ano � divis�vel por 4 e n�o por 100 

bool divisivelPor4 = (ano % 4 == 0 && ano % 100 != 0); 

 

//Um ano � considerado bissexto se uma das duas condi��es acima for verdadeira 

if (divisivelPor400 || divisivelPor4) { 

cout << "Ano " << ano << " e bissexto!"; 

} else { 

cout << "Ano " << ano << " nao e bissexto!"; 

} 

 

cout << endl; 

 

return 0; 
	
}
