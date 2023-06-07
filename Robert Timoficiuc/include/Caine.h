#ifndef CAINE_H
#define CAINE_H

#include "Animal.h"

class Caine : public Animal {
private:
    std::string rasa;
public:
    Caine(std::string _nume, int _varsta, std::string _rasa);
    std::string getInfo() override;
};

#endif // CAINE_H
