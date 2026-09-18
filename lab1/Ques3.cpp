#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void input()
    {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;
    }

    void show()
    {
        cout << "Point = (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1, p2;

    cout << "Enter details of Point 1:" << endl;
    p1.input();

    cout << "Enter details of Point 2:" << endl;
    p2.input();

    cout << "\nDetails of Point 1:" << endl;
    p1.show();

    cout << "Details of Point 2:" << endl;
    p2.show();

    return 0;
}