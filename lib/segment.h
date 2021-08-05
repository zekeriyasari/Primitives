
/* Segment library
 * A segment consists of points
 * */

#ifndef segment
#define segment

#include "point.h"

typedef Primitives::Point<double> DoublePoint;

class Segment {
  private:
    DoublePoint _p1;
    DoublePoint _p2;

  public:
    Segment(DoublePoint p1, DoublePoint p2);
    ~Segment();

    DoublePoint getP1(void);
    DoublePoint getP2(void);
    double length();

    friend ostream &operator<<(ostream &os, const Segment &seg);
};

#endif
