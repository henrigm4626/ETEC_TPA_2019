#include<iostream>
#include<conio.h>

using namespace std;

int a,b,c;

int main(){
	cout<<"Digite o valor de A: ";
	cin>>a;
	
	cout<<"Digite o valor de B: ";
	cin>>b;
	
	cout<<"Digite o valor de C: ";
	cin>>c;
	
	cout<<"\n";
	
	if (a+b<c){
	cout<<"A soma de A e B \202 menor do que C";	
	}	
	
	else if (a+b>c){
	cout<<"A soma de A e B \202 maior do que C";
	}
	
	else{
	cout<<"A soma de A e B \202 igual a C";
	}
	
}
