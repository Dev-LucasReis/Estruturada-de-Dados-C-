#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


class matematica{
	
	public:
		
		int a,b;
		
		void entrada(){
			cout <<"Digite um numero:" << "\n";
			cin>> a;
			
			cout <<"Digite outro numero:" << "\n";
			cin>> b;
		}
		
		int soma(){
			return a + b;
		}
		
		int multiplicacao(){
			return a * b;
		}
		
		int subtracao(){
			return a - b;
		}
		
		int divisao(){
			
			if(a == 0 & b == 0){
				cout<<"Nao pode dividir por 0";
			}		
			return a / b;
		}		
		
};




int main(int argc, char** argv) {
	
	matematica obj;
	obj.entrada();
	cout<<"\n";
	cout<<obj.soma()<<"\n";
	cout<<obj.multiplicacao()<<"\n";
	cout<<obj.subtracao()<<"\n";
	cout<<obj.divisao()<<"\n";
		
	return 0;
}
