#include<iostream>
#include <conio.h>

using namespace std;

void function(int j)
{
    static void (*const ft[2])(int) = { function, exit };

    printf("%d\n", j);
    ft[j/1000](j + 1);
}

int main(int argc, char *argv[])
{
 function(1);
}

