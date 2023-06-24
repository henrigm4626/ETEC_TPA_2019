#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	
	int vet[20];
	
	for(int i=0; i < 20; i++){
		
		cout << "Digite os n\243meros: ";
		
		cin >> vet[i];
	}

	sort(vet, vet+20);
	
	for (int i=0; i < 20; i++)
	{
	
		int var = 19-i; 
		
		cout << vet[var]<<" ";
	}
}

