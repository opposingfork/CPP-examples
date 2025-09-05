int main() {

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Fork";
    int age  = 17;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}