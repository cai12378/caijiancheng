#include "cjc5.h"

int main(){
	int a[N],i;
	srand(time(0));
	for (i=0;i<N;i++)
		a[i] = rand() % 100;
printf ("初始数据为：");
for (i=0;i<N;i++)
	printf("%d",a[i]);
        printf("\n");
	Bubble1(a,N);
//Bubble2(a,N);
//Bubble3(a,N);
printf("冒泡排序后数据:");
	for (i=0;i<N;i++)
printf("%d",a[i]);
printf("\n");
InsertSort(a,N);
printf("插入排序后数据:");
	for (i=0;i<N;i++)
		printf("%d",a[i]);
                printf("\n");
		SelectSort(a,N);
		printf("选择排序后数据:");
		for (i=0;i<N;i++)
			printf("%d",a[i]);                                                                                                                        printf("/n");
		QuickSort(a,N);
		printf("快速排序后数据:");
		for (i=0;i<N;i++)
			printf("%d",a[i]);
		printf("\n");
		return 0;
}

