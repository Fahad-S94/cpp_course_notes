#include <iostream>

int main(){
    //Data Types
    // int, double, float, char, bool, void, auto(used to identify type), ...
    
    //Number Systems: used for converting data from data convenient to us to data convenient to the machine
    int number1 = 15; // Decimal
    int number2 = 017; // Octal, no longer used in modern times
    int number3 = 0x0F; // Hexadecimal
    int number4 = 0b00001111; // Binary
    
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;

    //Integers
    int elephant_count; // Variable may contain random garbage value
    int lion_count{}; //Initializes to zero
    int dog_count {10}; //Initializes to 10
    int cat_count {15}; //Initializes to 15

    //Can use expression as intializer
    int domesticated_animals {dog_count + cat_count};
    
    int bad_intiallization { doesnt_exist + doesnt_exist1}; // Won't compile, braces contain undeclared variable

    // int narrowing_conversion {2.9}; // 2.9 is of type double, with a wider range than int. ERROR or WARNING when compiling

    //Functional Variable Initialization
    int apple_count(5);
    int orange_count(5);
    int fruit_count( apple_count + orange_count);
    // int bad_intiallization1 ( doesnt_exist1 + doesnt_exist11 );

    int narrowing_conversion_functional (2.9); //Less Safe than Braces: loss of data, stores 2 insted of 2.9 because an int is 4bytes and 2.9 is more than that

    //typename variable_name {initializer_value}:
    //int are usually 4bytes on ur system

    // Assignment Notation
    int bike_count = 2;
    int truck_count = 4;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "bike_count : " << bike_count << std::endl;
    std::cout << "truck_count : " << truck_count << std::endl;
    std::cout << "vehicle_count : " << vehicle_count << std::endl;
    std::cout << "narrowing_conversion_assignment : " << narrowing_conversion_assignment << std::endl;

    //Check the size with sizeof
    std::cout << "sizeof truck_count : " << sizeof(int) << std::endl;
    std::cout << "sizeof int : " << sizeof(truck_count) << std::endl;

    
    return 0;
}