#include <iostream>

////////// POINTER ARITHMETIC //////////
const int MAX = 4;
int arr[MAX] = { 50, 105, 100, 150 };
int *ptr;


void PointerIncrement(){
    //// POINTER INCREMENT ////
    // NOTE: Put the address of the array in the pointer
    //        - Read note/PointerArthmetic 1.
    ptr = arr;

    for( int i = 0; i < MAX; i++){
        std::cout << "Address of arr[" << i << "]: " << ptr << std::endl;
        std::cout << "Value of arr[" << i << "]: " << *ptr << std::endl;

        // NOTE: Increment ptr
        ptr++;
    }
}

void PointerDecrement(){
    //NOTE: Save address of last element in the pointer
    //        - Read note/PointerArthmetic 1.
    ptr = &arr[MAX-1];
    std::cout << ptr << std::endl;

    for(int i = MAX; i > 0; i--){
        std::cout << "Address of arr[" << i << "]: " << ptr << std::endl;
        std::cout << "Value of arr[" << i << "]: " << *ptr << std::endl;
    
        //NOTE: Decrement ptr for previous location
        ptr--;
    }
}

void PointerComparison(){
    int i = 0;

    while(ptr <= &arr[MAX-1]){
        std::cout << "Address of arr["<< i << "]: " << ptr << std::endl;
        std::cout << "Value of arr["<< i << "]: " << *ptr << std::endl;
        
        ptr++;
        i++;
    }
}

int main(){
    std::cout << "Pointer Increment: " << std::endl;
    PointerIncrement();
    std::cout << std::endl;

    std::cout << "Pointer decrement: " << std::endl;
    PointerDecrement();
    std::cout << std::endl;

    std::cout << "Pointer comparison: " << std::endl;
    PointerComparison();
    std::cout << std::endl;;
}
