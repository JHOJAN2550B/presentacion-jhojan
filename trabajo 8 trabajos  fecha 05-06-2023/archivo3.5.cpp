#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
float m, energia;

const float c = 2.997925e+10;
cout << " INTRODUSCA LA MASA EN GRAMOS \n ";
cin >> m;
energia = c * m * m * m;
cout << " ENERGIA PRODUCIDA EN ERGIOS : " << energia;

return 0;
}