#include <iostream>

using namespace std;

int main()
{
    int cont = 2, n, t1 = 0, t2 = 1, display = 0;
    cout << "Digite a quantidade de termos: " << endl;
    cin >> n;
    cout << "Fibonacci Serie (" << n << "): ";
    if (n >= 1) {cout << t1;
        if (n >= 2) cout << " + " << t2;
        }
    while(cont < n){
        display = t1 + t2;
        t1 = t2;
        t2 = display;
        ++cont;
        cout << " + " << display;
    }
    return 0;
}
