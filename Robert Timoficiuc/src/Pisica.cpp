#include "Pisica.h"

Pisica::Pisica(std::string _nume, int _varsta, std::string _rasa) : Animal(_nume, _varsta), rasa(_rasa) {}

std::string Pisica::getInfo() {
    return "ID: " + std::to_string(id) + ", Nume: " + nume + ", Varsta: " + std::to_string(varsta) + ", Rasa: " + rasa;
}
