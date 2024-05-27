#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "ingrese tamaño de arrego de numeros : ";
    cin >> n;

    int num[n];
    int par[n];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "ingrese un numero : ";
        cin >> num[i];
        {
            par[j] = num[i];
            j++;
        }
    }
    cout << " El arreglo original es : " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "\n";
    }
    cout << "El arreglo de pares es : ";
    for (int k = 0; k < j; k++)
    {
        cout << par[k] << "\n";
    }

    return 0;
}