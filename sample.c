/******************/
/*  �o�u���\�[�g  */
/******************/
#include <stdio.h>
#define  MAX  10
void  main( void )
{
	int  data[MAX]={ 80,5,36,23,12,100,45,9,1,78 };
	int  n,i,w;
	int  sFlag;

	printf("\n���o�u���\�[�g��\n");
	printf("\n�\�[�g�O\n");
	showData();

	printf("\n\n�r���o��\n");
	for( n=MAX; n>1; n-- )              // ������f�[�^��
	{
		sFlag = 0;
		for( i=0; i<n-1; i++ )
		{
			if ( data[i]>data[i+1] )    // ���̃f�[�^��������
			{
				//--����ւ�--
				w=data[i];
				data[i]=data[i+1];
				data[i+1]=w;
				sFlag += 1;				// ����ւ�����������
			}
		}
		showData();
		if( sFlag == 0 )				// ����ւ������B�\�[�g�����B
		{
			break;
		}
	}

	printf("\n�\�[�g��\n");
	showData();
	fflush(stdout);
}
void showData( void )
{
	for( i=0; i<MAX; i++ )
	{
		printf("%d ",data[i]);
	}
	printf("\n");
}

