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
        Cappuccino cappuccino {};
        std::cout << cappuccino.get_name() << std::endl;
        auto ingredients = cappuccino.get_ingredients();

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