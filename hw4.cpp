#include <iostream>;
 int main (){
     int arr[3][3][3];
     arr [1][1][1] = 100;
     
     int(*a)[3][3] = arr;
     
     std::cout << *(*(*(a+1)+1)+1) << std::endl;
 }