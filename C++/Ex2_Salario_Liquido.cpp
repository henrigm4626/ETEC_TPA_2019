#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	int idade, salario, sb1, sb2, sb3, sl, total;
	char nome[20],cargo[25];
	
	cout<<"Digite seu nome: ";
	cin>> nome;
	
	cout<<"Digite sua idade: ";
	cin>>idade;
	
	cout<<"Digite o seu cargo: ";
	cin>>cargo;
	
	cout<<"Digite o seu sal\240rio bruto: ";
	cin>>sb1;
	
	cout<<"\n";
	
	sb2=(sb1/100)*38;
	
	sb3=(sb1/100)*20;
	
	sl= sb1+sb2+sb3;
	
	total=sl-(sl*0.15);
	
	cout<<"Seu sal\240rio total \202: "<<total<<endl;
	
}
