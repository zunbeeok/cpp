
// C언어에서 사용하는 경우.

// #include <iostream>

// int change_val(int *p){
//     *p = 3;

//     return 0;
// }

// int main(){
//     int number =5;

//     std::cout << number << std::endl;
//     change_val(&number);
//     std::cout << number << std::endl;
// }


// #include <iostream>

// int main(){
//     int a = 3;
//     int& another_a = a;
//     another_a = 5;
//     std::cout << "a : " << a << std::endl;
//     std::cout << "another_a : " << another_a << std::endl;

//     return 0;
// }




// c포인터는 변수라 수정이 가능하지만 레퍼런스는 수정이 되지 않는다.
#include <iostream>

int main(){
//     int a= 10;
//     int* p = &a;
//     std::cout << "p : "<< p << std::endl;
//     std::cout << "a : "<< a << std::endl;
//     std::cout << "&a : "<< &a << std::endl;
//     int b =3;
//     p= &b;
//     std::cout << "p : "<< p << std::endl;
//     std::cout << "&b : "<< &b << std::endl;


    
    int a =10;
    int &another_a = a;
    int b=3;
    another_a =b;//? => a = b;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
}
