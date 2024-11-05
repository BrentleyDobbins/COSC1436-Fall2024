#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

void StackDemo()
{
    double localDouble = 45.6;

    //Declare a pointer to a double
    // Pointer is ALWAYS a memory address
    // Pointer is ALWAYS either 4 or 8 bytes
    // Pointer value is ALWAYS an intregal value (memory address)

    //Pointers have 2 data points: value (memory address), value they reference (in memory)
    double* ptrDouble;
};

int main()
{
    StackDemo();
}

// A pointer is esentially a memory address -> utilizes raw memory; Makes a program more dynamic

// variable is a named memory location

//1 byte = 8bits
//1 kilabyte = 1024 bytes
//1 gigabyte = 1024 kilabytes
//1 megabyte = 1024 gigabytes
//1 terabyte = 1024 megabytes
//1 pentabyte = 1024 terabytes (modern data center use)
//1 exabyte = 1024 pentabytes (can hold every word spoken by every person in history)

//  2 types of pointers:
//
//- (2^32) = x86 limited to 4GB of memory
//- (2^64) = x64 (Up to 16EB worth of data but system limits it to 128TB) (System default mode)
// Need to know Hexadecimal to work with pointers(raw memory addresses)
// Pointer value (memory address) uses a 64 bit int value