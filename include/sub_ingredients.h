#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H
// class Cinnamon
// in ro nabayad avaz konim?
// public bayad bashe?
class Cinnamon : public Ingredient {
public:
    Cinnamon(size_t units)
        : Ingredient { 5, units }
    {
        this->name = "Cinnamon";
        std::cout << "subingredient was constructed " << std::endl;
    };

    virtual std::string get_name() { return this->name; }
};
class Milk : public Ingredient {
public:
    Milk(size_t units)
        : Ingredient { 10, units }
    {
        this->name = "Milk";
        std::cout << "subingredient was constructed " << std::endl;
    };

    virtual std::string get_name() { return this->name; }
};
class MilkFoam : public Ingredient {
public:
    MilkFoam(size_t units)
        : Ingredient { 5, units }
    {
        this->name = "MilkFoam";
        std::cout << "subingredient was constructed " << std::endl;
    };

    virtual std::string get_name() { return this->name; }
};
class Water : public Ingredient {
public:
    Water(size_t units)
        : Ingredient { 1, units }
    {
        this->name = "Water";
        std::cout << "subingredient was constructed " << std::endl;
    };

    virtual std::string get_name() { return this->name; }
};
class Espresso : public Ingredient {
public:
    Espresso(size_t units)
        : Ingredient { 15, units }
    {
        this->name = "Espresso";
        std::cout << "subingredient was constructed " << std::endl;
    };

    virtual std::string get_name() { return this->name; }
};

#endif // SUB_INGREDIENTS_H