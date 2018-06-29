#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 0)
        return 1;
    else
        return (n * factorial(n-1));
}

int main()
{
    int num, f;
    cout << "Digite o numero para calculo do fatorial" << endl;
    cin >> num;
    f = factorial(num);
    cout << num << "! = " << f << endl;
    return 0;
}
