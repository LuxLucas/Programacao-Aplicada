#include <iostream>
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
using namespace std;

int main() 
{
    setlocale(LC_ALL, "portuguese");
  
    ContaPoupanca contaPoupanca(1200, 1907.65);
    ContaCorrente contaCorrente(1000.5, 2700, 0.1);
    
    // Depósito
    contaPoupanca.depositar(150.01);
    contaCorrente.depositar(125.84);
    
    //Saque
    cout << "Sacando R$500,00" << endl;
    cout << "Saque Conta Poupança: " << contaPoupanca.sacar(500) << endl;
    cout << "Saque Conta Corrente: " << contaCorrente.sacar(500) << endl;
    
    return 0;
}