#include <sstream>
#include <string>
using namespace std;

class Complex{
  private:
    int real_, imaginario_;
    
  public:
    Complex(int real, int imaginario): real_(real),imaginario_(imaginario){}
    Complex(): real_(0), imaginario_(0){}
    
    int getReal(){
      return real_;
    }
    
    int getImaginario(){
      return imaginario_;
    }
    
    Complex operator+(Complex& numeroComplexo){
      int realResultante = real_ + numeroComplexo.getReal();
      int imaginarioResultante = imaginario_ + numeroComplexo.getImaginario();
      return Complex(realResultante, imaginarioResultante);
    }
        
    string retornarSinal(int imaginario){
		return imaginario >= 0 ? "+":"";
	}
        
    friend ostream& operator<<(ostream& os, Complex& numeroComplexo){
      stringstream exibicao;
	  exibicao << "(" << numeroComplexo.getReal() << numeroComplexo.retornarSinal(numeroComplexo.getImaginario()) << numeroComplexo.getImaginario() << "i)";
      return os << exibicao.str();
    }
    
};
