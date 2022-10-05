#include "Programme1.h"
#include <iostream>
#include "Carte.h"
#include "Pile.h"
using namespace std;

void Programme1::Play() {
    cout << "WIP \n\n";
    int nbrCartes=51;
    while (nbrCartes <= 1 || nbrCartes >= 50) {
        cout << "Avec combien de cartes par joueurs voulez vous jouer ? (max 50) \n\n";
        cin >> nbrCartes;
    }
    Pile<Carte> pile = Create(nbrCartes);

}

Pile<Carte> Programme1::Create(int nbrCartes) {
    Pile<Carte> pile(nbrCartes * 2);

    for (int i = 0; i < nbrCartes*2; i++) {
        int num = rand() % 10 + 1;
        int bonus = rand() % 4 + 1;
        int col = rand() % 2 + 1;
        string color;
        if (col == 0) color= "rouge";
        else color = "noire";
        Carte carte(num, bonus, color);
        pile.empiler(carte);
    }

    return pile;
}
