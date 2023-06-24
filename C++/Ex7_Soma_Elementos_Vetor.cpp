#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int vet[20],i;
	for (i=0; i<20; i++){
		cout<<"Digite um numero "<< i+1 << ": ";
		
		cin>>vet[i];
	}	
	
	int soma=0;
	
	for (i=0; i<20; i++){
		soma += vet[i];
	}
	
	cout<<"Resultado da soma:"<< soma;
	
	getch();
}
