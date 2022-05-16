#include "cappuccino.h"

Cappuccino::Cappuccino()
{
    // EspressoBased();
    this->name = "Cappuccino";
    std::cout << "cappuccino constructed" << std::endl;
    Milk Milk { 2 };
    this->ingredients.push_back(new Ingredient(Milk));
    Espresso esp { 2 };
    this->ingredients.push_back(new Ingredient(esp));
    MilkFoam MilkFoam { 1 };
    this->ingredients.push_back(new Ingredient(MilkFoam));
}
double Cappuccino::price()
{
    double price_return { 0 };
    for (const auto& i : ingredients)
        price_return += i->price();

    for (const auto& j : side_items)
        price_return += j->price();

    return price_return;
}
void Cappuccino::add_side_item(Ingredient* side)
{
    side_items.push_back(side);
}
Cappuccino::~Cappuccino()
{
    std::cout << "####" << std::endl;

    for (const auto& i : side_items)
        delete i;

    std::cout << "####" << std::endl;

    side_items.clear();
    std::cout << "####" << std::endl;
}