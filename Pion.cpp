#include "Pion.hpp"

using std::cout;
using std::endl;

//Constructeur de la classe Pion
Pion::Pion() : position_pion(0) {} //initialisation de la position du piont a 0 losrsque l'objet de tupe Pion est créer.

void Pion::jouer(int M) {
    const int largeur_M = 10; // A modifier quand elle sera faite dans map
    const int hauteur_M = 10; // A modifier quand elle sera faite dans map
    const int derniere_ligne = hauteur_M -1; // indices des ligne de 0 à heuteur-1

    cout << "Position actuelle du pion"<< position_pion << endl;

    if (position_pion / largeur_M == largeur_M -1){
        position_pion += largeur_M +1;
        if (position_pion / largeur_M== hauteur_M){
            cout << "Le tésor n'a pas été trouvé." << endl;
        }
    }

    else {
        position_pion ++; 
    }

}

/* A METTRE DANS LE MAIN

int main() {
    Pion pion;
    for (int i = 0; i<100, i++) {
        pion.jouer();
    }
    return 0
}



*/