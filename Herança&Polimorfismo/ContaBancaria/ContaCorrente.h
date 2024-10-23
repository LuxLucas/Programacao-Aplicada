#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente: public Conta{
  protected:
    double porcentagemTaxa_;
    double calcularTaxaDeSaque(double saque);
    
  public:
    ContaCorrente(double saldo, double limite, double porcentagemTaxa):Conta(saldo, limite), porcentagemTaxa_(porcentagemTaxa){};
    ContaCorrente(double saldo, double limite):Conta(saldo, limite), porcentagemTaxa_(0.05){};
    double sacar(double saque) override;
};

#endif //CONTACORRENTE_H