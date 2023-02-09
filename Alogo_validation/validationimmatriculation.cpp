
#include <string>
#include <iostream>
#include <ostream>
#include <ctype.h>

using namespace std;


bool
validerImmatriculationPromenade (const string& p_immatriculation)
{

  bool valide = false;
  if (p_immatriculation.size () == 7 &&  p_immatriculation[6] != ' ')

    {

      if (((isalpha (p_immatriculation[6])) && (isalpha (p_immatriculation[5])))
          && ((isalpha (p_immatriculation[4])))) //000 ABC
        valide = true;

      if ((isalpha (p_immatriculation[0])) && (isalpha (p_immatriculation[1])) && (isalpha (p_immatriculation[2]))) //"ABC000 "

        valide = true;


      if ((isalpha (p_immatriculation[0])) && ((p_immatriculation[4])) && (isalpha (p_immatriculation[5])) && (isalpha (p_immatriculation[6]))) // A00 ABC
        valide = true;


      if ((isalpha (p_immatriculation[6])) && ((p_immatriculation[5])) && (isalpha (p_immatriculation[4])) && (isalpha (p_immatriculation[3]))) // "   SAAQ"
        valide = true;


      if (isalpha (p_immatriculation[3]))  //000H000

        {
          int nbLettre = 0;

          for (int i = 0; i < 7; i++)
            if (isalpha (p_immatriculation[i]))
              nbLettre++;

          if (nbLettre == 1)
            valide = true;
        }
    }
  return valide;
}


bool
validerImmatriculationCamion (const std::string & p_immatriculation)
{
  bool valide = false;
  if (p_immatriculation.size () == 7)
    {
      if (isalpha (p_immatriculation[0]))
        {
          if ((p_immatriculation [0] == 'L') || (p_immatriculation[0] == 'l'))

            {
              int nbLettre = 0;
              for (int i = 0; i < 7; i++)

                if (isalpha (p_immatriculation[i]))
                  nbLettre++;
              {


                if (nbLettre == 1)
                  valide = true;

              }
            }
        }



    }
  return valide;
}


bool
validerNiv (const std::string & p_niv)
{
  bool valide = false;
  string niv_controle = p_niv; //un aléas de p_niv pour les calculs
  {
    if (p_niv.size () == 17)
      {
        for (int i = 0; i < 17; i++)
          {
            if (p_niv[i] == 'A' || p_niv[i] == 'J')
              niv_controle[i] = '1';
            if (p_niv[i] == 'B' || p_niv[i] == 'K')
              niv_controle[i] = '2';
            if (p_niv[i] == 'C' || p_niv[i] == 'L' || p_niv[i] == 'S')
              niv_controle[i] = '3';
            if (p_niv[i] == 'D' || p_niv[i] == 'M' || p_niv[i] == 'U')
              niv_controle[i] = '4';
            if (p_niv[i] == 'E' || p_niv[i] == 'N' || p_niv[i] == 'V')
              niv_controle[i] = '5';
            if (p_niv[i] == 'F' || p_niv[i] == 'W')
              niv_controle[i] = '6';
            if (p_niv[i] == 'G' || p_niv[i] == 'P' || p_niv[i] == 'X')
              niv_controle[i] = '7';
            if (p_niv[i] == 'H' || p_niv[i] == 'Y')
              niv_controle[i] = '8';
            if (p_niv[i] == 'R' || p_niv[i] == 'Z')
              niv_controle[i] = '9';
            if (p_niv[i] == '_')
              niv_controle[i] = '0';

            int prod1;
            int prod2;
            int prod3;
            int prod4;
            int prod5;
            int prod6;
            int prod7;
            int prod8;
            int prod9;
            int prod10;
            int prod11;
            int prod12;
            int prod13;
            int prod14;
            int prod15;
            int prod16;
            int prod17;

            for (int i = 0; i < 17; i++)

              {
                if ( i == 0)
                  prod1 = (niv_controle[i] - '0') * (8);
                       if ( i == 1)
                  prod2 = (niv_controle[i] - '0') * (7);
                if ( i == 2)
                  prod3 = (niv_controle[i] - '0') * (6);
                if ( i == 3)
                  prod4 = (niv_controle[i] - '0') * (5);
                if ( i == 4)
                  prod5 = (niv_controle[i] - '0') * (4);
                if ( i == 5)
                  prod6 = (niv_controle[i] - '0') * (3);
                if ( i == 6)
                  prod7 = (niv_controle[i] - '0') * (2);

                if ( i == 7)
                  prod8 = (niv_controle[i] - '0') * (10);
                if ( i == 8)
                  prod9 = (niv_controle[i] - '0') * (0);
                if ( i == 9)
                  prod10 = (niv_controle[i] - '0') * (9);
                if ( i == 10)
                  prod11 = (niv_controle[i] - '0') * (8);
                if ( i == 11)
                  prod12 = (niv_controle[i] - '0') * (7);
                if ( i == 12)
                  prod13 = (niv_controle[i] - '0') * (6);
                if ( i == 13)
                  prod14 = (niv_controle[i] - '0') * (5);
                if ( i == 14)
                  prod15 = (niv_controle[i] - '0') * (4);
                if ( i == 15)
                  prod16 = (niv_controle[i] - '0') * (3);
                if ( i == 16)
                  prod17 = (niv_controle[i] - '0') * (2);
              }

            if (((prod1 + prod2 + prod3 + prod4 + prod5 + prod6 + prod7 + prod8 + prod9 + prod10 + prod11 + prod12 + prod13 + prod14 + prod15 + prod16 + prod17) % 11 ) == p_niv[8])
              valide = true ;

            else if ((prod1 + prod2 + prod3 + prod4 + prod5 + prod6 + prod7 + prod8 + prod9 + prod10 + prod11 + prod12 + prod13 + prod14 + prod15 + prod16 + prod17) % 11 >= 10)
              niv_controle[8] = 'X';
            {
              if (p_niv[8] == niv_controle[8])
                valide = true;

            }


          }
      }
  }
  //cout << valide;

  return valide;

}




