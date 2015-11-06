#include <stdio.h>
int main(){
	int x[4];
	int y[4];
	int tempx,tempy;
	int res[4];

	scanf("%d%d%d%d%d%d%d%d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
	for(int i = 0; i <3;i++){
		tempx = x[i+1]-x[i];
		tempy = y[i+1]-y[i];
		res[i]=(-x[i])*tempy-tempx*(-y[i]);
		
	}
	tempx = x[0]-x[3];
	tempy = y[0]-y[3];
	res[3]=(-x[3])*tempy-tempx*(-y[3]);

	if(res[0]<0 && res[1]<0 && res[2] < 0 && res[3] <0){
		printf("%d\n",1 );
	}else{
		printf("%d\n",0 );
	}
	return 0;
}