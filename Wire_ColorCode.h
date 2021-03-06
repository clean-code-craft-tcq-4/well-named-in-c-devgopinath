#ifndef WIRE_COLORCODE_H
#define WIRE_COLORCODE_H

#define MAX_COLORPAIR_NAME_CHARS 16

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

extern ColorPair GetColorFromPairNumber(int pairNumber);

extern void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);
extern void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);
extern void ReferenceManual(void);

#endif /* end of WIRE_COLORCODE_H */