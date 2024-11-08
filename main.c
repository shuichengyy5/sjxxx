//202410111303
//3331592296@qq.com
//余洋
#include<stdio.h>

int main(){
	int n;
	int i;
	double sum=1.0;
	
	printf("输入一个正整数:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum*=i;
	}
	
	printf("n的阶乘=%f\n",sum);
	
	return 0;
}
