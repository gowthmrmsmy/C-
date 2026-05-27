// TOPIC: Dynamic Memory
// Normally, memory is managed automatically (stack).
// With new/delete, YOU control when memory is allocated and freed (heap).

#include <iostream>

int main()
{
    // STACK memory — automatic, limited
    int stackVar = 10;  // created on stack, freed when scope ends

    // HEAP memory — manual, larger
    // new = allocate memory on the heap
    int *ptr = new int;
    *ptr = 42;

    std::cout << "Stack var: " << stackVar << "\n";
    std::cout << "Heap var:  " << *ptr << "\n";
    std::cout << "Address:   " << ptr << "\n";

    // delete = free the memory when you're done
    delete ptr;
    ptr = nullptr;  // good practice: reset to null after delete

    // Dynamic array — size decided at runtime
    int size;
    std::cout << "\nHow many grades? ";
    std::cin >> size;

    int *grades = new int[size];  // array on the heap

    for (int i = 0; i < size; i++) {
        std::cout << "Grade #" << (i + 1) << ": ";
        std::cin >> grades[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    std::cout << "Average: " << (double)sum / size << "\n";

    // delete[] for arrays (not just delete)
    delete[] grades;
    grades = nullptr;

    // Summary:
    // new type      → allocate one item on heap
    // new type[n]   → allocate array on heap
    // delete ptr    → free one item
    // delete[] ptr  → free array
    // Forgetting delete = memory leak

    return 0;
}
