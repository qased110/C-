#include<iostream>
using namespace std;

int main() {
	int const size = 5;
	int array[size]{0,1,2,3,4};
	int *p = array;

		cout << *p++ << endl;//后缀++的奇妙之处
		cout << *p << endl;
	system("pause");
	return 0;
}//1
 //2
 //请按任意键继续. . .
/*
int a[5]={1,2,3,4,5};
int *p = a;
*p++ 先取指针p指向的值（数组第一个元素1），再将指针p自增1；
cout << *p++; // 结果为 1
cout <<(*p++); // 1
(*p)++ 先去指针p指向的值（数组第一个元素1），再将该值自增1（数组第一个元素变为2
cout << (*p)++; // 1
cout <<((*p)++) //2
*++p 先将指针p自增1（此时指向数组第二个元素），* 操作再取出该值
cout << *++p; // 2
cout <<(*++p) //2
++*p 先取指针p指向的值（数组第一个元素1），再将该值自增1（数组第一个元素变为2）
cout <<++*p; // 2
cout <<(++*p) //2
*/