#include "pch.h"
#include <iostream>

using namespace std;
/*函数的特性*/
// 函数参数默认值
void fun(int i, int j = 5, int k = 10);
// void fun(int i, int j = 5, int k); //这个是错误的，参数的默认值必须要写在参数表的最右端


/*函数重载*/
// 前提：1、在相同作用域内，2、同一函数名的定义的多个函数，3、参数个数和参数类型不同
// int getMax(int x = 5, int y = 6, int z = 7)
// {
// 	// TODO
// };
//
// double getMax(double x, double y)
// {
// 	// TODO
// };
// 实际的使用和编译过程中，如何区分两者的类型
// 同名情况下，编译后，会产生新的函数名是以名称+类型的方式生成区分，如：getMax_int_int_int；getMax_double_double
// 编译之后计算机会自动识别，并根据传入的实参类型和实参个数，调用相应的函数
// 好处：如求取多种最大值时，不需要多次命名，只需要重载同样的函数即可
// void re_Test(int x = 5, int y = 6, int z = 7);
// void re_Test(double x, double y);

/*内联函数*/
// inline int max(int a, int b, int c)
// {
// 	//  TODO
// 	// 注：1、逻辑必须要简单，并且调用频繁，不能包括for循环等复杂逻辑的逻辑结构，2、递归不能成为内联函数
// };

inline void re_Test(int x = 5, int y = 6, int z = 7);
inline void re_Test(double x, double y);


int main()
{
	// 默认值覆盖
	// fun(20, 30, 40);


	// 函数重载
	// re_Test(5.6, 99.99);
	// re_Test(1, 2);


	// 内联函数调用
	// int i = 10, j = 20, k = 30, m;
	//
	// m = max(i, j, k);
	//
	// cout << "max=" << m << endl;
	re_Test(5.6, 99.99);
	re_Test(1, 2);

	return 0;
}

/*函数默认值覆盖输出*/
// void fun(int i, int j, int k)
// {
// 	cout << i << "," << j << "," << k << endl;
// };

/*函数重载输出*/
// void re_Test(int x, int y, int z)
// {
// 	cout << x << "," << y << "," << z << endl;
// };
//
// void re_Test(double x, double y)
// {
// 	cout << x << "," << y << endl;
// };

/*内联输出*/
void re_Test(int x, int y, int z)
{
	cout << x << "," << y << "," << z << endl;
};

void re_Test(double x, double y)
{
	cout << x << "," << y << endl;
};
