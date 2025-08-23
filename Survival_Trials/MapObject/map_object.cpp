#include <iostream> 
#include <stdexcept>
#include <ctime>
#include <conio.h>
#include "map_object.h"

MapObject::MapObject(int coord_x, int coord_y, int move_speed, char image, CharactersType type) {
	if (coord_x < 0 || coord_x >= WIDTH || coord_y < 0 || coord_y >= HEIGHT) {
		throw std::out_of_range("Invalid coordinates");
	}
	_coord_x = coord_x;
	_coord_y = coord_y;
	_move_speed = move_speed;
	_image = image;
	_type = type;
}

MapObject::MapObject(const MapObject& other) 
	: _coord_x(other._coord_x), _coord_y(other._coord_y), 
	_move_speed(other._move_speed), _image(other._image), _type(other._type) {}

int MapObject::get_coord_x() {
	return _coord_x;
}

int MapObject::get_coord_y() {
	return _coord_y;
}

int MapObject::get_move_speed() {
	return _move_speed;
}

char MapObject::get_image() {
	return _image;
}

CharactersType MapObject::get_type() {
	return _type;
}

void MapObject::generate_rand_position() {
	srand(time(0));
	_coord_x = rand() % WIDTH;
	_coord_y = rand() % HEIGHT;
}

int MapObject::moving(int coord_x, int coord_y, int move_speed, char image) { 
    char key = 0;
    while (key != '\r') {
        key = _getch();
        system("cls");
        switch (key) {
        case('w'):
            if (coord_x > 0) {
                coord_x--;
            }
            break;
        case('s'):
            if (coord_x < WIDTH - 1) {
                coord_x++;
            }
            break;
        case('a'):
            if (coord_y > 0) {
                coord_y--;
            }
            break;
        case('d'):
            if (coord_y < HEIGHT - 1) {
                coord_y++;
            }
            break;
    }
    return key;
}