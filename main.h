#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//swap(int,int)
#define Swap(a,b) do{a^=b;b^=a;a^=b;}while(0)
//系统参数：数组元素个数、一行打印元素个数、每个元素的打印宽度等
int num_of_arr=10,num_in_row=10,width_of_each=5;
//打印数组~
void printarr(int *a, int n){
	int i=0;
	while(i<n){
		int j=i;
		for(;i<j+num_in_row;i++){
			int c=width_of_each-printf("%d",a[i]);
			while(c--)printf(" ");
		}
		printf("\n");
	}
}
//生成数组的样本数据~
void FillArray(int a[], int n){
	srand(time(NULL));
	printf("1)用指定范围的随机数填充数组\n2)键盘输入\n3)整个数组填同一个值\n4)用等差序列填充数组\n");
	char k;
	int f=1;
	while(f){
		k=getch();
		switch(k){
			case '1':
			//用指定范围的随机数填充数组
				f=0;
				printf("input:\n");
				int l,r;
				scanf("%d%d",&l,&r);
				while(--n+1)a[n]=rand()%(r-l+1)+l;
				break;
			case '2':
			//键盘输入
				f=0;
				printf("input:\n");
				while(--n+1)scanf("%d",a+n);
				break;
			case '3':
			//整个数组填同一个值
				f=0;
				printf("input:\n");
				int val;
				scanf("%d",&val);
				while(--n+1)a[n]=val;
				break;
			case '4':
			//用等差序列填充数组
				f=0;
				printf("input:\n");
				int a0,d;
				scanf("%d%d",&a0,&d);
				while(--n+1)a[n]=a0+n*d;
				break;
			default:
				break;
		}
	}
	
}
//配置系统参数：数组元素个数、一行打印元素个数、每个元素的打印宽度等~
void Config(){
	int n;
	printf("数组元素个数\n");
	scanf("%ud",&n);
	num_of_arr=n;
	printf("一行打印元素个数\n");
	scanf("%ud",&n);
	num_in_row=n;
	printf("每个元素的打印宽度\n");
	scanf("%ud",&n);
	width_of_each=n;
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
//在数组中pos下标处插入新元素~
void insert(int a[], int n, int pos, int val){
	num_of_arr++;
	for(;pos<n;pos++){
		int t=a[pos];
		a[pos]=val;
		val=t;
	}
	a[n]=val;
}
//删除指定下标的元素~
void Delete(int a[], int n, int id){
	for(;id<n-1;id++)a[id]=a[id+1];
	num_of_arr--;
}
//删除指定值的元素~
void DeleteVal(int a[], int n, int val){
	int i=0;
	for(;i<n;i++){
		if(a[i]==val){
			int id=i--;
			for(;id<n-1;id++)a[id]=a[id+1];
			n--;
		}
	}
	num_of_arr=n;
}
//删除s..t下标区间的元素~
void DeleteRange(int a[], int n, int s, int t){
	int i=0;
	for(;t+i<n-1;i++)a[s+i]=a[t+i];
	num_of_arr-=t-s+1;
}
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
//计算数组的方差~
float variance(int a[],int n){
	int s2=0,i=0;
	for(;i<n;i++)s2+=a[i]*a[i];
	float x=average(a,n);
	return (float)s2/n-x*x;
}
//计算数组的均方差~
float Standard_Deviation(int a[],int n){
	return sqrt(variance(a,n));
}
//在有序数组中插入新元素保持有序性~
void OrderInsert(int a[], int n, int val){
	num_of_arr++;
	int i=0;
	for(;i<n;i++){
		if(a[i]>val){
			int t=a[i];
			a[i]=val;
			val=t;
		}
	}
	a[n]=val;
}
//冒泡排序~
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
//选择排序~
void SelectSort(int a[],int n){
	int i=0,j;
	for(;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])min=i;
		}
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
}
//交换排序(快速排序?)
void ExchangeSort(int a[],int n){
	BubbleSort(a,n);
}
//二分查找  wrong
int BiSearch(int a[], int n, int val){
	BubbleSort(a,n);
	int l=0,mid,r=n-1;
	while(r>=l){
		mid=(l+r)/2;
		if(a[mid]==val)return mid;
		(a[mid]<val)?(l=mid+1):(r=mid-1);
		if(l==r&&r==n-1)return -1;
	}
	return -1;
}
/*左旋m位，即向左循环移位m次，左端移出进入右
端。 例如 int b[10]={0,1,2,3,4,5, 6,7,8,9}; 调用 LeftRotate(b,10,4)之后，b的元素为
{4，5，6，7，8，9，0，1，2，3} */
int LeftRotate(int a[], int n, int m){
	if(m==0)return m;
	m=(m>0)?(m%n):(m%n+n);
	int i=0,t[m];
	for(;i<m;i++)t[i]=a[i];
	for(;i<n;i++)a[i-m]=a[i];
	for(;i>=n-m;--i)a[i]=t[i-n+m];
	return m;
}
//右旋m位
int RightRotate(int a[], int n, int m){
	return LeftRotate(a,n,-m);
}
