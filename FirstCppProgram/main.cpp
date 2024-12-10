#include <iostream>

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


    return 0;
}