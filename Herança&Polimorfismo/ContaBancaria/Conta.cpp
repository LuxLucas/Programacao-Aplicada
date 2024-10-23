#include <string>
#include "Conta.h"

double saldo_, limite_;
bool Conta::validarSaque(double saque){return saque <= limite_;}
    
double Conta::getSaldo(){
    return saldo_;
}

void Conta::depositar(double deposito){
    saldo_ += deposito;
}

double Conta::sacar(double saque){
  if(validarSaque(saque)){
    saldo_ -= saque;
    return saque;
  }
  return 0;
}