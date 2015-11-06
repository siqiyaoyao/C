#include <stdio.h>
int main(){
	
	int a,b,c,d,e;
	int s,v;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s = 2*(a*c+a*b+b*c)+4*((a-2*e)*d+(c-2*e)*d)+4*((b-2*e)*d+(c-2*e)*d)+4*((a-2*e)*d+(b-2*e)*d);
	v = a*c*b-2*((a-2*e)*(c-2*e))*d-2*((a-2*e)*(b-2*e))*d-2*((b-2*e)*(c-2*e))*d;
	printf("%d\n%d\n",s,v );
	return 0;

}