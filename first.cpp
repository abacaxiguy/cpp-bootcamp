#include <iostream>

// here ima put the things that are new to me in C++, that didnt exist in C

int main(){
    std::cout << "Hello World!" << std::endl;

    // there are strings, pog
    std::string name;
    std::cout << "What is your name? ";

    // you can get the whole line with std::getline, poggers
    std::getline(std::cin, name);
    std::cout << "Hello " << name << std::endl;

    std::cout << "Now type how many fruits you have: ";
    int fruits_number;
    std::cin >> fruits_number;

    std::string fruits[fruits_number];

    for(int i = 0; i < fruits_number; i++){
        std::cout << "Type the name of the fruit: ";
        std::cin >> fruits[i];
    }

    std::cout << "You have " << fruits_number << " fruits, and they are: " << std::endl;

    // did you say... foreach? poggers
    for (std::string fruit : fruits){
        std::cout << fruit << std::endl;
    }

    return 0;
}