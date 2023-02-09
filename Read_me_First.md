# Validation_plaque_immatriculation
Fonctions de validation de plaques d'immatriculation de voiture en C++

Il s’agit de constituer une librairie de fonctions utilitaires.

Dans les fichiers validationFormat.h et validationFormat.cpp, vous devrez implanter les fonctions
dont les spécifications sont les suivantes.

bool validerImmatriculationPromenade (const std::string& p_immatriculation)
Cette fonction valide le numéro d'immatriculation d'un véhicule de promenade. Pour le format des
numéros d’immatriculation, voir le répertoire des plaques d’immatriculation du Québec sur :
https://saaq.gouv.qc.ca/immatriculation/categories-plaques-immatriculation/
On ne considèrera que les cas des véhicules de promenade sans préfixe et électriques non personnalisés.

bool validerImmatriculationCamion (const std::string& p_immatriculation)
Cette fonction valide le numéro d'immatriculation d'un "camion et ensemble de véhicules routiers" (plaque
L). Pour le format des numéros d’immatriculation, voir le répertoire des plaques d’immatriculation du
Québec sur :
https://saaq.gouv.qc.ca/immatriculation/categories-plaques-immatriculation/
Remarque : A B ou C représentent n’importe quelle lettre, 0 représente n’importe quel chiffre.

bool validerNiv (const std::string& p_niv)
Cette fonction valide le numéro d’identification d'un véhicule (NIV) 
(http://assets.ibc.ca/Documents/Brochures/FR/Understanding-VINs-FR.pdf,
https://fr.wikipedia.org/wiki/Vehicle_Identification_Number).

On se limitera à seulement 2 vérifications.

Il s'agit de tout d'abord vérifier que le nombre de caractères est correct. Ensuite il s'agit de vérifier si le
numéro est vrai ou faux à partir du caractère de contrôle.
L'algorithme à appliquer pour cette validation est décrit ici :
https://en.wikibooks.org/wiki/Vehicle_Identification_Numbers_(VIN_codes)/Check_digit
