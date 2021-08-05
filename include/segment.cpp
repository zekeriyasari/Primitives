
#include "segment.h"

namespace Primitives {

Segment::Segment(DoublePoint p1, DoublePoint p2) : _p1(p1), _p2(p2) {}

Segment::~Segment() {}

DoublePoint Segment::getP1() { return _p1; }
DoublePoint Segment::getP2() { return _p2; }

double Segment::length() {
    return Primitives::distance(this->getP1(), this->getP2());
}

ostream &operator<<(ostream &os, const Segment &seg) {
    os << "Line: " << seg._p1 << " => " << seg._p2;
    return os;
}

} // namespace Primitives
