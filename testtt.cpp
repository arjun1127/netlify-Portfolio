#include <iostream>
void blockingMemoryManagement() {
// Synchronous memory allocation for an integer
int* p = new int(42); // blocking call
std::cout << "Blocking: Value of p: " << *p << std::endl;
// Synchronous memory deallocation
delete p; // blocking call
// Synchronous memory allocation for an array
int* arr = new int[5]; // blocking call
// Assign values to the allocated array
for (int i = 0; i < 5; ++i) {
arr[i] = i * 10;
}
// Print array values
for (int i = 0; i < 5; ++i) {
std::cout << "Blocking: arr[" << i << "]: " << arr[i] << std::endl;
}
// Synchronous memory deallocation for the array
delete[] arr; // blocking call
}
int main() {
blockingMemoryManagement();
return 0;
}