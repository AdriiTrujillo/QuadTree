/*
 *    Implementation of a QuadTree container.
 *   Author: Adrian Trujillo Lopez
 *   Contact: adrian.trujillo.jp@gmail.com
 */

#pragma once
#ifndef QUAD_TREE_HPP
#define QUAD_TREE_HPP

class QuadPoint {
    public:
        QuadPoint(double x, double y): _x(x), _y(y) { }

        const double getX() const { return _x; }
        const double getY() const { return _y; }

    private:
     double _x;
     double _y;
};

class QuadRect {
    public:
        QuadRect(QuadPoint topLeft, QuadPoint bottomRight):
            _topLeft(topLeft), _bottomRight(bottomRight) { }

        const QuadPoint getTopLeft() const { return _topLeft; }
        const QuadPoint getBottomRight() const { return _bottomRight; }

    private:
        QuadPoint _topLeft;
        QuadPoint _bottomRight;
};


class QuadTree {

}; 

#endif
