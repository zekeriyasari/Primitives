/* Point
 * Includes operations for n-dimensional points
 */

#ifndef point
#define point

#include <math.h>

#include <iostream>

using namespace std;

namespace Primitives {

template <typename T>
class Point {
   private:
    T _x;  // x coordinate
    T _y;  // y coordinate

   public:
    // Constructors
    Point();
    Point(T x, T y);

    // Destructor
    ~Point();

    // Displays
    void display();

    // Operator overloads
    template <typename S>
    friend ostream &operator<<(ostream &os, const Point<S> &pnt);

    // Accesors
    T getX() { return _x; };
    T getY() { return _y; };

    // Modifiers
    void setX(T x) { _x = x; };
    void setY(T y) { _y = y; };
};

template <typename T>
Point<T>::Point() {}

template <typename T>
Point<T>::~Point() {}

template <typename T>
Point<T>::Point(T x, T y) {
    _x = x;
    _y = y;
}

template <typename T>
void Point<T>::display() {
    cout << "x: " << _x << endl;
    cout << "t: " << _x << endl;
}

template <typename T>
ostream &operator<<(ostream &os, const Point<T> &pnt) {
    os << "Point(" << pnt._x << "," << pnt._y << ")";
    return os;
}

template <typename S, typename R>
double distance(Point<S> p1, Point<R> p2) {
    return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
}

}  // namespace Primitives

#endif
