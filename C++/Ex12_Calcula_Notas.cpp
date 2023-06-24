#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int  me, n1, n2, n3;
	char nome[20], ma[20];
	
	cout<<"Digite o nome do aluno: ";
	cin>>nome;
	
	cout<<"Digite a materia: ";
	cin>>ma;
	
	cout<<"Digite a nota 1: ";
	cin>>n1;
	
	cout<<"Digite a nota 2: ";
	cin>>n2;
	
	cout<<"Digite a nota 3: ";
	cin>>n3;
	
	me = (n1+n2+n3)/3;
	
	cout<<"Nome do aluno: "<<nome<<endl;
	
	cout<<"A media dele foi: "<<me<<endl;
	
	if (me>6) {
		cout<<"O aluno foi aprovado!"<<endl;
	}
	
	else{
		cout<<"O aluno foi reprovado!"<<endl;
	}		

}
