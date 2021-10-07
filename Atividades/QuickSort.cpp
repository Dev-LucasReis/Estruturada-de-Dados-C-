#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void quicksort(int valor[], int inicio, int fim)
{
	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = valor[(inicio+fim) / 2];
	
	while(i <=j)
	{
		while(valor[i] < pivo && i < fim)
		{
			i++;
		}
	    while(valor[j] > pivo && j > inicio)
		{
			j--;
		}
		if(i <= j)
		{
			aux = valor[i];
			valor[i]=valor[j];
			valor[j]= aux;
			i++;
			j--;
		}	
	}
	if(j > inicio)
	quicksort(valor, inicio, j+1);
	if(i < fim)
	quicksort (valor, i, fim);
}


int main(int argc, char** argv) {
	
	int vetor[10] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10};
	
	for(int i = 0; i < 10; i ++)
	{
		std::cout << vetor[i] << ' ';
	}
	std::cout << std::endl;
	quicksort(vetor, 0 , 10);
	for(int i = 0; i < 10; i ++)
	{
	std::cout << vetor[i] << ' ';
	}	
	return 0;
}
