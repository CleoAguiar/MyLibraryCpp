/*
Invete String
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char str[90];
    int tmp, c;
    cout << "Digite String para inversao:" << endl;
    scanf("%89s", str);
    for(c=0; str[c]!='\0'; c++){}//comprimento da string
    for(int i=0, j=c-1; i<c/2; i++, j--){//inversao dos caracteres
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
    cout << "String inversa \""<< str << "\"";
    return 0;
}
