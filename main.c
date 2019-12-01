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
				exit(0);
				break;
			case '1':
			//配置系统参数~
				chosen=1;
				Config();
				break;
			case '2':
			//生成样本数据~
				chosen=2;
				FillArray(arr,num_of_arr);
				break;
			case '3':
			//显示数组~
				chosen=3;
				printarr(arr,num_of_arr);
				break;
			case '4':
			//删除~
				system("cls");
				P("1)删除指定下标的元素\n2)删除指定值的元素\n3)删除按指定下标区间的一组元素\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//删除指定下标的元素
							chosen=4;
				 			P("?\n");
				 			int id;
				 			scanf("%d",&id);
				 			Delete(arr,num_of_arr,id);
				 			break;
						case '2':
						//删除指定值的元素
							chosen=4;
				 			P("?\n");
				 			int val;
				 			scanf("%d",&val);
				 			DeleteVal(arr,num_of_arr,val);
				 			break;
						case '3':
						//删除按指定下标区间的一组元素
							chosen=4;
				 			P("?\n");
				 			int s,t;
				 			scanf("%d%d",&s,&t);
				 			DeleteRange(arr,num_of_arr,s,t);
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			case '5':
			//插入~
				system("cls");
				P("1)按指定下标位置插入新元素\n2)在有序数组中插入新元素\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//按指定下标位置插入新元素
							chosen=5;
				 			P("?\n");
				 			int pos,val;
				 			scanf("%d%d",&pos,&val);
				 			insert(arr,num_of_arr,pos,val);
				 			break;
						case '2':
						//在有序数组中插入新元素
							chosen=5;
				 			P("?\n");
				 			scanf("%d",&val);
				 			OrderInsert(arr,num_of_arr,val);
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			case '6':
			//统计~
				system("cls");
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
			//查找~
				system("cls");
				P("1)普通查找\n2)二分查找\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//普通查找
							chosen=7;
							P("?\n");
							int val;
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
			//判断~
				system("cls");
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
			case '9':
			//排列数组元素
				system("cls");
				P("1)排序 a.冒泡法 b. 选择法 c.交换法\n2)逆置数组\n3)左旋数组\n4)右旋数组\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//排序
							chosen=9;
							P("?\n");
							char t;
//							t=getch();
							scanf("%c",&t);
				 			switch(t){
				 				case 'a'://冒泡法
				 					BubbleSort(arr,num_of_arr);
				 					break;
				 				case 'b'://选择法
				 					SelectSort(arr,num_of_arr);
				 					break;
				 				case 'c'://交换法
				 					ExchangeSort(arr,num_of_arr);
				 					break;
				 				default:
				 					break;
					 		}
				 			break;
						case '2':
						//逆置数组
							chosen=9;
				 			Reverse(arr,num_of_arr);
				 			break;
						case '3':
						//左旋数组
							chosen=9;
							P("?\n");
							int m;
							scanf("%d",&m);
				 			LeftRotate(arr,num_of_arr,m);
				 			break;
						case '4':
						//右旋数组
							chosen=9;
							P("?\n");
							scanf("%d",&m);
				 			RightRotate(arr,num_of_arr,m);
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			default:
				P("0.退出\n1.配置系统参数\n2.生成样本数据\n3.显示数组\n4.删除\n5.插入\n6.统计\n7.查找\n8.判断\n9.排列数组元素\n");
				break;
		}
	}while(k=getch());
}
int main(){
//int *arr=(int*)malloc(100*sizeof(int));
	show_menu();
	return 0;
}
