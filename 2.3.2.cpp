// 输入x、y,检测x+y是否溢出

#include<cstdio>
#include<iostream>
// #include<cstdio>

using namespace std;

// int占用2字节，16比特，数据范围为-32768~32767 [-2^15~2^15-1]

bool isOverflow(int x,int y){
    //判断xy是否同号，是则继续判断
    //判断x+y是否为负
    if((x^y>0)&&x+y<0)
    return true;
    else
    return false;
}

// 测试用例

// 2^15-1 , 2^15-1


int main(){
    int x,y;

    cin>>x>>y;

    return 0;
}