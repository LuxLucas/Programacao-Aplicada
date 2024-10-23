#ifndef CONTA_H
#define CONTA_H

class Conta{
  protected:
    double saldo_, limite_;
    bool validarSaque(double saque);
  public:
    Conta(double saldoInicial, double limite):saldo_(saldoInicial), limite_(limite){};
    Conta(double saldoInicial);
    Conta():saldo_(0),limite_(1405){};
    double getSaldo();
    void depositar(double deposito);
    virtual double sacar(double saque);
};

#endif // CONTA_H