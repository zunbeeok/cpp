#include<iostream>

int main(){
    // int a, b;
    // int& arr[2] = {a,b}; //에러가 발생 레퍼런스의 배열은 불법 이다
    // c++ 규정중 표준안 8.3.2/4를 보면 레퍼런스의 레퍼런스, 레퍼런스의 배열, 레퍼런스의 포인터는 존재할 수 없다.

    //배열의 레퍼런스는 불가능하지 않다.
    int arr[3] = {1,2,3};
    int(&ref)[3] =arr;

    ref[0]=2;
    ref[1]=3;
    ref[2]=1;

    std::cout<<arr[0]<<arr[1]<<arr[2]<<std::endl;
    return 0;
}
