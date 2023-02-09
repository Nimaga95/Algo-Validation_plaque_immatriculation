#include <string>
#include <iostream>
#include <ostream>
#include <ctype.h>
#include <cstdlib>
#include <math.h>
#include "validationimmatriculation.h" //on inclut le fichier H

using namespace std;



int
main ()
{
    cout <<"Tests de Validation des fonctions" << endl;

  cout <<validerNiv ("3VWFE21C04M000007");
  return 0;
}