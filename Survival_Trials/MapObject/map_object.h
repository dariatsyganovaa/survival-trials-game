#pragma once
#include "../GameField/gamefield.h"

enum CharactersType { TMagic, TDefender, THunter, TGenius, TFinder, TWanderer };

class MapObject {
    int _coord_x;
    int _coord_y;
    int _move_speed;
    int _id;
    char _image;
    CharactersType _type;
public:
    MapObject(int coord_x = WIDTH * 0.5, int coord_y = HEIGHT * 0.5, int move_speed = 5, char image = '&',
        CharactersType type = CharactersType::TMagic);
    MapObject(const MapObject&);

    int get_coord_x();
    int get_coord_y();
    int get_move_speed();
    char get_image();
    CharactersType get_type();

protected:
    void generate_rand_position();
    int moving(int, int, int, char); 
};