#include "main.h"
#define P printf
int arr[100];
void show_menu(){
	char k=0;
	int chosen=0;
	do{
		system("cls");
		switch((!chosen)?k-'0':(chosen=0)-1){
			case 0:
		 	//退出
				return;
				break;
			case 1:
			//配置系统参数
				chosen=1;
				Config();
				break;
			case 2:
			//生成样本数据
				chosen=2;
				FillArray(arr,num_of_arr);
				break;
			case 3:
			//显示数组
				chosen=3;
				printarr(arr,num_of_arr);
				break;
			case 7:
			//查找
				P("1)普通查找\n2)二分查找\n");
				while(!chosen){
					k=getch();
					int val;
					switch(k-'0'){
						case 1:
						//普通查找
							chosen=7;
							P("?\n");
							scanf("%d",&val);
				 			P("%d",Search(arr,num_of_arr,val));
				 			break;
						case 2:
						//二分查找
							chosen=7;
							P("?\n");
							scanf("%d",&val);
				 			P("%d\n",BiSearch(arr,num_of_arr,val));
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			default:
				P("0.退出\n1.配置系统参数\n2.生成样本数据\n3.显示数组\n4.删除\n5.插入\n6.统计\n7.查找\n");
				break;
		}
	}while(k=getch());
}
int main(){
//int *arr=(int*)malloc(100*sizeof(int));
	show_menu();
	return 0;
}
