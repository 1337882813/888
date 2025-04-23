#include <vector>
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void plotLineMidpoint(Point p0, Point p1, std::vector<Point>& points) {
    int dx = p1.x - p0.x;
    int dy = p1.y - p0.y;
    int d = 2 * dy - dx;
    int y = p0.y;

    for (int x = p0.x; x <= p1.x; ++x) {
        points.push_back({ x, y });
        if (d > 0) {
            y++;
            d += 2 * (dy - dx);
        }
        else {
            d += 2 * dy;
        }
    }
}