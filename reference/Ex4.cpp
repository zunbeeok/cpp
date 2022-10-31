//상수에 대한 참조
#include <iostream>


// 아래코드는 컴파일시 에러가 발생한다.
// 상수값 자체는 리터럴 이기때문
// c언어에서 상수가 어떤것인지 리터럴이 무엇인지 공부하기 2022.10.31
// int main(){
//     int &ref = 4;
//     std::cout << ref << std::endl;
// }

int main(){
    const int &ref = 4;
    std::cout << ref << std::endl;
}