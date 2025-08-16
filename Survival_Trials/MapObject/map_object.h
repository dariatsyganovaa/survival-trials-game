#pragma once
enum CharactersType { TMagic, TDefender, THunter, TGenius, TFinder, TWanderer };

class Object {
    int _coord_x;
    int _coord_y;
    char _image;
    CharactersType _type;
};