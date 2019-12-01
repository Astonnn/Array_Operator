#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//swap(int,int)
#define Swap(a,b) do{a^=b;b^=a;a^=b;}while(0)
//ϵͳ����������Ԫ�ظ�����һ�д�ӡԪ�ظ�����ÿ��Ԫ�صĴ�ӡ��ȵ�
int num_of_arr=10,num_in_row=10,width_of_each=5;
//��ӡ����~
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
//�����������������~
void FillArray(int a[], int n){
	srand(time(NULL));
	printf("1)��ָ����Χ��������������\n2)��������\n3)����������ͬһ��ֵ\n4)�õȲ������������\n");
	char k;
	int f=1;
	while(f){
		k=getch();
		switch(k){
			case '1':
			//��ָ����Χ��������������
				f=0;
				printf("input:\n");
				int l,r;
				scanf("%d%d",&l,&r);
				while(--n+1)a[n]=rand()%(r-l+1)+l;
				break;
			case '2':
			//��������
				f=0;
				printf("input:\n");
				while(--n+1)scanf("%d",a+n);
				break;
			case '3':
			//����������ͬһ��ֵ
				f=0;
				printf("input:\n");
				int val;
				scanf("%d",&val);
				while(--n+1)a[n]=val;
				break;
			case '4':
			//�õȲ������������
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
//����ϵͳ����������Ԫ�ظ�����һ�д�ӡԪ�ظ�����ÿ��Ԫ�صĴ�ӡ��ȵ�~
void Config(){
	int n;
	printf("����Ԫ�ظ���\n");
	scanf("%ud",&n);
	num_of_arr=n;
	printf("һ�д�ӡԪ�ظ���\n");
	scanf("%ud",&n);
	num_in_row=n;
	printf("ÿ��Ԫ�صĴ�ӡ���\n");
	scanf("%ud",&n);
	width_of_each=n;
}
//��������~
void Reverse(int a[], int n){
	int m=n/2,i=0;
	for(;i<m;i++){
		int t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
}
//��������pos�±괦������Ԫ��~
void insert(int a[], int n, int pos, int val){
	num_of_arr++;
	for(;pos<n;pos++){
		int t=a[pos];
		a[pos]=val;
		val=t;
	}
	a[n]=val;
}
//ɾ��ָ���±��Ԫ��~
void Delete(int a[], int n, int id){
	for(;id<n-1;id++)a[id]=a[id+1];
	num_of_arr--;
}
//ɾ��ָ��ֵ��Ԫ��~
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
//ɾ��s..t�±������Ԫ��~
void DeleteRange(int a[], int n, int s, int t){
	int i=0;
	for(;t+i<n-1;i++)a[s+i]=a[t+i];
	num_of_arr-=t-s+1;
}
//����ֵΪval��Ԫ�أ��ҵ��������±꣬�Ҳ�������-1~
int Search(int a[], int n, int val){
	while(--n+1)if(a[n]==val)return n;
	return -1;
}
//�ж������Ƿ���������~
int isAsc(int a[], int n){
	while(--n)if(a[n-1]>a[n])return 0;
	return 1;
}
//�ж������Ƿ�������~
int isDesc(int a[], int n){
	while(--n)if(a[n-1]<a[n])return 0;
	return 1;
}
//�ж������Ƿ�ȫ���~
int isEqual(int a[], int n){
	while(--n)if(a[n-1]!=a[n])return 0;
	return 1;
}
//�����������ֵ���±�~
int max(int a[],int n){
	int max=0;
	while(--n)if(a[n]>a[max])max=n;
	return max;
}
//����������Сֵ���±�~
int min(int a[],int n){
	int min=0;
	while(--n)if(a[n]<a[min])min=n;
	return min;
}
//���������ƽ��ֵ~
float average(int a[],int n){
	int s=0,i=0;
	for(;i<n;i++)s+=a[i];
	return (float)s/n;
}
//��������ķ���~
float variance(int a[],int n){
	int s2=0,i=0;
	for(;i<n;i++)s2+=a[i]*a[i];
	float x=average(a,n);
	return (float)s2/n-x*x;
}
//��������ľ�����~
float Standard_Deviation(int a[],int n){
	return sqrt(variance(a,n));
}
//�����������в�����Ԫ�ر���������~
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
//ð������~
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
//ѡ������~
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
//��������(��������?)
void ExchangeSort(int a[],int n){
	BubbleSort(a,n);
}
//���ֲ���  wrong
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
/*����mλ��������ѭ����λm�Σ�����Ƴ�������
�ˡ� ���� int b[10]={0,1,2,3,4,5, 6,7,8,9}; ���� LeftRotate(b,10,4)֮��b��Ԫ��Ϊ
{4��5��6��7��8��9��0��1��2��3} */
int LeftRotate(int a[], int n, int m){
	if(m==0)return m;
	m=(m>0)?(m%n):(m%n+n);
	int i=0,t[m];
	for(;i<m;i++)t[i]=a[i];
	for(;i<n;i++)a[i-m]=a[i];
	for(;i>=n-m;--i)a[i]=t[i-n+m];
	return m;
}
//����mλ
int RightRotate(int a[], int n, int m){
	return LeftRotate(a,n,-m);
}
