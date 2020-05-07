#include <iostream>
#include <string>
#include <vector>

#include "Plante.cpp"
#include "Botaniste.cpp"

using namespace std;

int main()
{
    int choix = 0;

    Plante *Mystherbe = new Plante(5,10,false,5,0,0,"Mystherbe");

    cout << "Prenez soin de votre pokeplante ! Voici ses stats" << endl;
    Mystherbe -> inspecter();

    while (choix == 0)
    {
        choix = 0;
        while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 5)
        {
            cout << "Que voulez vous faire de cette plante ?" << endl
            << "1 : Arroser la plante"<< endl
            << "2 : Lui donner de l'engrais"<< endl
            << "3 : La tailler"<< endl
            << "4 : L'inspecter"<< endl
            << "5 : Passer la journer"<< endl;

            cin >> choix;
        }
    

        if (choix == 1)
        {
            Mystherbe -> getArroser ();
        }

        if (choix == 2)
        {
            Mystherbe -> getEngrais ();
        }

        if (choix == 3)
        {
            Mystherbe -> getTailler ();
        }

        if (choix == 4)
        {
            Mystherbe -> inspecter ();
        }

        if (choix == 5)
        {
            Mystherbe -> nuit ();
        }

        if(choix >= 1 && choix <= 4){
            choix = 0;
        }
    
    }
}
