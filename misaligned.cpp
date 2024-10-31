#include "misaligned.h"

namespace misaligned
{

    const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
    const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);

    int Misaligned::printColorMap()
    {
        int i = 0, j = 0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            }
        }
        return i * j;
    }

    int Misaligned::GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * 5 + minor;
    }

    int Misaligned::expectNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }
}

void testPairToNumber(misaligned::MajorColor major, misaligned::MinorColor minor)
{
    misaligned::Misaligned *l_object{};
    int pairNumber = l_object->GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == l_object->expectNumberFromColor(major, minor));
}

int main()
{
    misaligned::Misaligned l_object;
    int result = l_object.printColorMap();
    assert(result == 25);
    testPairToNumber(misaligned::BLACK, misaligned::ORANGE);
    testPairToNumber(misaligned::VIOLET, misaligned::SLATE);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
