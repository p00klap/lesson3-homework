#include <iostream>

using namespace std;

int main()
{
    const int a = 1;
    const int b = 9;
    const int c = 200;
    const int d = 7;
    double cRes = (double) c/d;
    double res = a*(b+cRes);
    
    cout << res << endl;

    return 0;
}
