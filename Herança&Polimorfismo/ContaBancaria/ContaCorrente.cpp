#include "Conta.h"
#include "ContaCorrente.h"

double porcentagemTaxa_;

double ContaCorrente::calcularTaxaDeSaque(double saque){
    return saque * porcentagemTaxa_;
}
    
double ContaCorrente::sacar(double saque){
  if(validarSaque(saque)){
    saldo_ -= saque;
    return saque - calcularTaxaDeSaque(saque);
  }
  return 0;
}