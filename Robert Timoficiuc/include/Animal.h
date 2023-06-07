#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    static int lastID;
    int id;
    std::string nume;
    int varsta;
public:
    Animal(std::string _nume, int _varsta);
    void setID(int _id);
    virtual std::string getInfo();
};

#endif // ANIMAL_H
