#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
float pies, pulgadas, yardas, metros, centimetros;

cout << " INTRODUSCA PIES: \n ";
cin >> pies;
pulgadas = pies * 12;
yardas = pies / 3;
centimetros = pulgadas * 2.54;
metros = centimetros / 100;
cout << "  RESPUESTA EN PIES " << pies << endl;
cout << " RESPUESTA EN PULGAS " << pulgadas << endl;
cout << " RESPUESTAS EN YARDAS " << yardas << endl;
cout << " RESPUETAS EN CENTIMETROS " << centimetros << endl;
cout << " RESPUESTAS EN METROS " << metros << endl;

return 0;
}