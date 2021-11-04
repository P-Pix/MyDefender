/**
 * @file main.cpp
 * @author Guillaume LEMONNIER
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>
#include "../include/Window.hpp"

/// @brief Main function
/// @return EXIT_SUCCESS
int main(int argc, char **argv)
{
    Window Window(60);
    while (Window.isOpen())
    {
        Window.pollEvent();
        Window.updateWindow();
    }
    return EXIT_SUCCESS;
}