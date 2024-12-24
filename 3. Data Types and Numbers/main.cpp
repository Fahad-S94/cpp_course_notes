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
    
    // int bad_intiallization { doesnt_exist + doesnt_exist1}; // Won't compile, braces contain undeclared variable

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

    // Integer Modifiers
    signed int value1 {10};
    signed int value2 {300};

    std::cout << "value1 int : " << value1 << std::endl;
    std::cout << "value2 int : " << value2 << std::endl;
    std::cout << "sizeof value1 : " << sizeof(value1) << std::endl;
    std::cout << "sizeof value2 : " << sizeof(value2) << std::endl;

    unsigned int value3 {4};
    //unsigned int value4 {-5}; //Compile error

    //short and long
    short short_var {-32768} ; //  2 Bytes 
    short int short_int {455} ; // 
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; // 
    unsigned short int unsigned_short_int {456};
    
    int int_var {55} ; // 4 bytes
    signed signed_var {66};//
    signed int signed_int {77};//
    unsigned int unsigned_int{77};
    
    long long_var {88}; // 4 OR 8 Bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};// 8 Bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    /*
    std::cout << "Short variable : " << short_var<<  " , size : "
    << sizeof (short) << " bytes" << std::endl;

    std::cout << "Short Int : " << short_int << " , size : "
    << sizeof (short int) << " bytes" << std::endl;

    std::cout << "Signed short : " << signed_short
    << " , size : " << sizeof (signed short) << " bytes" << std::endl;

    std::cout << "Signed short int :  " << signed_short_int
    <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;

    std::cout << "unsigned short int :  " << unsigned_short_int
    <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;


    std::cout << "Int variable :  " << int_var <<" , size : "
    << sizeof (int) << " bytes" << std::endl;

    std::cout << "Signed variable " << signed_var <<" , size : "
    << sizeof (signed) << " bytes" << std::endl;

    std::cout << "Signed int :  " << signed_int <<" , size : "
    << sizeof (signed int) << " bytes" << std::endl;

    std::cout << "unsigned int :  " << unsigned_int <<" , size : "
    << sizeof (unsigned int) << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;


    std::cout << "Long variable :  " << long_var << " , size : "
    << sizeof (long) << " bytes" <<std::endl;

    std::cout << "Long int :  " << long_int <<" , size : "
    << sizeof (long int) << " bytes" << std::endl;

    std::cout << "Signed long :  " << signed_long <<" , size : "
    << sizeof (signed long) << " bytes" << std::endl;

    std::cout << "Signed long int : " << signed_long_int <<" , size : "
    << sizeof (signed long int) << " bytes" << std::endl;

    std::cout << "unsigned long int : " << unsigned_long_int <<" , size : "
    << sizeof (unsigned long int) << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;


    std::cout << "Long long : " << long_long <<" , size : "
    << sizeof (long long) << " bytes" << std::endl;

    std::cout << "Long long int : " << long_long_int <<" , size : "
    << sizeof (long long int) << " bytes" << std::endl;

    std::cout << "Signed long long : " << signed_long_long <<" , size : "
    << sizeof (signed long long) << " bytes" <<std::endl;

    std::cout << "Signed long long int : " << signed_long_long_int <<" , size : "
    << sizeof (signed long long int) << " bytes" << std::endl;

    std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
    << sizeof (unsigned long long int) << " bytes" << std::endl;

    std::cout << "---------------------" << std::endl;
    */

    //Fractional Numbers

    //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // Precision : 7 // requires f at the end to tell the computer that it is a float
    double number2 {1.12345678901234567890}; // Precision : 15
    long double number3  {1.12345678901234567890L};
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;



    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits


    //Float problems : The precision is usually too limited for a lot of applications
    float number4 = 192400023.0f; // Error : narrowing conversion

    std::cout << "number4 : " << number4 << std::endl;

    //Scientific notation
    //What we have seen so far in terms of floating point types is fixed notation. There is another notation, scientific that is handy if you have really huge numbers or small numbers to represent

    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8}; // Can omit the lower 00023
    // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;


    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ -5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 }; //-infinity because -5.6/0, if 5.6/0, it would +infinity
    
    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12; // 0/0 = NaN
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    // BOOLEANS
    bool red_light {false};
    bool green_light{true};
    
    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }
    // or
    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;


    // CHARACTERS AND TEXT
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};
    
    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;
    
    char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 


    // AUTO Variable type
    auto var1 {12}; //int
    auto var2 {13.0}; //double
    auto var3 {14.0f}; //float
    auto var4 {15.0l}; //long double
    auto var5 {'e'}; // char
    
    //int modifier suffixes
    auto var6 { 123u}; // unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 { 123ll}; // long long

    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;

    //ASSIGNMENTS
    int var1{123}; // Declare and initialize
    std::cout << "var1 : "  << var1 << std::endl;
    
    var1 = 55; // Assign
    std::cout << "var1 : "  << var1 << std::endl;
    
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    double var2 {44.55}; // Declare and initialize
    std::cout << "var2 : " << var2 << std::endl;
    
    var2 = 99.99; // Assign
    std::cout << "var2 : " << var2 << std::endl;
    
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    std::cout << std::endl;
    bool state{false}; // Declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;
    
    state = true; // Assign
    
    std::cout << "state : " << state << std::endl;

    //Auto type deduction
    //Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    
    var3 = -22; // Assign negative number. DANGER!
    
    std::cout << "var3 : " << var3 << std::endl;

    return 0;
}