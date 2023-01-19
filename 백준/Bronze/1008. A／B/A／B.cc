#include <iostream>
int main(){
    double a=0;
    double b=0;
    std::cin>>a>>b;
    std::cout.precision(9);
    std::cout<<std::fixed;
    std::cout<<a/b;
}