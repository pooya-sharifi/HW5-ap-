#include "cappuccino.h"
#include "espresso_based.h"
#include "ingredient.h"
#include "mocha.h"
#include "sub_ingredients.h"

#include <gtest/gtest.h>
#include <iostream>
#include <string>
// not sure
#include <iterator>

int main(int argc, char** argv)
{
    if (false) // make false to run unit-tests
    {
        // debug section
        // Mocha mocha {};
        // EXPECT_EQ(mocha.get_name(), "Mocha");
        // auto ingredients = mocha.get_ingredients();

        // EspressoBased* esp { new Mocha {} };
        // reinterpret_cast<Cappuccino*>(esp)->add_side_item(new Cookie { 1 });
        // for (const auto& i : esp->get_ingredients()) {
        //     std::cout << "&&&&&&" << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
        // }
        // for (const auto& i : reinterpret_cast<Mocha*>(esp)->get_side_items()) {
        //     std::cout << "***" << i->get_name() << i->get_price_unit() << i->get_units() << std::endl;
        // }

        // std::vector<Ingredient*>& sides = reinterpret_cast<Cappuccino*>(esp)->get_side_items();
        // EXPECT_EQ(sides.size(), 2);
        // delete esp;
        // EXPECT_EQ(sides.size(), 0);

    } else {
        ::testing::InitGoogleTest(&argc, argv);
        std::cout << "RUNNING TESTS ..." << std::endl;
        int ret { RUN_ALL_TESTS() };
        if (!ret)
            std::cout << "<<<SUCCESS>>>" << std::endl;
        else
            std::cout << "FAILED" << std::endl;
    }
    return 0;
}