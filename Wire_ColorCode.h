#ifndef WIRE_COLORCODE_H
#define WIRE_COLORCODE_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;

extern void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);
extern void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

#endif /* end of WIRE_COLORCODE_H */