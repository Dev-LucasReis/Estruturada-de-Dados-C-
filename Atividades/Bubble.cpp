#include <iostream>

using namespace std;

void ordenar(int vet[], int tamanho){
    int k, j, aux;

    for (k = 1; k < tamanho; k++) {
        for (j = 0; j < tamanho - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}


int main(){
	
	int x[10];
	
	for(int i=0;i<10;i++){ // preenchimento do vetor dado pelo terminal
        cout << "Digite o " << i << " numero da sequencia do vetor: ";
        cin >> x[i];
    }
    
    ordenar(x, 10);
	
	cout << "\n";
	
	for(int k=0;k<10;k++){
        cout << x[k] << "\t";
    }
    
	return 0;
}
