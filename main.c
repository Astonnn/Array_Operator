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
		 	//�˳�
				exit(0);
				break;
			case '1':
			//����ϵͳ����~
				chosen=1;
				Config();
				break;
			case '2':
			//������������~
				chosen=2;
				FillArray(arr,num_of_arr);
				break;
			case '3':
			//��ʾ����~
				chosen=3;
				printarr(arr,num_of_arr);
				break;
			case '4':
			//ɾ��~
				system("cls");
				P("1)ɾ��ָ���±��Ԫ��\n2)ɾ��ָ��ֵ��Ԫ��\n3)ɾ����ָ���±������һ��Ԫ��\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//ɾ��ָ���±��Ԫ��
							chosen=4;
				 			P("?\n");
				 			int id;
				 			scanf("%d",&id);
				 			Delete(arr,num_of_arr,id);
				 			break;
						case '2':
						//ɾ��ָ��ֵ��Ԫ��
							chosen=4;
				 			P("?\n");
				 			int val;
				 			scanf("%d",&val);
				 			DeleteVal(arr,num_of_arr,val);
				 			break;
						case '3':
						//ɾ����ָ���±������һ��Ԫ��
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
			//����~
				system("cls");
				P("1)��ָ���±�λ�ò�����Ԫ��\n2)�����������в�����Ԫ��\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//��ָ���±�λ�ò�����Ԫ��
							chosen=5;
				 			P("?\n");
				 			int pos,val;
				 			scanf("%d%d",&pos,&val);
				 			insert(arr,num_of_arr,pos,val);
				 			break;
						case '2':
						//�����������в�����Ԫ��
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
			//ͳ��~
				system("cls");
				P("1)�����ֵ\n2)����Сֵ\n3)��ƽ��ֵ\n4)�󷽲�;�����\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//�����ֵ
							chosen=6;
				 			P("%d\n",arr[max(arr,num_of_arr)]);
				 			break;
						case '2':
						//����Сֵ
							chosen=6;
				 			P("%d\n",arr[min(arr,num_of_arr)]);
				 			break;
						case '3':
						//��ƽ��ֵ
							chosen=6;
				 			P("%f\n",average(arr,num_of_arr));
				 			break;
						case '4':
						//�󷽲�;�����
							chosen=6;
				 			P("%f%f\n",variance(arr,num_of_arr),Standard_Deviation(arr,num_of_arr));
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			case '7':
			//����~
				system("cls");
				P("1)��ͨ����\n2)���ֲ���\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//��ͨ����
							chosen=7;
							P("?\n");
							int val;
							scanf("%d",&val);
				 			P("%d\n",Search(arr,num_of_arr,val));
				 			break;
						case '2':
						//���ֲ���
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
			//�ж�~
				system("cls");
				P("1)�Ƿ���������\n2)�Ƿ�������\n3)�Ƿ�ȫ�����\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//�Ƿ���������
							chosen=8;
				 			P("%d",isAsc(arr,num_of_arr));
				 			break;
						case '2':
						//�Ƿ�������
							chosen=8;
				 			P("%d\n",isDesc(arr,num_of_arr));
				 			break;
						case '3':
						//�Ƿ�ȫ�����
							chosen=8;
				 			P("%d\n",isEqual(arr,num_of_arr));
				 			break;
				 		default:
				 			break;
					}
				}
				break;
			case '9':
			//��������Ԫ��
				system("cls");
				P("1)���� a.ð�ݷ� b. ѡ�� c.������\n2)��������\n3)��������\n4)��������\n");
				while(!chosen){
					k=getch();
					switch(k){
						case '1':
						//����
							chosen=9;
							P("?\n");
							char t;
//							t=getch();
							scanf("%c",&t);
				 			switch(t){
				 				case 'a'://ð�ݷ�
				 					BubbleSort(arr,num_of_arr);
				 					break;
				 				case 'b'://ѡ��
				 					SelectSort(arr,num_of_arr);
				 					break;
				 				case 'c'://������
				 					ExchangeSort(arr,num_of_arr);
				 					break;
				 				default:
				 					break;
					 		}
				 			break;
						case '2':
						//��������
							chosen=9;
				 			Reverse(arr,num_of_arr);
				 			break;
						case '3':
						//��������
							chosen=9;
							P("?\n");
							int m;
							scanf("%d",&m);
				 			LeftRotate(arr,num_of_arr,m);
				 			break;
						case '4':
						//��������
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
				P("0.�˳�\n1.����ϵͳ����\n2.������������\n3.��ʾ����\n4.ɾ��\n5.����\n6.ͳ��\n7.����\n8.�ж�\n9.��������Ԫ��\n");
				break;
		}
	}while(k=getch());
}
int main(){
//int *arr=(int*)malloc(100*sizeof(int));
	show_menu();
	return 0;
}
