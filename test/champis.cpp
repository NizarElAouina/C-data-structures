#include <iostream>
using namespace std;

int main(){
   /* int n;
    cout << "Pensez �  un champignon : amanite tue-mouches, pied bleu, girolle," << endl
    << "c�pe de bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;

    cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
    cin >>n;
    if(n==0)
    {
        cout << "==> Le champignon auquel vous pensez est ";
        cout << "le c�pe de bordeaux";
    }
    else
    {
        cout << "Est-ce que votre champignon vit en for�t (1 : oui, 0 : non) ? ";
        cin >>n;
        if(n==1)
        {
            cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
            cin >>n;
            if(n==1)
            {
                cout << "==> Le champignon auquel vous pensez est ";
                cout << "le pied bleu ";
            }
            else
            {
                cout << "==> Le champignon auquel vous pensez est ";
                cout << "la girolle";
            }
        }
        else
        {
            cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
            cin>>n;
            if(n==1)
            {
                cout << "==> Le champignon auquel vous pensez est ";
                cout << "l'agaric jaunissant";
            }
            else
            {
                cout << "==> Le champignon auquel vous pensez est ";
                cout << "le pied bleu";
            }
        }
    }
*/
   cout << "Donnez l'heure de d�but de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * Compl�ter le code �  partir d'ici
   *****************************************************/

    if ((debut<0 or debut>24)or (fin<0 or fin>24)){
    cout << "Les heures doivent �tre comprises entre 0 et 24 !" << endl;
    }
    if (debut==fin){
    cout << "Bizarre, vous n'avez pas lou� votre v�lo bien longtemps !" << endl;
    }
    if(debut>fin){
    cout << "Bizarre, le d�but de la location est apr�s la fin ..." << endl;
    }
    if((debut>7) and (fin<17)){
    cout << "Vous avez lou� votre v�lo pendant" << endl;

      cout << fin-debut << " heure(s) au tarif horaire de "<< 1 <<" franc(s)" << endl;

    cout << "Le montant total �  payer est de "<< (fin-debut)*2 << " franc(s)." << endl;
    }
    if ((debut<7) and (fin<17)){

    cout << "Vous avez lou� votre v�lo pendant" << endl;

      cout << 7-debut << " heure(s) au tarif horaire de "<< 1 <<" franc(s)" << endl;
      cout << fin-7 << " heure(s) au tarif horaire de "<< 2 <<" franc(s)" << endl;

    cout << "Le montant total �  payer est de "<< (7-debut)*1+(fin-7)*2  << " franc(s)." << endl;
    }
    if ((debut<7) and (fin>17)){

    cout << "Vous avez lou� votre v�lo pendant" << endl;

      cout << (7-debut)+(fin-17) << " heure(s) au tarif horaire de "<< 1 <<" franc(s)" << endl;
      cout << 10 << " heure(s) au tarif horaire de "<< 2 <<" franc(s)" << endl;

    cout << "Le montant total �  payer est de "<< 10*2+(fin-17)*1 +(7-debut)*1 << " franc(s)." << endl;
    }
  /*******************************************
   * Ne rien modifier apr�s cette ligne.
   *******************************************/

  return 0;

}
