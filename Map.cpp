#include <iostream>
#include "Map.hpp"
using std::cout;
using std::endl;

Map::Map(int x, int y):taillex(x),tailley(y){
};

void Map::set(){
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            M[i][j]=0;
        }
    }
}

void Map::Tresor(){};
void Map::Arbre(){};
void Map::Buisson(){};

void Map::afficher(){
    for(auto valeur : M){
        cout<<valeur<<" ";
    }
    cout<<endl;
    };