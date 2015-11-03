#include<stdio.h>
int main(){
long long int n;
while(scanf("%lld",&n)!=EOF){
	int count = 0;
	int flag = 0;
	int max = 0;
	for(int i =0; i < 64; i++){
		if((n & ((long long int)1<<i))){
		//	if(flag == 1){
				count++;
		//	}
		//	flag = 1;
	//	}else{
	//		flag = 0;
	//		if(count > max) max = count;
	//		count = 1;
		}
	}
	printf("%d\n",count);
} 

}
