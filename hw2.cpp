#include <iostream>

using namespace std;

int main()
{
    int i1 = 34;
    int i2 = 21;
    int i3 = (i1>i2) ? (2*(i1-i2)) : (i1-i2);
    
    cout <<i3 << endl;

    return 0;
}
