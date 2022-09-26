#include "Programme1.h"
#include <iostream>
using namespace std;

void Programme1::Play() {
    cout << "WIP \n\n";
    int nbrCartes=51;
    while (nbrCartes <= 1 || nbrCartes >= 50) {
        cout << "Avec combien de cartes par joueurs voulez vous jouer ? (max 50) \n\n";
        cin >> nbrCartes;
    }
}
