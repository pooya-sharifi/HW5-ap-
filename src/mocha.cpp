#include "mocha.h"
Mocha::Mocha()
{
    this->name = "Mocha";
    // std::cout << "Mocha constructed" << std::endl;
    this->ingredients.push_back(new Milk { 2 });
    this->ingredients.push_back(new Espresso { 2 });
    this->ingredients.push_back(new MilkFoam { 1 });
    this->ingredients.push_back(new Chocolate { 1 });
}
void Mocha::add_side_item(Ingredient* side)
{
    side_items.push_back(side);
}
double Mocha::price()
{
    double price_return { 0 };
    for (const auto& i : ingredients)
        price_return += i->price();

    for (const auto& j : side_items)
        price_return += j->price();
    return price_return;
}
Mocha::Mocha(const Mocha& cap)
    : EspressoBased { cap }
{
    auto temp_side { const_cast<Mocha&>(cap).get_side_items() };
    for (const auto& i : temp_side) {
        if (i->get_name() == "Cinnamon") {
            side_items.push_back(new Cinnamon(i->get_units()));
        }
        if (i->get_name() == "Chocolate") {
            side_items.push_back(new Chocolate(i->get_units()));
        }
        if (i->get_name() == "Sugar") {
            side_items.push_back(new Sugar(i->get_units()));
        }
        if (i->get_name() == "Cookie") {
            side_items.push_back(new Cookie(i->get_units()));
        }
        if (i->get_name() == "Espresso") {
            side_items.push_back(new Espresso(i->get_units()));
        }
        if (i->get_name() == "Milk") {
            side_items.push_back(new Milk(i->get_units()));
        }
        if (i->get_name() == "MilkFoam") {
            side_items.push_back(new MilkFoam(i->get_units()));
        }
        if (i->get_name() == "Water") {
            side_items.push_back(new Water(i->get_units()));
        }
    }
}
void Mocha::operator=(const Mocha& cap)
{
    Mocha::operator=(cap);
    if (this != &cap) {
        for (const auto& i : side_items)
            delete i;

        side_items.clear();
        auto temp_side { const_cast<Mocha&>(cap).get_side_items() };
        for (const auto& i : temp_side) {
            if (i->get_name() == "Cinnamon") {
                side_items.push_back(new Cinnamon(i->get_units()));
            }
            if (i->get_name() == "Chocolate") {
                side_items.push_back(new Chocolate(i->get_units()));
            }
            if (i->get_name() == "Sugar") {
                side_items.push_back(new Sugar(i->get_units()));
            }
            if (i->get_name() == "Cookie") {
                side_items.push_back(new Cookie(i->get_units()));
            }
            if (i->get_name() == "Espresso") {
                side_items.push_back(new Espresso(i->get_units()));
            }
            if (i->get_name() == "Milk") {
                side_items.push_back(new Milk(i->get_units()));
            }
            if (i->get_name() == "MilkFoam") {
                side_items.push_back(new MilkFoam(i->get_units()));
            }
            if (i->get_name() == "Water") {
                side_items.push_back(new Water(i->get_units()));
            }
        }
    }
}

Mocha::~Mocha()
{

    for (const auto& i : side_items)
        delete i;

    side_items.clear();
}