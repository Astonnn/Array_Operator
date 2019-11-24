#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//系统参数：数组元素个数、一行打印元素个数、每个元素的打印宽度等
int num_of_arr,num_in_row,width_of_each;
//打印数组~
void printarr(int *a, int n){
	int i=0;
	for(;i<n;i++)printf("%d\n",a[i]);
}
//生成数组的样本数据~
void FillArray(int a[], int n){
	srand(time(NULL));
	while(--n+1)a[n]=rand();
}
//配置系统参数：数组元素个数、一行打印元素个数、每个元素的打印宽度等
void Config(){
	
}
//逆置数组~
void Reverse(int a[], int n){
	int m=n/2,i=0;
	for(;i<m;i++){
		int t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
}
void insert(int a[], int n, int pos, int val);//在数组中pos下标处插入新元素
void Delete(int a[], int n, int id); //删除指定下标的元素
void DeleteRange(int a[], int n, int s, int t);//删除s..t下标区间的元素
//查找值为val的元素，找到返回其下标，找不到返回-1~
int Search(int a[], int n, int val){
	while(--n+1)if(a[n]==val)return n;
	return -1;
}
//判断数组是否升序排列~
int isAsc(int a[], int n){
	while(--n)if(a[n-1]>a[n])return 0;
	return 1;
}
//判断数组是否降序排列~
int isDesc(int a[], int n){
	while(--n)if(a[n-1]<a[n])return 0;
	return 1;
}
//判断数组是否全相等~
int isEqual(int a[], int n){
	while(--n)if(a[n-1]!=a[n])return 0;
	return 1;
}
//返回数组最大值的下标~
int max(int a[],int n){
	int max=0;
	while(--n)if(a[n]>a[max])max=n;
	return max;
}
//返回数组最小值的下标~
int min(int a[],int n){
	int min=0;
	while(--n)if(a[n]<a[min])min=n;
	return min;
}
//计算数组的平均值~
float average(int a[],int n){
	int s=0,i=0;
	for(;i<n;i++)s+=a[i];
	return (float)s/n;
}
void OrderInsert(int a[], int n, int val);//在有序数组中插入新元素保持有序性
//冒泡排序
void BubbleSort(int a[], int n){
	int i=0,j;
	for(;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				a[j]=a[j-1]+a[j]-(a[j-1]=a[j]);
			}
		}
	}
}
void SelectSort(int a[],int n);//选择排序
void ExchangeSort(int a[],int n);//交换排序
int Search(int a[], int n, int val);//普通查找
//二分查找
int BiSearch(int a[], int n, int val){
	int l=0,mid,r=n-1;
	while(r>=l){
		if(l==r&&r==n-1)return -1;
		mid=(l+r)/2;
		if(a[mid]==val)return mid;
		(a[mid]<val)?(l=mid+1):(r=mid-1);
	}
	return -1;
}
/*左旋m位，即向左循环移位m次，左端移出进入右
端。 例如 int b[10]={0,1,2,3,4,5, 6,7,8,9}; 调用 LeftRotate(b,10,4)之后，b的元素为
{4，5，6，7，8，9，0，1，2，3} */
int LeftRotate(int a[], int n, int m){
	m%=n;
//	if(m<0)return RightRotate(a,n,-m);
	int i=0,t[m];
	for(;i<m;i++)t[i]=a[i];
	for(;i<n;i++)a[i-m]=a[i];
	for(;i>=n-m;--i)a[i]=t[i-n+m];
	return 1;
}
int RightRotate(int a[], int n, int m); //右旋m位
