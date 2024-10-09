#include <iostream>
#include "Complex.cpp"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
    Complex primeiroNumeroImaginario(2,5), segundoNumeroImaginario(4,-7);
    Complex somaImaginario = primeiroNumeroImaginario + segundoNumeroImaginario;
    
    cout << "Primeiro número complex: " << primeiroNumeroImaginario << endl;
    cout << "Segundo número complex: " << segundoNumeroImaginario << endl;
    cout << "Resultado da soma: " << somaImaginario << endl; 
}
