#include "main.h"
#define P printf
int arr[100];
void show_menu(){
	char k=0;
	int chosen=0;
	do{
		system("cls");
		switch((!chosen)?k:(chosen=0)){
			case '0':
		 	//退出
				return;
				break;
			case '1':
			//配置系统参数
				chosen=1;
				Config();
				break;
			case '2':
			//生成样本数据
				chosen=2;
				FillArray(arr,num_of_arr);
				break;
			case '3':
			//显示数组
				chosen=3;
				printarr(arr,num_of_arr);
				break;
			case '4':
			//删除
				chosen=4;
				printarr(arr,num_of_arr);
				break;
			case '5':
			//插入
				chosen=5;
				printarr(arr,num_of_arr);
				break;
			case '6':
			//插入
				P("1)求最大值\n2)求最小值\n3)求平均值\n4)求方差和均方差\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//求最大值
							chosen=6;
				 			P("%d\n",arr[max(arr,num_of_arr)]);
				 			break;
						case '2':
						//求最小值
							chosen=6;
				 			P("%d\n",arr[min(arr,num_of_arr)]);
				 			break;
						case '3':
						//求平均值
							chosen=6;
				 			P("%f\n",average(arr,num_of_arr));
				 			break;
						case '4':
						//求方差和均方差
							chosen=6;
				 			P("%f%f\n",variance(arr,num_of_arr),Standard_Deviation(arr,num_of_arr));
				 			break;
				 		default:
				 			break;
					}
				}
				
				break;
			case '7':
			//查找
				P("1)普通查找\n2)二分查找\n");
				while(!chosen){
					k=getch();
					int val;
					switch(k){
						case '1':
						//普通查找
							chosen=7;
							P("?\n");
							scanf("%d",&val);
				 			P("%d\n",Search(arr,num_of_arr,val));
				 			break;
						case '2':
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
			case '8':
			//判断
				P("1)是否升序排列\n2)是否降序排列\n3)是否全部相等\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//是否升序排列
							chosen=8;
				 			P("%d",isAsc(arr,num_of_arr));
				 			break;
						case '2':
						//是否降序排列
							chosen=8;
				 			P("%d\n",isDesc(arr,num_of_arr));
				 			break;
						case '3':
						//是否全部相等
							chosen=8;
				 			P("%d\n",isEqual(arr,num_of_arr));
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			default:
				P("0.退出\n1.配置系统参数\n2.生成样本数据\n3.显示数组\n4.删除\n5.插入\n6.统计\n7.查找\n8.判断\n");
				break;
		}
	}while(k=getch());
}
int main(){
//int *arr=(int*)malloc(100*sizeof(int));
	show_menu();
	return 0;
}
