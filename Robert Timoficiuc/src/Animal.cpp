#include "Animal.h"

int Animal::lastID = 0;

Animal::Animal(std::string _nume, int _varsta) : id(0), nume(_nume), varsta(_varsta) {}

void Animal::setID(int _id) {
    id = _id;
    if (_id > lastID) {
        lastID = _id;
    }
}

std::string Animal::getInfo() {
    return "ID: " + std::to_string(id) + ", Nume: " + nume + ", Varsta: " + std::to_string(varsta);
}
