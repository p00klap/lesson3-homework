#include <iostream>

using namespace std;

int main()
{
    const int a = 1;
    const int b = 9;
    const int c = 200;
    const int d = 7;
    double res = a*(b+(double) c/d);
    
    cout << res << endl;

    return 0;
}
