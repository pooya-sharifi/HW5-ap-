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
    if (true) // make false to run unit-tests
    {
        // debug section

        Cappuccino cappuccino {};
        EXPECT_DOUBLE_EQ(cappuccino.price(), 55);
        Cinnamon pooya { 1 };
        auto pooya_save = new Cinnamon(pooya);
        cappuccino.add_side_item(pooya_save);
        std::cout << "here" << std ::endl;
        EXPECT_DOUBLE_EQ(cappuccino.price(), 60);
        pooya_save = nullptr;
        delete pooya_save;

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