#include <iostream>

int main(){
    // Basic Operations
    //Operator Precedence= BEDMAS, left to right // https://en.cppreference.com/w/cpp/language/operator_precedence
    //Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "result : " << result << std::endl;

    //Subtraction
    result = number2 - number1 ;
    std::cout << "result : " << result << std::endl;

    result = number1 - number2;
    std::cout << "result : " << result << std::endl;

    //Multiplication
    result = number1 * number2;
    std::cout << "result : " << result << std::endl;

    //Division
    result = number2 / number1;
    std::cout << "result : " << result << std::endl;

    //Modulus
    result = number2 % number1; // 7 % 2
    std::cout << "result : " << result << std::endl; // 1

    result = 31 % 10;
    std::cout << "result : " << result << std::endl; // 1


    //Prefix and Postfix
    int value { 5 };
    
    //Increment by one
    value = value + 1; //6
    std::cout << "The value is : " << value << std::endl; // 6
    
    value = 5; // Reset value to 5
    
    //Decrement by one
    value = value - 1; // 4
    std::cout << "The value is : " << value << std::endl; //4
    
    //===================

    std::cout << "======Postfix increment and decrement======"<< std::endl;
    //Reset value to 5
    value = 5;
    
    std::cout << "The value is (incrementing) : " << value++ << std::endl; // 5
    std::cout << "The value is : " << value << std::endl; // 6
    
    std::cout << std::endl;
    
    //Decrement with postfix
    
    //Reset value to 5
    value = 5;
    
    std::cout << "The value is (decrementing) : " << value-- << std::endl; //5
    std::cout << "The value is : " << value << std::endl; // 4

    //====================
    std::cout << "======Prefix increment and decrement======"<< std::endl;

    //Reset value to 5
    value = 5;
    
    ++value;
    std::cout << "The value is (prefix++) : " << value << std::endl; // 6
    
    //Reset value to 5
    value = 5;
    std::cout << "The value is (prefix++ in place) : " << ++value << std::endl; // 6
    
    std::cout << std::endl;
    
    //Prefix : Decrementing
    
    //Reset value to 5;
    value = 5;
    --value;
    std::cout << "The value is (prefix--) : " << value << std::endl; // 4
    
    //Reset value to 5;
    value = 5;
    std::cout << "The value is (prefix-- in place) : " << --value << std::endl;//4


    // Compound Operators
    int value {45};
    
    std::cout << "The value is : " << value << std::endl;
    
    std::cout << std::endl;
    value = value + 5;
    //value +=5; // equivalent to value = value + 5
    std::cout << "The value is (after +=5) : " << value << std::endl; // 50

    std::cout << std::endl;
    value -=5; // equivalent to value = value - 5
    std::cout << "The value is (after -=5) : " << value << std::endl; // 45 

    std::cout << std::endl;
    value *=2;
    std::cout << "The value is (after *=2) : " << value << std::endl; // 90

    std::cout << std::endl;
    value /= 3;
    std::cout << "The value is (after /=3) : " << value << std::endl; // 30

    std::cout << std::endl;
    value %= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;// 8

    // Relationship Operators
    int number1 {20};
    int number2 {20};
	
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
	
	std::cout << std::endl;
	std::cout << "Comparing variables" << std::endl;
	
    std::cout << std::boolalpha ; // Make bool show up as true/false instead of 1/0
	//Stress the need for parentheses here
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
	std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

	std::cout << std::endl;
	std::cout << "store comparison result and use it later" << std::endl;
	
	bool result = (number1 == number2);
    
    std::cout <<  number1 << " == " << number2 << " : " << result <<  std::endl;

    // Logical Operators
    bool a {true};
    bool b {false};
    bool c {true};
		
	//AND : Evaluates to true when all operands are true.
	//      A single false operand will drag the entire expression to evaluating false.
	
	std::cout << std::endl;
	std::cout << "Basic AND operations" << std::endl;

    std::cout << " a && b : " << (a && b) << std::endl; // false
    std::cout << " a && c : " << (a && c ) << std::endl; // true
    std::cout << " a && b && c :" << (a && b && c) << std::endl; // false


	//OR : Evaluates to true when at least one operand true.
	//      A single true operand will push 
    //      the entire expression to evaluating true.
	std::cout << std::endl;
	std::cout << "Basic OR operations" << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c ) << std::endl;
    std::cout << " a ||b || c :" << (a || b || c) << std::endl;


	//NOT : Negates whatever operand you put it with
	std::cout << std::endl;
	std::cout << "Basic NOT operations" << std::endl;	
	
	std::cout << "!a : " << !a << std::endl;
	std::cout << "!b : " << !b << std::endl;
	std::cout << "!c : " << !c << std::endl;


	//Combinations of all these operators
	std::cout << std::endl;
	std::cout << "Combining logical operators" << std::endl;
	// !(a &&b) || c
	std::cout << "!(a &&b) || c : " << (!(a &&b) || c) << std::endl; // true


    //Combining logical operators with relational operators
	int d{45};
	int e{20};
	int f{11};
	
	std::cout << std::endl;
	std::cout << "Relational and logic operations on integers" << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "f : " << f << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
	std::cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << std::endl;
	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;

    return 0;
}