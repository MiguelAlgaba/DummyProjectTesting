#include <cstdlib>
#include <iostream>

int main()
{
    if(1==1)
    {
        std::cerr << "SUCCESS" << std::endl;
        return EXIT_SUCCESS;
    }
    else
    {
        std::cerr << "FAILURE" << std::endl;
        return EXIT_FAILURE;
    }

}
