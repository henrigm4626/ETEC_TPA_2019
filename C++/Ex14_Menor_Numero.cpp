#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ 
	int a, b ,c;
	
	cout<<("Digite o numero 1: ");
	cin>>a;
	
	cout<<("Digite o numero 2: ");
	cin>>b;
	
	cout<<("Digite o numero 3: ");
	cin>>c;
	cout<<"\n";
	
	if (a<b && a<c){ 
	cout<< ("O numero 1 \202  o menor n\243mero")<<endl;
	}
	
	else if (b<a && b<c){
		cout<<("O numero 2 \202  o menor n\243mero")<<endl;
	}
		
	else{
		cout<<("O numero 3 \202 o menor n\243mero")<<endl;
	}
			
}
