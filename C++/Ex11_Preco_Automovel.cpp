#include <conio.h>
#include <iostream>

using namespace std;

int main ()
{
	int imp, pf, por, total;
	char nome[15];

	cout<<"Nome do autom\242vel: ";
	cin>>nome;
	
	cout<<"Pre\207o de f\240brica: ";
	cin>>pf;
	
	cout<<"\n";
	
	imp= pf *0.45;
	
	por= pf *0.28;
	
	total= pf+por+imp;
	
	cout<<"Pre\207o final: "<<total;

}

