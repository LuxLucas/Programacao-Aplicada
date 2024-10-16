#include <iostream>
#include "Retangulo.cpp"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "portuguese");
    Retangulo retangulo(14, 20);
    cout << "Área: " << calcularArea(retangulo) << endl;
    cout << "Perímetro: " << calcularPerimetro(retangulo) << endl;
}
