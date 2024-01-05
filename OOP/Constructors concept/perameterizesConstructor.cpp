#include <bits/stdc++.h>
using namespace std;
class point
{
    float x, y;

public:
    friend void distance(point, point); // friend functions declare
    point(float a, float b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << " , " << y << ")" << endl;
    }
};

void distance(point c1, point c2)
{

    float X = pow((c2.x - c1.x), 2);
    float Y = pow((c2.y - c1.y), 2);
    cout << "The the distance between X and Y is: " << (float)sqrt(X + Y) << endl;
}
int main()
{
    point p1(1, 1);
    p1.displayPoint();

    point p2(1, 1);
    p2.displayPoint();

    distance(p1, p2);

    return 0;
}