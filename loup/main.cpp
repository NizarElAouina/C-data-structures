#include <iostream>
#include <iomanip> // pour setprecision()
using namespace std;

int main()
{
  /*
  // Réduire le format d'affichage
  cout << setprecision(4);

  // Paramètres
  double taux_croissance_lapins(0.3);
  double taux_attaque(0.05);
  double taux_croissance_renards(0.008);
  double taux_mortalite(0.1);
  int duree(50);

  double renards_i(0.0);
  double lapins_i(0.0);

  /*****************************************************
   * Compléter le code �  partir d'ici
   *****************************************************/

  // ===== PARTIE 1 =====
  // Saisie des populations initiales
    /*do{
      cout << "Combien de renards au départ (>= 2) ? ";
      cin >> renards_i;
      }while(renards_i<2);

      do{
      cout << "Combien de lapins au départ  (>= 5) ? ";
      cin >>lapins_i;
      }while(lapins_i<5);

  // ===== PARTIE 2 =====
  // Première simulation

  // ===== PARTIE 3 =====
  // Variation du taux d'attaque*/
  /*
  cout << endl;
  double lapin(lapins_i);
  double renard(renards_i);
  double lapin_2(lapins_i);
  double renard_2(renards_i);
  int i(1);
  int j(i);
  int d(0);
  int d2(0);
  int ren(0);
  int lap(0);
  int both(0);
  int S(0);
  for (i=1;i<=duree;i++)
  {
      if((ren==2)or(lap==2))
      {
          if ((ren==2)and (lap!=2))
          {
              lapin*=(1.0+taux_croissance_lapins);
              lapin_2=lapin;
              j=i;
              renard=0;
              renard_2=renard;
          }
          else
          {
              if ((ren!=2)and (lap==2))
              {

              renard*=(1.0- taux_mortalite);
              j=i;
              lapin=0;
              lapin_2=lapin;
              }
              else
              {
                  renard=0;
                  lapin=0;
                  renard_2=renard;
                  lapin_2=lapin;
                  break;
              }
          }
      }
      else
      {
      lapin*=(1.0+taux_croissance_lapins-taux_attaque*renard_2);
      renard*=(1.0+taux_attaque*lapin_2*taux_croissance_renards- taux_mortalite);
      lapin_2=lapin;
      renard_2=renard;
      j=i;
      }

      if ((renard_2<5) or (lapin_2<5))
          {
              if((renard_2<5) and (lapin_2<5))
              {
                  if ((renard_2<2) or (lapin_2<2))
                      {
                          if((renard_2<2) and (lapin_2<2))
                             {
                                 renard_2=0;
                                 lapin_2=0;
                                 ren=2;
                                 lap=2;
                             }
                          else
                            {
                                if((renard_2<2)and (lapin_2>2))
                                {
                                    renard_2=0;
                                    ren=2;
                                    lap=1;
                                }
                                else
                                {
                                    if((renard_2>2)and (lapin_2<2))
                                    {
                                        lapin_2=0;
                                        ren=1;
                                        lap=2;
                                    }
                                    else
                                    {
                                        ren=1;
                                        lap=1;
                                    }
                                }
                            }
                      }
              }
              else{
                if((renard_2<5) and (lapin_2>5))
                {
                    ren=1;
                }
                else
                  {
                        if ((renard_2>5) and(lapin_2<5))
                        {
                            lap=1;
                        }
                    }
                  }
          }
      else
      {
          S=1 ;//S=stable
      }
  }
  cout <<  endl << "***** Le taux d'attaque vaut "<< taux_attaque * 100 << "%" <<  endl;
    cout <<"Apr�s "<<j<< " mois, il y a "<<lapin_2<<" lapins et " <<renard_2<<" renards" << endl;
    if (d2==1)
    {
        cout <<"disparition";
    }
    else{
        if(d2==2)
        {
            cout <<endl<<"Voie d'extinction";
        }
        else{
            cout <<endl<<"Stable";
        }
    }
  cout << "taux d'attaque au départ en % (entre 0.5 et 6) ? ";

  cout << "taux d'attaque �  la fin  en % (entre ";
  cout << " et 6) ? ";

  cout << "Les renards ont été en voie d'extinction" << endl;
  cout << "mais la population est remontée ! Ouf !" << endl;
  cout << "et les renards ont disparu :-(" << endl;
  cout << "Les lapins ont été en voie d'extinction" << endl;
  cout << "mais la population est remontée ! Ouf !" << endl;
  cout << "et les lapins ont disparu :-(" << endl;
  cout << "Les lapins et les renards ont des populations stables." << endl;

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/
    size_t taille(4);
    cout << "Saisie de "<< taille<<" valeurs"<< endl;
  return 0;
}
