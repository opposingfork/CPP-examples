<iostream>

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}
/* Null value = a special value that means something has no value, when a  pointer is holding a null value, that pointer is not pointing at anything, nullptr = keyword that represents a null pointer literal
nullptrs are useful when determining if an address was assigned to a pointer. when using pointers, be careful that your code isn't dereferencing nullptr or pointing to free memory*/