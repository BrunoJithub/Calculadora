#include <iostream>
using namespace std;

int main() {


    double a, b;

    char op;

    char again = 's';

    cout<<"Calculadora simples\n";

    while (again == 's' || again == 'S') {

        cout << "\nEscreva uma conta: ";

        cin >> a >> op >> b;

        double result;

        bool valid = true;

        switch (op) {

            case '+':

                result = a + b;

                break;

            case '-':

                result = a - b;

                break;

            case '*':

                result = a * b;

                break;

            case '/':

                if (b == 0) {

                    cout << "Erro: Dividido por zero!\n";

                    valid = false;

                } else {

                    result = a / b;

                }

                break;

            default:

                cout << "Erro: operador desconhecido " << op << "'\n";

                valid = false;

        }

        if (valid) {

            cout << "Resultado: " << result << "\n";

        }

        cout << "Fazer outra conta? (s/n): ";

        cin >> again;
    
    }


    return 0; 
} 
