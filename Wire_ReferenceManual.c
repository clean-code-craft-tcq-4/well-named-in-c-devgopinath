#include "Wire_ColorCode.h"

/*
New Feature Request
The color coding needs to be printed as a reference manual for wiring personnel. This manual is a mapping from the color-names to the corresponding numbers. Add a function that would format the color coding in a form that someone can print. Also resolve any coding guideline violations.
*/

static void ColorPairNameAndNumberToString(const ColorPair* colorPair, char* buffer, int pairNumber)
{
    sprintf(buffer, "%s %s %d",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor], pairNumber);
}

void ReferenceManual(void)
{
    ColorPair colorPair;
    int pairNumber;
    int maxColorPairCombinations = numberOfMajorColors * numberOfMinorColors;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];

    printf("Major-color    Minor-color    Pair-No.\n");
    for (pairNumber = 1; pairNumber <= maxColorPairCombinations; ++pairNumber)
    {
        colorPair = GetColorFromPairNumber(pairNumber);
        ColorPairToString(&colorPair, colorPairNames, pairNumber);
        printf("%s\n", colorPairNames);
    }
}
