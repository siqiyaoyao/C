#include<stdio.h>
int main(){
unsigned int n;
unsigned int count=0 ;
while(scanf("%d",&n) != EOF){
	for(int i = 0; i <32;i++){
		if(((n&(1<<i))) == (1<<i)) count++;
	}
	printf("%d\n",count);
	count = 0;
}

}
