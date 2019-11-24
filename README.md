# Array_Operator

## What it is?

Array_Operator is a Array Operating Application.

1 知识点：
1) 一维数组的定义和使用 2) 循环结构和分支结构 3) 函数的定义和函数的调用 4) 数组作为函数的参数
5) 局部变量和全局变量 6) 数组处理技术（排序，插入，删除，查找，统计，逆置）
***
2 数组运算器程序的分级菜单：
0.退出 
1.配置系统参数（注：修改程序中几个主要全局变量） 
2.生成样本数据 1） 用指定范围的随机数填充数组 2） 键盘输入 3） 整个数组填同一个值 4） 用等差序列填充数组（注：输入序列的起始值和每项的差值） 
3.显示数组 
4.删除 1） 删除指定下标的元素 2） 删除指定值的元素 3） 删除按指定下标区间的一组元素 
5.插入 1）按指定下标位置插入新元素 2）在有序数组中插入新元素
6.统计 1）求最大值 2）求最小值 3）求平均值 4）求方差和均方差 
7.查找 1） 普通查找 2） 二分查找 
8.判断 1）是否升序排列 2）是否降序排列 3）是否全部相等 
9.排列数组元素 1）排序 a.冒泡法 b. 选择法 c.交换法 2）逆置数组 3）左旋数组 4）右旋数组
***
3 数组运算器程序的函数命名示例：
`void printarr(int *a, int n); //打印数组
void FillArray(int a[], int n);//生成数组的样本数据
void Config();//配置系统参数：数组元素个数、一行打印元素个数、每个元素的打印宽度等
void Reverse(int a[], int n);//逆置数组
void insert(int a[], int n, int pos, int val);//在数组中pos下标处插入新元素
void Delete(int a[], int n, int id); //删除指定下标的元素
void DeleteRange(int a[], int n, int s, int t);//删除s..t下标区间的元素
int Search(int a[], int n, int val);//查找值为val的元素，找到返回其下标，找不到返回-1
int isAsc(int a[], int n);//判断数组是否升序排列
int isDesc(int a[], int n);//判断数组是否降序排列
int isEqual(int a[], int n);//判断数组是否全相等
int max(int a[],int n);//返回数组最大值的下标
int max(int a[],int n);//返回数组最小值的下标
float average(int a[],int n);//计算数组的平均值
void OrderInsert(int a[], int n, int val);//在有序数组中插入新元素保持有序性
void BubbleSort(int a[], int n);//冒泡排序
void SelectSort(int a[],int n);//选择排序
void ExchangeSort(int a[],int n);//交换排序
int Search(int a[], int n, int val);//普通查找
int BiSearch(int a[], int n, int val);//二分查找
int LeftRotate(int a[], int n, int m); /*左旋m位，即向左循环移位m次，左端移出进入右
端。 例如 int b[10]={0,1,2,3,4,5, 6,7,8,9}; 调用 LeftRotate(b,10,4)之后，b的元素为
{4，5，6，7，8，9，0，1，2，3} */
int RightRotate(int a[], int n, int m); //右旋m位`

## Build

```bash
make
```
