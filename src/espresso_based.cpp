#include "espresso_based.h"
#include "cappuccino.h"
EspressoBased::~EspressoBased()
{
    for (const auto& i : ingredients)
        delete i;

    ingredients.clear();
}
EspressoBased::EspressoBased(const EspressoBased& esp)
{

    this->name = esp.name;
    auto temp_ing { const_cast<EspressoBased&>(esp).get_ingredients() };
    for (const auto& i : temp_ing) {
        if (i->get_name() == "Cinnamon") {
            ingredients.push_back(new Cinnamon(i->get_units()));
        }
        if (i->get_name() == "Chocolate") {
            ingredients.push_back(new Chocolate(i->get_units()));
        }
        if (i->get_name() == "Sugar") {
            ingredients.push_back(new Sugar(i->get_units()));
        }
        if (i->get_name() == "Cookie") {
            ingredients.push_back(new Cookie(i->get_units()));
        }
        if (i->get_name() == "Espresso") {
            ingredients.push_back(new Espresso(i->get_units()));
        }
        if (i->get_name() == "Milk") {
            ingredients.push_back(new Milk(i->get_units()));
        }
        if (i->get_name() == "MilkFoam") {
            ingredients.push_back(new MilkFoam(i->get_units()));
        }
        if (i->get_name() == "Water") {
            ingredients.push_back(new Water(i->get_units()));
        }
    }
    for (const auto& i : temp_ing) {
        std::cout << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
    }
    std::cout << "esspresso based copy constructor was used and ingredients was copied" << std::endl;
}
void EspressoBased::operator=(const EspressoBased& esp)
{
    // if (this == &esp)
    //     return *this;
    if (this != &esp) {
        this->name = esp.name;

        for (const auto& i : ingredients) {
            delete i;
        }
        ingredients.clear();
        auto temp_ing { const_cast<EspressoBased&>(esp).get_ingredients() };
        for (const auto& i : temp_ing) {
            if (i->get_name() == "Cinnamon") {
                ingredients.push_back(new Cinnamon(i->get_units()));
            }
            if (i->get_name() == "Chocolate") {
                ingredients.push_back(new Chocolate(i->get_units()));
            }
            if (i->get_name() == "Sugar") {
                ingredients.push_back(new Sugar(i->get_units()));
            }
            if (i->get_name() == "Cookie") {
                ingredients.push_back(new Cookie(i->get_units()));
            }
            if (i->get_name() == "Espresso") {
                ingredients.push_back(new Espresso(i->get_units()));
            }
            if (i->get_name() == "Milk") {
                ingredients.push_back(new Milk(i->get_units()));
            }
            if (i->get_name() == "MilkFoam") {
                ingredients.push_back(new MilkFoam(i->get_units()));
            }
            if (i->get_name() == "Water") {
                ingredients.push_back(new Water(i->get_units()));
            }
        }
        for (const auto& i : ingredients) {
            std::cout << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
        }
        std::cout << "esspresso based operator = was used and ingredients was copied" << std::endl;
    }
}
