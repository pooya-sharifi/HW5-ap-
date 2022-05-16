#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H
// class Cinnamon
// in ro nabayad avaz konim?
// public bayad bashe?

#include "ingredient.h"
#define DEFCLASS(name_class, price_class)                               \
    class name_class : public Ingredient {                              \
    public:                                                             \
        name_class(size_t units)                                        \
            : Ingredient {                                              \
                price_class, units                                      \
            }                                                           \
        {                                                               \
            this->name = #name_class;                                   \
            std::cout << "subingredient was constructed " << std::endl; \
        }                                                               \
        virtual std::string get_name() { return this->name; };          \
    };

DEFCLASS(Cinnamon, 5);
DEFCLASS(Chocolate, 5);
DEFCLASS(Sugar, 1);
DEFCLASS(Cookie, 10);
DEFCLASS(Espresso, 15);
DEFCLASS(Milk, 10);
DEFCLASS(MilkFoam, 5);
DEFCLASS(Water, 1);

// class Cinnamon : public Ingredient {
// public:
//     Cinnamon(size_t units)
//         : Ingredient { 5, units }
//     {
//         this->name = "Cinnamon";
//         std::cout << "subingredient was constructed " << std::endl;
//     };
//     // virtual ~Cinnamon() { std::cout << "subingredient destructed" << std::endl; }
//     virtual std::string get_name() { return this->name; }
// };
// class Cookie : public Ingredient {
// public:
//     Cookie(size_t units)
//         : Ingredient { 5, units }
//     {
//         this->name = "Cookie";
//         std::cout << "subingredient was constructed " << std::endl;
//     };
//     // virtual ~Cookie() { std::cout << "subingredient destructed" << std::endl; }
//     virtual std::string get_name() { return this->name; }
// };
// class Milk : public Ingredient {
// public:
//     Milk(size_t units)
//         : Ingredient { 10, units }
//     {
//         this->name = "Milk";
//         std::cout << "subingredient was constructed " << std::endl;
//     };

//     virtual std::string get_name() { return this->name; }
// };
// class MilkFoam : public Ingredient {
// public:
//     MilkFoam(size_t units)
//         : Ingredient { 5, units }
//     {
//         this->name = "MilkFoam";
//         std::cout << "subingredient was constructed " << std::endl;
//     };

//     virtual std::string get_name() { return this->name; }
// };
// class Water : public Ingredient {
// public:
//     Water(size_t units)
//         : Ingredient { 1, units }
//     {
//         this->name = "Water";
//         std::cout << "subingredient was constructed " << std::endl;
//     };

//     virtual std::string get_name() { return this->name; }
// };
// class Espresso : public Ingredient {
// public:
//     Espresso(size_t units)
//         : Ingredient { 15, units }
//     {
//         this->name = "Espresso";
//         std::cout << "subingredient was constructed " << std::endl;
//     };

//     virtual std::string get_name() { return this->name; }
// };

#endif // SUB_INGREDIENTS_H