#include <iostream>

int main()
{
    int x = 10;
    int *y = &x;
    std::cout << "x = " << x << std::endl; // 10
    std::cout << "y = " << y << std::endl; // 0x7ffebf7b3b7c (some memory address)
    std::cout << "*y = " << *y << std::endl; // 10

    x = 20;
    std::cout << "x = " << x << std::endl; // 20
    std::cout << "y = " << y << std::endl; // 0x7ffebf7b3b7c (same memory address from above)
    std::cout << "*y = " << *y << std::endl; // 20
    
    *y = 30; // as you can see we have to use * to update the value of x - value at the memory address of y
    std::cout << "x = " << x << std::endl; // 30
    std::cout << "y = " << y << std::endl; // 0x7ffebf7b3b7c (same memory address from above)
    std::cout << "*y = " << *y << std::endl; // 30
    // as you can see the value *y update the value of x as well because y is pointing to the memory address of x so when we update the value of *y it will update the value of x as well

    int z = 40;
    y = &z; // we can change the memory address of y to point to z using &z
    std::cout << "x = " << x << std::endl; // 30
    std::cout << "y = " << y << std::endl; // 0x7ffebf7b3b12 (some other memory address - z)
    std::cout << "z = " << z << std::endl; // 40
    std::cout << "*y = " << *y << std::endl; // 40
    // as you can see now y is pointing to z so when we update the value of *y it will update the value of z as well

    return 0;
}