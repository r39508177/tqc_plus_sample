#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int arr[2][3];
	 int i, j;
 	
	for(i=0; i<2; i++) {
		for (j=0; j<3; j++) {
		      printf("�п�J�}�Carr[%d][%d]������:", i, j);
		      scanf("%d", &arr[i][j]);
		}
	}
	
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
		      printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
		}
 	}
	
	//�t�@�ت��ܤ�k
	printf("\n�t�@�ت��ܤ�k\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, *(arr[i]+j));
			//�q����(pointer)�����X��(value)
		}
	}
		
	//�ĤT�ت��ܤ�k
	printf("\n�ĤT�ت��ܤ�k\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, *(*(arr+i)+j));//�n���X�Ȫ����Эn�A���n
		}
	}
	
	system("PAUSE");
	return 0;
}