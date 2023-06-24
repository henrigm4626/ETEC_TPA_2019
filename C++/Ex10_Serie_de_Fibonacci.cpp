#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int t1 = 0, t2 = 1, proxNum = 0, n;
    cout << "Digite um n\243mero livre: ";
    cin >> n;
    cout << "S\202rie de Fibonacci: " << t1 << ", " << t2 << ", ";
    proxNum = t1 + t2;
    while(proxNum <= n)
    {
        cout << proxNum << ", ";
        t1 = t2;
        t2 = proxNum;
        proxNum = t1 + t2;
    }
    return 0;
}
	
