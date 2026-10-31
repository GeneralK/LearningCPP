#include "CinClear.h"
#include "Common.h"

void Exercise13() {
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (clearFailedExtraction())
        {
            std::cout << "Oops, that input is invalid.  Please try again.\n";
            continue;
        }
        ignoreLine(); // Remove any extraneous input
        cout << "Action successful";
    }
};