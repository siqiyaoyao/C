#include<stdio.h>
int main(){
unsigned int n;
int count=1,max = 0;
int flag=0; 
	while(scanf("%d",&n) != EOF){
		for(int i = 0; i < 32; i++){
			
			if(((n&(1<<i))) == (1<<i)){
				if(flag == 1) count++;
				flag = 1;
			} else{
				flag = 0;
				if(count > max ) max = count;
              			 count = 1;
			}
		
		}		

		printf("%d\n",max);
		max = 0;
	}
}
