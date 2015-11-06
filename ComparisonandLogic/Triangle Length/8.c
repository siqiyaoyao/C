#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a > 0 && b > 0 && c > 0){
		if(a+b > c && a+c > b && b+c >a){
			printf("%d\n",1);
		}else{
			printf("%d\n",0);
		}
	}else{
		printf("%d\n", 0);
	}

	
	
	return 0;

}