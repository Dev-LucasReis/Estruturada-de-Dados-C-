#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int fib(int n);

int main(int argc, char** argv) {
	int x;
	
	cout << "Digite o numero que deseja iniciar a sequencia: " << endl;
	cin >> x;
	
	for (int i = 1; i <= x; i ++){
		
		cout << fib (i) << endl;
	}
	return 0;
}

int fib (int n){
	
	if (n == 1 || (n == 2)){
	   return 1;	
	}else {
		return fib (n - 1) + fib (n - 2);
	}
}
