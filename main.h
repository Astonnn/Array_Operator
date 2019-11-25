#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//swap(int,int)
#define Swap(a,b) do{a^=b;b^=a;a^=b;}while(0)
//ϵͳ����������Ԫ�ظ�����һ�д�ӡԪ�ظ�����ÿ��Ԫ�صĴ�ӡ��ȵ�
int num_of_arr,num_in_row,width_of_each;
//��ӡ����~
void printarr(int *a, int n){
	int i=0;
	for(;i<n;i++)printf("%d\n",a[i]);
}
//�����������������~
void FillArray(int a[], int n){
	srand(time(NULL));
	while(--n+1)a[n]=rand();
}
//����ϵͳ����������Ԫ�ظ�����һ�д�ӡԪ�ظ�����ÿ��Ԫ�صĴ�ӡ��ȵ�
void Config(){
	
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
void insert(int a[], int n, int pos, int val);//��������pos�±괦������Ԫ��
void Delete(int a[], int n, int id); //ɾ��ָ���±��Ԫ��
void DeleteRange(int a[], int n, int s, int t);//ɾ��s..t�±������Ԫ��
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
void OrderInsert(int a[], int n, int val);//�����������в�����Ԫ�ر���������
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
void ExchangeSort(int a[],int n){}
//��ͨ����~
int Search(int a[], int n, int val){
	while(--n+1)if(a[n]==val)return n;
	return -1;
}
//���ֲ���~
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
/*����mλ��������ѭ����λm�Σ�����Ƴ�������
�ˡ� ���� int b[10]={0,1,2,3,4,5, 6,7,8,9}; ���� LeftRotate(b,10,4)֮��b��Ԫ��Ϊ
{4��5��6��7��8��9��0��1��2��3} */
int LeftRotate(int a[], int n, int m){
	m=(m>0)?(m%n):(m%n+n);
//	if(m<0)return RightRotate(a,n,-m);
	if(m==0)return m;
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
