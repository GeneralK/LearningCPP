/*
Write a function int accumulate(int x). This function should return the sum of all of the values of x that have been passed to this function.
The following program should run and produce the output noted in comments:
#include <iostream>

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}
LearnCPP Chatper 7.x Summary Question #3

*/


//I want to do something different with Using function.
#include <iostream>

using std::cout;

int accumulate(int x);

void Exercise10()
{
    cout << accumulate(4) << '\n'; // prints 4
    cout << accumulate(3) << '\n'; // prints 7
    cout << accumulate(2) << '\n'; // prints 9
    cout << accumulate(1) << '\n'; // prints 10

}

int accumulate(int x) {
    static int retainPrevious{ 0 }; //initializes with 0. Will be used to hold onto values, and subsequent calls will be added ontop of previous value.
    retainPrevious += x;
    return retainPrevious;
}