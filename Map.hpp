#include <iostream>

#ifndef MAP_HPP
#define MAP_HPP

template <typename T>
class Map {
    public :
    Map(int x,int y);

    void set();
    void Tresor();
    void Arbre();
    void Buisson();

    void afficher();

    private :
    int taillex = 2;
    int tailley = 2;
    int M[][];
};
#endif