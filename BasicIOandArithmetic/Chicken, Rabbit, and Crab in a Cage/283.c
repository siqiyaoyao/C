#include <stdio.h>
int main(){
	int s,f,t;
	int c,r,p;
	scanf("%d%d%d",&s,&f,&t);
	r = (f-8*s+6*t)/2;
	c = t-r;
	p = s - c -r;
	if(r>=0 && c >= 0 && p >=0){
		printf("%d\n%d\n%d\n",c,r,p );
	}

	

	return 0;
}