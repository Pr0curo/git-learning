#include <iostream>

int main()
{
    std::cout << "count to ten" << std::endl;

    int count(11);

    for( int counter=1; counter < count; counter++ )
    {
        std::cout << counter << std::endl;
    }

    std::cout << "counting finished" << std::endl;

}
