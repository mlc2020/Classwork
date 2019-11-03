#include <iostream>
#include "Vect.h"

using namespace std;

int main()
{
    Vect v1 = vect_construct(10, 2);
    vect_size(v1);
    std::cout << v1.size << endl;
    vect_capacity(v1);
    std::cout << v1.capacity << endl;
    vect_erase(v1, 3);
    std::cout << v1.size;
	return 0;
}
