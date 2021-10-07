#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class triangulo{
	
	public:
		
		int a,b,c;
		
		void entrada(){
			
			cout<<"Digite um numero: " <<"\n";
			cin>> a;
			
			cout<<"Digite outro numero: " <<"\n";
			cin >> b;
			
			cout<<"Digite mais um numero: " <<"\n";
			cin>> c;
		} 
		
		bool VerificaTriangulo(){
			
			if(a + b > c && b + c > a && a + c > b){
				return true;
			}else{
				return false;
			}
			
		}
		
		string triangulos(){
			
			if(VerificaTriangulo() == false){
			  cout <<"Nao e um triangulo!";
		}else {
			 if(a == b & b == c & c == a){
				 cout<<"Equilatero"; 
				
			}else if(a != b & b != c & a != c){
				 cout <<"Escaleno"; 
			}else
			     cout<<"Isosceles"; 
	   }
    }
    
    	 
	     	 
};

int main(int argc, char** argv) {
	
	triangulo obj;
	obj.entrada();
	cout<<"\n";
	cout<<obj.VerificaTriangulo() << "\n" <<" ",obj.triangulos();

return 0;
}
