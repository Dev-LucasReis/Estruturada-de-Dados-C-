#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int vet[8], aux;
	
	for(int i = 0; i < 8; i++){
		cout << "Digite o " << i + 1 << " Numero: " << endl;
		cin >> vet[i];
	}
	for(int x = 0; x < 8; x++){
		for (int y = x; y < 8; y++){
			if(vet[x] > vet[y]){
				aux = vet[x];
				vet[x] = vet[y];
				vet[y] = aux;
			}	
		}
	}
	cout << endl;
	for(int z = 0; z < 8; z++){
		cout << vet[z] << endl;
	}

	return 0;
}
