#include <iostream>
#include <assert.h>
namespace misaligned
{

    enum MajorColor
    {
        WHITE,
        RED,
        BLACK,
        YELLOW,
        VIOLET
    };
    enum MinorColor
    {
        BLUE,
        ORANGE,
        GREEN,
        BROWN,
        SLATE
    };

    class Misaligned
    {
    public:
        int printColorMap();
        int GetPairNumberFromColor(MajorColor major, MinorColor minor);
        int expectNumberFromColor(MajorColor major, MinorColor minor);
    };
}
