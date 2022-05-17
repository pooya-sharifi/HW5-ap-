#include "espresso_based.h"
#include "cappuccino.h"
EspressoBased::~EspressoBased()
{
    for (const auto& i : ingredients)
        delete i;

    ingredients.clear();
}
// EspressoBased::EspressoBased(const EspressoBased& esp)
// {

//     this->name = esp.name;
//     this->ingredients = esp.ingredients;
//     esp.~EspressoBased();
// }
