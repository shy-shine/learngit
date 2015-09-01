/*************************************************************************
    > File Name: zhiyinzi.c
    > Author: shy
    > Mail: bupt_shine@163.com 
    > Created Time: Mon 25 May 2015 04:50:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
//网上找的代码
void fenjie(int n){
	int i,j,k;
	for(i = 2;i<=n;i++){
		if(n%i == 0){
			j = n/i;
			if (j == 1){
				printf("%d\n",i);
				return;
			}
			else{
				printf("%d*",i);
				fenjie(j);
				break;
			}
		}
	}
//	printf("%d",n);
//	return;
}

//my code
void fenjie1(int n){
	int i;
	if(n < 1){
		printf("not a correct int");
		return 0;
	}
	if(n ==1){
		printf("1");
		return;
	}
	for(i=2;i<sqrt(n)+1;i++){
		if(n%i == 0){
			printf("%d*",i);
			fenjie(n/i);
			break;
		}
		else{
			printf("%d",n);
			return;
		}
	}
}
int main(int argc,char **argv){
	int n;
	printf("please input a number:");
	scanf("%d",&n);
	printf("%d = ",n);
	fenjie1(n);
	return 0;
}
