#include <iostream>
#include <string>

//function sample
int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}
// main function is also know as "The Entry Point"
int main(){
    std::cout << "Hello World!" << std::endl;
    std::cout << "Number1" ;
    // "<< std::endl" ends the line and starts the next code on the next line
    std::cout << "Number2" << std::endl;
    std::cout << "Number3" ;

    std::cout << "Fahad Shoaib" << std::endl;
    std::cout << "Fahad Shoaib";
    std::cout << "Fahad Shoaib";

    
    /*()*/


    // Without Function
    int first_number {3}; // Statement
    int second_number {7};

    std:: cout << "First Number : " << first_number << std::endl;
    std:: cout << "Second Number : " << second_number << std::endl;

    int sum = first_number + second_number;

    std:: cout << "Sum: " << sum << std::endl;

    // With Function
    int added = addNumbers(15, 76);
    int added1 = addNumbers(13, 72);

    std:: cout << "Added Sum: " << added << " " << added1 << std::endl;

    //Without storing variable
    std:: cout << "Added Sum: " << addNumbers(5, 4) << std::endl;

    /*()*/

    // std::cout = Printing stuff to console
    //std::cin = user input
    //std::cerr = Error
    //std::clog = Log message
    // << = stream out

    //Example
    //Printing Data
    std:: cout << "Hello C++23" << addNumbers(5, 4) << std::endl; // Our data is going from our program (int main()) to std::cout which will dump it out to the terminal

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happpened here" << std::endl;

    int age1;
    std::string name;

    std:: cout << "Please type name and age: " << std::endl;
    std::cin >> name; // >> stream = means takes the date from terminal and assigns it to Variable
    std::cin >> age1;
    //std::cin >> name >> age1;

    std:: cout << "Hello! " << name << " You are " << age1 << " years old." << std::endl;

    //Data with Spaces
    std::string full_name;
    int age3;

    std:: cout << "Please type full name and age: " << std::endl;

    std::getline(std::cin,full_name);
    std::cin >> age3;

    std:: cout << "Hello! " << full_name << " You are " << age3 << " years old." << std::endl;

    return 0;
}