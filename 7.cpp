//13的13次方的最后三位数是____253_______。

#include<stdio.h>
int main(){
	int num,i;
	num=13;
	i=0;
	while (i<13)
	{
		num=num*13;
		printf("%d\n",num);
		num = num%1000;
		i+=1;
	}
	printf("13^13=%d",num);
	return 0;
}
