//레퍼런스가 존재하는 경우

#include <iostream>

int change_val(int &p){
    p =3;
    return 0;
}

int main(){
    int number =5;
    std::cout << number << std::endl;
    change_val(number);
    std::cout << number << std::endl;
}