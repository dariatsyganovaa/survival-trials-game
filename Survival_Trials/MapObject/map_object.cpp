#include <iostream> 
#include "map_object.h"

MapObject::MapObject() : _coord_x(0), _coord_y(0), _move_speed(5), _image('&'), _type(TMagic) {}

MapObject::MapObject(int coord_x, int coord_y, int move_speed, char image, CharactersType type) 
	: _coord_x(coord_x), _coord_y(coord_y), 
	_move_speed(move_speed), _image(image), _type(type) {}

MapObject::MapObject(const MapObject& other) 
	: _coord_x(other._coord_x), _coord_y(other._coord_y), 
	_move_speed(other._move_speed), _image(other._image), _type(other._type) {}

void MapObject::moving(int coord_x, int coord_y, int move_speed) {

}