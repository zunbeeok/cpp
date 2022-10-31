//레퍼런스가 존재하는 경우
// 레퍼런스는 함수에서 인자값으로 호출시에 메모리에 존재한다.

#include <iostream>

int change_val(int &p){ // int &p = number .
    p =3;
    return 0;
}

int main(){
    int number =5;
    std::cout << number << std::endl;
    change_val(number);
    std::cout << number << std::endl;
}