#include <iostream>

int main(){
    
    //! LOOPS
    
    //* for loop : the good way
    for( unsigned int i{0} ; i < 100 ;++i){
        //Whatever we want the loop to run
        std::cout << i <<  " : I love C++" << std::endl;
    }
    // same as running std::cout << i <<  " : I love C++" << std::endl; 100 times

    //* Use size_t : a representation of some unsigned int for positive numbers [sizes]
    
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }


    /*
    //sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    */


    //Scope of the iterator
    /*
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i : " << i << std::endl;Compiler error : i is not in scope
    */


    //Iterator declared outside the loop
    /*
    size_t i{0}; // Iterator defined outside

    for(i ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


    //Leave out the iterator declaration part
    /*
    size_t i{0}; // Iterator defined outside

    for(  ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


    //Don't hard code values : BAD!

    const size_t COUNT{100};

    for(size_t i{0} ; i < COUNT ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }

    /*
    //* for <enter> for 'for' loop snippet shortcut
    for (size_t i = 0; i < count; i++)
    {
    }
    */

   //! While Loop
    // const size_t COUNT{100};
    size_t i{0}; // Iterator declaration

    while(i < COUNT ){ // Test
        std::cout << i << " : I love C++" << std::endl;

        ++i; // Incrementation 
    }

    //! Do While Loop

    // const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do{
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    }while( i < COUNT);

    std::cout << "Loop done!" << std::endl;

    return 0;
}