//ĳ��������3�ֵ���Ʊ������5�ֵ���Ʊ,
//����Щ��Ʊ�е�һ�Ż������ſ��Եõ�___12___�ֲ�ͬ������

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
	printf("��%d��",count);
	return 0;
}
