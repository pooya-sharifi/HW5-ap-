#ifndef ESPRESSO_BASED_H
#define ESPRESSO_BASED_H
#include <string>
#include <vector>
// motmaen nistam
#include "ingredient.h"
// #include "ingredient.h"
#include "ftxui/dom/node.hpp" // for Render
#include "ftxui/screen/color.hpp" // for ftxui
#include "sub_ingredients.h"
#include <chrono>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>
class EspressoBased {
public:
    virtual std::string get_name() = 0;
    virtual double price() = 0;

    void brew();
    std::vector<Ingredient*>& get_ingredients() { return ingredients; };
    virtual ~EspressoBased();

protected:
    EspressoBased() = default;
    EspressoBased(const EspressoBased& esp);
    void operator=(const EspressoBased& esp);

    std::vector<Ingredient*> ingredients;
    std::string name;
};
#endif // ESPRESSO_BASED_H