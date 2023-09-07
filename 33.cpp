#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    int x;
    int y;
    friend float distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    };
    void display(void)
    {
        cout << "The Point is (" << x << ", " << y << ")" << endl;
    };
};

float distance(Point m, Point n)
{
    float dist = sqrt((m.x - n.x) * (m.x - n.x) + (m.y - n.y) * (m.y - n.y));
    return dist;
};

int main()
{
    Point a(5, 9);
    Point b(1, 3);
    a.display();
    b.display();
    float dist = distance(a, b);
    cout << "The distance between the 2 points is " << dist << endl;

    return 0;
}