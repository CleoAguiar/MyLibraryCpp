#include <iostream>

using namespace std;

int main()
{
    int num, factorial=1;
    cout << "Digite o numero para calculo do fatorial" << endl;
    cin >> num;
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    cout << num << "! = " << factorial << endl;
    cin.get();
    return 0;
}
