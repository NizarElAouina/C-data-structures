#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Pensez à  un champignon : amanite tue-mouches, pied bleu, girolle," << endl
    << "cèpe de bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;

    cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
    cin >>n;
    if(n==0)
    {
        cout << "==> Le champignon auquel vous pensez est ";
        cout << "le cèpe de bordeaux";
    }
    else
    {
        cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? ";
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

  return 0;

}
