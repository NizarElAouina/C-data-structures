#include <iostream>
using namespace std;

int main()
{

  int debut(0);
  do {
    cout << "de (>= 1) ? ";
    cin >> debut;
  } while (debut < 1);

  int fin(0);
  do {
    cout << "a (>= " << debut << ") ? ";
    cin >> fin;
  } while (fin < debut);

  /*******************************************
   * Completez le programme a partir d'ici.
   *******************************************/
    for (int i(debut);i<=fin;++i){
         int j(i);
        int c(0);
        do{

            if (j%3==0)
            {
                j=j+4;
                c=c+1;
            }
            else
            {
                if((j%3!=0) and (j%4==0))
                {
                    j=j/2;
                    c=c+1;
                }
                else
                {
                    j=j-1;
                    c=c+1;
                }
            }
        }while(j!=0);
            cout <<i<<" ->"<<c<<endl;
    }
  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

  return 0;
}
