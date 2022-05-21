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
Cappuccino::Cappuccino(const Cappuccino& cap)
    : EspressoBased { cap }
{
    // delete this;
    // EspressoBased  EspressoBased { cap };
    // this.
    // dynamic_cast<EspressoBased> this { const_cast<Cappuccino&>(cap) };
    auto temp_side { const_cast<Cappuccino&>(cap).get_side_items() };
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
    for (const auto& i : temp_side) {
        std::cout << "&&&&&&" << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
    }
    for (const auto& i : ingredients) {
        std::cout << "***" << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
    }

    std::cout << "cappuccino was copied and side items was copied" << std::endl;
}
void Cappuccino::operator=(const Cappuccino& cap)
{
    EspressoBased::operator=(cap);
    if (this != &cap) {
        for (const auto& i : side_items)
            delete i;

        side_items.clear();
        auto temp_side { const_cast<Cappuccino&>(cap).get_side_items() };
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
        for (const auto& i : side_items) {
            std::cout << "&&&&&&" << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
        }
        for (const auto& i : ingredients) {
            std::cout << "***" << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
        }

        std::cout << " capp operator = and side items was copied" << std::endl;
    }
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