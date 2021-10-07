#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int vetA[7], vetB[7];
	char vetS[7];
	float vetR[7];
	
	for(int i = 0; i < 7; i++){
		cout << "Digite o " << i+1 << " numero do Vetor A:"<< endl;
		cin >> vetA[i];
	}
	system("cls");
	for(int i = 0; i < 7; i++){
		cout << "Digite o " << i+1 << " numero do Vetor B:"<< endl;
		cin >> vetB[i];
	}
	system("cls");
	for(int i = 0; i < 7; i++){
		cout << "Digite o simbolo da " << i+1 << " operacao matematica (exemplo: +, -, /, *):"<< endl;
		cin >> vetS[i];
	}
	system("cls");
	for(int i = 0; i < 7; i++){
		if(vetS[i] == '+'){
			vetR[i] = vetA[i] + vetB[i];
			cout << vetA[i] << " " << vetS[i] << " " << vetB[i]<< " = " << vetR[i] << endl; 
		}
		else if(vetS[i] == '-'){
			vetR[i] = vetA[i] - vetB[i];
			cout << vetA[i] << " " << vetS[i] << " " << vetB[i]<< " = " << vetR[i] << endl; 
		}
		else if(vetS[i] == '*'){
			vetR[i] = vetA[i] * vetB[i];
			cout << vetA[i] << " " << vetS[i] << " " << vetB[i]<< " = " << vetR[i] << endl; 
		}
		else{
			vetR[i] = vetA[i] / vetB[i];
			cout << vetA[i] << " " << vetS[i] << " " << vetB[i]<< " = " << vetR[i] << endl; 
		}
	}
	cout << "Vetor de Respostas: " << endl;
	for(int i = 0; i < 7; i++){
		cout << vetR[i] << " / ";
	}

	return 0;
}
