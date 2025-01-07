#include <iostream>

int main(){
    //! REFERENCES

    int int_data{33}; // Assign through initialization
    double double_data{55}; // Assign through assignment

    //References
    int& ref_int_data{int_data};
    double& ref_double_data{double_data};
    //Have to declare and initialize in on statement

    //* &int_data prints address of variable 
    std::cout << "int_data : " << int_data << "and &int_data : " << &int_data<< std::endl;
    std::cout << "double_data : " << double_data << "and &double_data : " << &double_data  << std::endl;
    
    std::cout << "========" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << "and &ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << " and &ref_double_data : " << &ref_double_data << std::endl;
    //* Shows us that the addresses are the same between the variables and their references

    //*Changing the original variable will also change the reference
    int_data = 111;
    double_data = 67.2;

    //Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << "and &int_data : " << &int_data<< std::endl;
    std::cout << "double_data : " << double_data << "and &double_data : " << &double_data  << std::endl;
    
    std::cout << "========" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << "and &ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << " and &ref_double_data : " << &ref_double_data << std::endl;

    //! Comparing References To Pointers

    //*Declare pointer and reference

    double double_value {12.34};
    double& ref_double_value {double_value}; //* Reference to double_value
    double* p_double_value {&double_value}; //* Pointer to double_value

    //* Reading
    std::cout << "double_value : " << double_value << "and ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << "and *p_double_value : " << *p_double_value << std::endl;


    //* References are like constant pointers, but they have a much friendlier syntax as they don't require dereferencing to read and write through reference code

    //* Writing through pointer
	*p_double_value = 15.44;
	
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
	
	//* Writing through reference
	ref_double_value = 18.44;
	
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //* Make the reference reference something else.
    double some_other_double{78.45}; //random

    ref_double_value = some_other_double;

    std::cout << "Making the reference reference something else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //* the ref_doublevalue changes to new value but the address stays the same. reference can only be changed when initialized


    //* Make the pointer point to something else
    p_double_value = &some_other_double;

    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //* changes the pointer value and address to new value(some_other_double) and changing the value of pointer will change the new new variable rather than original(following example)

    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    //! References And Const

    //* Non const reference // Can modify original variable through reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};

    //* Const reference // cannot go through reference to modify
	const int& ref_age{age};
	/*
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;

    //* the const key word only applies to reference and not the original variable (const int& const re_age{age} === headache/ doesn't work)

    //* if original variable is const(const int age{3}), you still make a const reference to it(const int& ref_age{age})
	

	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	ref_age++; //Modify through reference which won't compile because the reference is a const reference
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
    */

   //* Simulating reference behavior with pointers
   // const int * const p_age {&age};
   // *p_age = 45;
    return 0;
}