#include "main.h"
#define p printf
int main(){
	int a[]={1,2,3};
	FillArray(a,3);
	BubbleSort(a,3);
	printarr(a,3);
	p("%d ",max(a,3));
	p("%d ",isAsc(a,3));
//	LeftRotate(a,3,-5);
	printarr(a,3);
	p("%d ",BiSearch(a,3,1));
	p("%f ",average(a,3));
	return 0;
}
