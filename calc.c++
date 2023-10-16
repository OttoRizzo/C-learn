#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    // Recebendo os dados
    cout << "Primeiro numero: "; // Adicionado um espaço ao final da string
    cin >> num1;  // Lê o primeiro numero
    
    cout << "Segundo numero: ";
    cin >> num2; // Lê o segundo numero

    // Exibição das operações

    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtração: " << num1 - num2 << endl;
    cout << "Multiplicação: " << num1 * num2 << endl; // Corrigido o espaço extra aqui
    cout << "Divisão: " << num1 / num2 << endl;

    return 0;
}

