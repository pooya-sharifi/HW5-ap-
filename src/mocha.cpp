#include "mocha.h"
Mocha::Mocha()
{
    this->name = "Mocha";
    std::cout << "Mocha constructed" << std::endl;
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
Mocha::~Mocha()
{

    for (const auto& i : side_items)
        delete i;

    side_items.clear();
}