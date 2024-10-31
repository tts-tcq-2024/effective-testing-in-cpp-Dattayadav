#include "tshirts.h"

namespace tshirts
{
    char tshirtsize::size(int cms)
    {
        char sizeName = '\0';
        if (cms < 38)
        {
            sizeName = 'S';
        }
        else if (cms > 38 && cms < 42)
        {
            sizeName = 'M';
        }
        else if (cms > 42)
        {
            sizeName = 'L';
        }
        return sizeName;
    };
}

int main()
{
    tshirts::tshirtsize *l_object{};
    assert(l_object->size(37) == 'S');
    assert(l_object->size(40) == 'M');
    assert(l_object->size(43) == 'L');
    // No sizename definition for size-> 38 and 42 in implementation.
    assert(l_object->size(38) == 'S');
    assert(l_object->size(42) == 'L');
    std::cout << "All is not well\n";
    return 0;
}
