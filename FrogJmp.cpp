#include <iostream>

int solution(int X, int Y, int D) {
    int d = Y - X;

    if( !d ) return 0;

    if( D >= d) return 1;

    if( !(d % D) ) return d / D;

    return d / D + 1;
}


int main(){

  std::cout << "Test #1 (1,1,1) returned: " <<
    solution( 1,1,1 ) <<
    std::endl;

  std::cout << "Test #1 (1,1,1) returned: " <<
    solution( 1,3,1 ) <<
    std::endl;

  std::cout << "Test #1 (1,1,1) returned: " <<
    solution( 1,5,6 ) <<
    std::endl;
  
  return 0;

}
