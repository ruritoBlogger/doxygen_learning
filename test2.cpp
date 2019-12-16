#include "test2.h"

void TEST2::test()
{
    std::cout << "TEST" << std::endl;
}

int main()
{
    TEST test;
    test.test();
    TEST2 test2;
    test2.test();
    return 0;
}
