#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
const float G = 6.673e-8;
float masa1, masa2, distancia, fuerza;
cout << " INTRODUSCA LA MASA DE LOS DOS CUERPOS EN GRAMOS:\n ";
cin >> masa1 >> masa2;
cout<<" INTRODUZCA LA DISTANCIA ENTRE ELLOS EN CENTIMETROS:\n ";
cin >> distancia;
if (( masa1 <= 0 ) || ( masa2 <= 0) || ( distancia <= 0 ))
cout << " NO SOLUCION\n";
else
{
fuerza = G * masa1 * masa2 / (distancia * distancia);
cout << " LA SOLUCION ES: \n";
cout << " FUERZA EN DINAS = "<< fuerza << endl;
}

return 0;
}