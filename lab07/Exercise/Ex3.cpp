#include <iostream>
using namespace std;

class Distance
{
public:

    int meters;

    Distance(int m)
    {
        meters = m;
    }

    Distance operator + (Distance d)
    {
        return Distance(meters + d.meters);
    }
};

int main()
{
    Distance d1(5);
    Distance d2(7);

    Distance d3 = d1 + d2; //d3=d1.operator+(d2)

    cout << "Total Distance = " << d3.meters;

    return 0;
}