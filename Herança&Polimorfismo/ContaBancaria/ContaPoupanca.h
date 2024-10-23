#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

class ContaPoupanca: public Conta{
  public:
    ContaPoupanca(double saldo, double limite);
    ContaPoupanca();
};

#endif //CONTAPOUPANCA_H