#include <iostream>
#include <cstdlib>

//NOTE: It is necessary to decalare this as a constant
const int MAX = 3;
//NOTE: Initialize array
int arr[MAX] = { 1, 2, 3 };

void PrintArray( int *param_arr){
    std::cout << *param_arr << std::endl;
}

int * returnArrayPoint(){
    //TODO: You MUST declare the loval variable as static.
    static int r[3];

    for(int i = 0; i<3; i++){
        r[i] = rand();
        std::cout << "Current array value at " << i << ": " << r[i] << std::endl;
    }

    // NOTE: Return array
    return r;
}

int main(){
    //TODO: Declaring an array
    // You can declare an array with no specific size. However the size cannot be edited.
    int balance[] = { 1, 2, 3, 4 };
    balance[4] = 5;

    //NOTE: Multi-dimensional array
    int multArr[4][4] = {
      {11, 12, 13, 14},
      {21, 22, 23, 24},
      {31, 32, 33, 34},
      {41, 42, 43, 44},
    };

    // TODO: Accessing 2-d array
    for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
                std::cout << "2-D Location multArr[" << i <<"][" << j << "] = " << multArr[i][j] << std::endl;
        }
    }

    //TODO: Pointer to array
    //      Check Notes/Arrays.txt 2
    int *p;
    p = balance;    // Assigning array to a pointer, assign first element to pointer
    std::cout << "Address of first element: " << p << std::endl;
    std::cout << "Value of first element: " << p << std::endl;

    //TODO: Passing array to function
    //      It is not possibly to pass an array to a function so pass a pointer of the variable to the function.
    PrintArray(*multArr);

    //TODO: Returning arrays from functions
    int *a;

    a = returnArrayPoint();
    for(int i; i < 3; i++){
        std::cout << "*(p + " << i << "): " << *(p + i) << std::endl;
    }
}
