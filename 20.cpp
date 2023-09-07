#include <iostream>

using namespace std;

float Volume(float r, float h)
{
    return (3.14 * r * r * h);
}
float Volume(float a)
{
    return (a * a * a);
}
float Volume(float l, float b, float h)
{
    return (l * b * h);
}

int main()
{
    cout << "Volume of Cylinder of radius 3 and height 5 is " << Volume(3, 5) << endl;
    cout << "Volume of Cube of side 7 is " << Volume(7) << endl;
    cout << "Volume of Cuboid of length 2, breadth 4 and height 8 is " << Volume(2, 4, 8) << endl;

    return 0;
}