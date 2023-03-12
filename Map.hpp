#include <iostream>

#ifndef MAP_HPP
#define MAP_HPP

class Map {
    
    Map(int x,int y,int nmb, int nmb2);
    Map();

    void Tresor();
    void Arbre(int x);
    void Buisson(int x);

    void afficher();

    private :
    int M[3][4];
};
#endif