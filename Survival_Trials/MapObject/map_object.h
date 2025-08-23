#pragma once
enum CharactersType { TMagic, TDefender, THunter, TGenius, TFinder, TWanderer };

class MapObject {
    int _coord_x;
    int _coord_y;
    int _move_speed;
    int _id;
    char _image;
    CharactersType _type;

public:
    MapObject();
    MapObject(int, int, int, char, CharactersType);
    MapObject(const MapObject&);

protected:
    void moving(int, int, int);
};