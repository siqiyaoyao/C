#include<stdio.h>
int main(){
int a,b;
char c[2][2]={"0"};
unsigned int n[1024];
scanf("%d%d",&a,&b);
scanf("%s%s",&c[0],&c[1]);
int sum = a*b/32;
	if(a*b%32) sum++;
int count = 0;
	while(count < sum){
        scanf("%u",&n[count]);
	for(int i=31; i >= 0; i--){
		if(n[count]&((unsigned int)1 << i)){
			if((32-i+count*32)>a*b){
			count=sum;
			 break;
			}else	printf("%s",c[0]);
			if((count*32+32-i)%a == 0) printf("\n");
		}else{
			if((32-i+count*32)>a*b){	
			count=sum;
			 break;
			}else	printf("%s",c[1]);
			if((count*32+32-i)%a == 0) printf("\n");
	
		}	


	}
	count++;

	}

}
