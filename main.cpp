#include "point.h"
#include "segment.h"
#include <iostream>
using namespace std;

// Typedefs
typedef Primitives::Point<int> IntPoint;
typedef Primitives::Point<double> DoublePoint;

int main(int argc, char const *argv[]) {
    // Points
    IntPoint point1(1, 2);
    IntPoint point2;

    // Display
    cout << point1 << endl;

    // Distance
    cout << Primitives::distance(IntPoint(1, 2), DoublePoint(3, 4)) << endl;

    // Construct a segment
    Segment line(DoublePoint(1, 2), DoublePoint(3, 4));

    // Print the segment points
    cout << "The segment consists of the points: ";
    cout << line.getP1() << " ";
    cout << line.getP2() << endl;

    // Print line length
    cout << line << endl;

    // Return
    return 0;
}
