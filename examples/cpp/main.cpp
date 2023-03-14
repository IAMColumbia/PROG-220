#include<iostream>
#include<string>

void foo(int x)
{
    //by value
    //Any changes to x stay with the function and do not modify the original
}

void foo(int *x)
{
    //by pointer
    //any changes to x will persist outside of the function
    *x = 101;
    x = 0x0;
}

void foo_ref(int &x)
{
    //by reference
    //any changes to x will persist outside of the function
    x = 101;
    x = 0x0;
}


int main()
{

    int x = 100;
    foo(x);
    foo(&x);
    foo_ref(x);
    return 0;
}
