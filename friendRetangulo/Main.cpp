#include <iostream>
#include "Retangulo.cpp"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
    Retangulo retangulo(14, 20);
    cout << "�rea: " << calcularArea(retangulo) << endl;
    cout << "Per�metro: " << calcularPerimetro(retangulo) << endl;
}
