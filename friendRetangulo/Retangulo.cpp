class Retangulo{
  private:
    double comprimento_, largura_;
  public:
    Retangulo(double comprimento, double largura):comprimento_(comprimento), largura_(largura){}
    Retangulo():comprimento_(1), largura_(1){}
    friend double calcularArea(Retangulo &retangulo);
    friend double calcularPerimetro(Retangulo &retangulo);
};

double calcularPerimetro(Retangulo &retangulo){
  return 2*(retangulo.comprimento_ + retangulo.largura_);
}

double calcularArea(Retangulo &retangulo){
  return retangulo.comprimento_ * retangulo.largura_;
}