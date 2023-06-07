#ifndef PISICA_H
#define PISICA_H

#include "Animal.h"

class Pisica : public Animal {
private:
    std::string rasa;
public:
    Pisica(std::string _nume, int _varsta, std::string _rasa);
    std::string getInfo() override;
};

#endif // PISICA_H
