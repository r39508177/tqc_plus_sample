//�D��: ���лP��ƪ����Y�A�H��J���Ū����ơA
//�M���X�}�C���̤j�Ȧb��B

/* ��X���G���˥��p�U�ҥܡG
 
 �п�Jarr[0]������: 100
 �п�Jarr[1]������: 200
 �п�Jarr[2]������: 300
 �п�Jarr[3]������: 400
 �п�Jarr[4]������: 500
 
 �}�C�������Ȥ��O�p�U:
 arr[0]=100
 arr[1]=200
 arr[2]=300
 arr[3]=400
 arr[4]=500
 
 ���}�C���̤j�Ȭ�500 
 */

/* �Y�U�@�{������ɻP�W�z����X���G�����ɡA�Х[�H�󥿤� */

#include <stdio.h>
#include <stdlib.h>

int Max(int *, int n);

int main ( ) 
{
     	int arr[5];
	int maximum, i;
	
 	for (i=0; i<5; i++) {
		  printf("�п�Jarr[%d]������: ", i);
		  scanf("%d", &arr[i]);
	}
	
	printf("\n�}�C�������Ȥ��O�p�U:\n");
	for (i=0; i<5; i++) {
		  printf("arr[%d]=%d\n", i, arr[i]);
	}
 	
	maximum=Max(arr, 5);
 	printf("\n���}�C���̤j�Ȭ�%d\n", maximum);
	
	system("PAUSE");
	return 0;
}

int Max(int *p, int n)
{
    	int i, maxi_value=*p;//�N�Ĥ@�ӭȥ����@�̤j���ȼg�J
    	for (i=1; i<n; i++) {//�]��arr[0]�w�g�g�i�h�L�F�A�ҥH�����qarr[1]�}�l���
			                 //�M��P�_�A�}�C�j�p�����ܡA�Ȼݤ����4�Aindex��0~4
		 if (maxi_value < *(p+i)) {//�p�G�j��̤j�ȡA�~��g
			maxi_value=*(p+i);
		 }
 	}
	return maxi_value;
}