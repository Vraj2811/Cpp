#include <iostream>

using namespace std;

int x = 10;

int main()
{
     int x = 7;
     cout << "Value of local var x is " << x << endl;
     cout << "Value of global var x is " << ::x << endl
          << endl;

     // ************* Float, double and long double Literals****************
     float d = 34.4;
     long double e = 34.4;
     cout << "The value of d is " << d << " and size of d is " << sizeof(d) << endl
          << "The value of e is " << e << " and size of e is " << sizeof(e) << endl;
     cout << "The size of 34.4 is " << sizeof(34.4) << endl;
     cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
     cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
     cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
     cout << "The size of 34.4L is " << sizeof(34.4L) << endl
          << endl;

     // *************Typecasting****************
     int a = 45;
     float b = 45.46;
     cout << "The float value of a is " << (float)a << endl;
     cout << "The float value of a is " << float(a) << endl;

     cout << "The int value of b is " << (int)b << endl;
     cout << "The int value of b is " << int(b) << endl;
     int c = int(b);

     cout << "The value of a + b is " << a + b << endl;
     cout << "The value of a + int(b) is " << a + int(b) << endl;
     cout << "The value of a + (int)b is " << a + (int)b << endl;

     return 0;
}
