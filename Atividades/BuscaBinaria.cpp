#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;



int main(int argc, char** argv) {
	
	srand(time(NULL));
	int dados[10];
	int auxiliar;
	
//popular o vetor
	for(int i=0; i < 10; i++)
	{
		dados[i]=rand()%10;
	}


//ordenar em ordem crescente
	for(int i=0; i < 10; i++)
	{
		for(int j=i+1; j < 10; j++)
		{
			if(dados[i] > dados[j])
			{
				auxiliar = dados[i];
				dados[i] = dados[j];
				dados[j] = auxiliar;
			}
		}
	}
	
	cout<<endl;
//mostrar o vetor
	for(int i=0; i < 10; i++)
	{
		cout<< dados[i];
	}
	
	return 0;
}
