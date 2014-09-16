/******************/
/*  バブルソート  */
/******************/
#include <stdio.h>
#define  MAX  10
void  main( )
{
	int  data[MAX]={ 80,5,36,23,12,100,45,9,1,78 };
	int  n,i,w;

	printf("\n☆バブルソート☆\n");
	printf("\nソート前\n");
	showData();

	printf("\n\n途中経過\n");
	for( n=MAX; n>1; n-- )              // 未整列データ数
	{
		for( i=0; i<n-1; i++ )
		{
			if ( data[i]>data[i+1] )    // 次のデータが小さい
			{
				//--入れ替え--
				w=data[i];
				data[i]=data[i+1];
				data[i+1]=w;
			}
		}
		showData();
	}

	printf("\nソート後\n");
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

