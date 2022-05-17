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

    for (const auto& j : side_items) {
        std::cout << j << j->get_name() << std::endl;
        price_return += j->price();
    }
    return price_return;
    std::cout << side_items[0] << side_items[0]->get_name() << std::endl;
}
void Cappuccino::add_side_item(Ingredient* side)
{
    side_items.push_back(side);

    std::cout << "we have added a side item" << std::endl;
    std::cout << side_items[0] << side_items[0]->get_name() << "****" << side << std::endl;
}
Cappuccino::~Cappuccino()
{

    std::cout << "####" << std::endl;
    for (const auto& i : side_items) {
        std::cout << i << i->get_name() << std::endl;
        delete i;
    }
    std::cout << "####" << std::endl;

    side_items.clear();
    std::cout << "####" << std::endl;
}