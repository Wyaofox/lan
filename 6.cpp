//某人有四张3分的邮票和三张5分的邮票,
//用这些邮票中的一张或若干张可以得到___12___种不同的邮资

#include<stdio.h>
int main(){
	int num,count;
	num=0;
	count=0;
	for(int i=0;i<12;i+=3){
		for(int j=0;j<15;j+=5){
			num=i+j;
			printf("%d\n",num);
			count++;
			num=0;
		}
	}
	printf("共%d种",count);
	return 0;
}
