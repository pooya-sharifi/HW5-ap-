#include "cappuccino.h"

Cappuccino::Cappuccino()
{
    // EspressoBased();
    this->name = "Cappuccino";
    std::cout << "cappuccino constructed" << std::endl;
    this->ingredients.push_back(new Milk { 2 });
    this->ingredients.push_back(new Espresso { 2 });
    this->ingredients.push_back(new MilkFoam { 1 });
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

    for (const auto& i : side_items)
        delete i;

    side_items.clear();
}