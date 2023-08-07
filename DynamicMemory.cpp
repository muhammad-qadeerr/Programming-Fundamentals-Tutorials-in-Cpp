#include <iostream>
using namespace std;

void f1(int n)
{
    int b = 4, c = 7, d = 8, e = 10;
    cout << n << " " << c << " " << d << " " << e << endl;
}
void testing()
{
    int *p1 = nullptr;
    p1 = new int; // Memory Allocation
    cout << "Please enter a value : ";
    cin >> *p1;
    cout << "YOu entered the following value: " << *p1 << endl;

    delete p1;    // Memory De-Allocation
    p1 = nullptr; // To Avoid dangling pointer issue.

    // Dangling Pointer
    // The pointer which contain the address of deallocated memory.
}
int main()
{
    // 1. Stack - memory created and automatically destroyed.  ->> Static Memory Allocation
    // 2. Heap  (Free- Store)  i.e. memory won't be destroyed. ->> Dynamic Memory Allocation (DMA)
    // Memory on the heap can only be allocated through POINTERS.

    // All the variables are formed on stack
    // Whenever the function will be called memory will be allocated, and after function execution it is destroyed.
    // int a = 6;
    // f1(a);
    // f1(45);

    // int *p1 = nullptr; // Memory on Heap can be allocated using new keyword.
    // p1 = new int;      // New int will be allocated to heap i.e. no variable name.
    // // New int's memory address will be placed in pointer p1 which is on stack.

    // // *p1 = 11; // 11 will be stored in new int at heap.
    // // Everything on heap.
    // cout << "Please enter a value : ";
    // cin >> *p1;
    // cout << "YOu entered the following value: " << *p1 << endl;

    // testing();

    // After testing functin executed the memory on the stack destroyed automatically but --
    // memory on the heap is not destroyed yet.

    for (int i = 0; i < 5; i++)
    {
        testing();
    }
    // With every function call the memory on the heap is not destroying i.e waste 4*5 = 20 byte memory.
    // This problem is called as memory leakage.
    // After de-allocation if we try to access that pointer it will result in dangling pointer, can be seen
    // in the function

    return 0;
}