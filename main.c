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
		 	//�˳�
				return;
				break;
			case 1:
			//����ϵͳ����
				chosen=1;
				Config();
				break;
			case 2:
			//������������
				chosen=2;
				FillArray(arr,num_of_arr);
				break;
			case 3:
			//��ʾ����
				chosen=3;
				printarr(arr,num_of_arr);
				break;
			case 7:
			//����
				P("1)��ͨ����\n2)���ֲ���\n");
				while(!chosen){
					k=getch();
					int val;
					switch(k-'0'){
						case 1:
						//��ͨ����
							chosen=7;
							P("?\n");
							scanf("%d",&val);
				 			P("%d",Search(arr,num_of_arr,val));
				 			break;
						case 2:
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
			default:
				P("0.�˳�\n1.����ϵͳ����\n2.������������\n3.��ʾ����\n4.ɾ��\n5.����\n6.ͳ��\n7.����\n");
				break;
		}
	}while(k=getch());
}
int main(){
//int *arr=(int*)malloc(100*sizeof(int));
	show_menu();
	return 0;
}
