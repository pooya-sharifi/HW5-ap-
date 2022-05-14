#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <iostream>
#include <string>

class Ingredient {
public:
    double get_price_unit() { return price_unit; };
    size_t get_units() { return units; };
    std::string get_name() { return name; };

    double price() { return price_unit * units; };

protected:
    Ingredient(double _price_unit, size_t _units)
        : price_unit { _price_unit }
        , units { _units }
    {
        std::cout << "ingredient was constructed \t price:" << price_unit << std::endl;
    };

    double price_unit;
    size_t units;
    std::string name;
};

#endif // INGREDIENT_H