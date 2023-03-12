#include <iostream>
using namespace std;

int main()
{
   cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * Compléter le code à  partir d'ici
   *****************************************************/

    if ((debut<0 or debut>24)or (fin<0 or fin>24)){
    cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
    }
    if (debut==fin){
    cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
    }
    if(debut>fin){
    cout << "Bizarre, le début de la location est après la fin ..." << endl;
    }
    if((debut>=7) and (fin<=17)){
    cout << "Vous avez loué votre vélo pendant" << endl;

      cout << fin-debut << " heure(s) au tarif horaire de "<< 2 <<" franc(s)" << endl;

    cout << "Le montant total à  payer est de "<< (fin-debut)*2 << " franc(s)." << endl;
    }
    if ((debut<7) and (fin<=17)){

    cout << "Vous avez loué votre vélo pendant" << endl;

      cout << 7-debut << " heure(s) au tarif horaire de "<< 1 <<" franc(s)" << endl;
      cout << fin-7 << " heure(s) au tarif horaire de "<< 2 <<" franc(s)" << endl;

    cout << "Le montant total à  payer est de "<< (7-debut)*1+(fin-7)*2  << " franc(s)." << endl;
    }
    if ((debut<7) and (fin>17)){

    cout << "Vous avez loué votre vélo pendant" << endl;

      cout << (7-debut)+(fin-17) << " heure(s) au tarif horaire de "<< 1 <<" franc(s)" << endl;
      cout << 10 << " heure(s) au tarif horaire de "<< 2 <<" franc(s)" << endl;

    cout << "Le montant total à  payer est de "<< 10*2+(fin-17)*1 +(7-debut)*1 << " franc(s)." << endl;
    }
  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
