int main()
{
    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "shawrma");
    fill(foods + (SIZE/3)*2, foods + SIZE, "vinegar coffee");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;

}
