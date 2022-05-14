#include "espresso_based.h"
EspressoBased::EspressoBased()
{
    std::cout << "Espresso based" << std::endl;
}
EspressoBased::~EspressoBased()
{
    for (const auto& i : ingredients)
        delete i;
    ingredients.clear();
}

// double EspressoBased::price()
// {
//     return 1;
// }