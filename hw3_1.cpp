#include <iostream>

extern int a;
extern int b;
extern int c;
extern int d;

int main(){

double res = a*(b+ (double)c/d);


std::cout << res << std::endl;

return 0;
}