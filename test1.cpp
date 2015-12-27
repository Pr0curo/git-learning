#include <iostream>

int main()
{
    std::cout << "count to ten" << std::endl;

    int count(10);

    for( int counter=0; counter < count; counter++ )
    {
        std::cout << counter+1 << std::endl;
    }

    std::cout << "counting finished" << std::endl;

}
