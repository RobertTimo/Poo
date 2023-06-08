#include "Caine.h"

Caine::Caine(std::string _nume, int _varsta, std::string _rasa) : Animal(_nume, _varsta), rasa(_rasa) {}

std::string Caine::getInfo() {
    return "ID: " + std::to_string(id) + ", Nume: " + nume + ", Varsta: " + std::to_string(varsta) +" ani" + ", Rasa: " + rasa + ";";
}
