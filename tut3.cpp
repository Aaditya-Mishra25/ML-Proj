#include <iostream>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << (m1 == 2);
    return 0;
}