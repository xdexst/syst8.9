#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v8.9: OK.\n");
	srand(time(0));

	int APREDELITEL,i,j,a[3][3],edenic[3][3];
	
	printf("Matrix:\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(j==i) {edenic[i][j]=1;}
			else {edenic[i][j]=0;}
			if(j>=i) {a[i][j]=1;}
			else {a[i][j]=0;}
			if(j==2){printf("%d | %d, %d, %d\n",a[i][j],edenic[i][0],edenic[i][1],edenic[i][2]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	APREDELITEL=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
	if(APREDELITEL==0) return 1;
	
	a[0][0]-=a[1][0]*1;
	a[0][1]-=a[1][1]*1;
	a[0][2]-=a[1][2]*1;
	edenic[0][0]-=edenic[1][0]*1;
	edenic[0][1]-=edenic[1][1]*1;
	edenic[0][2]-=edenic[1][2]*1;
	
	a[1][0]-=a[2][0]*1;
	a[1][1]-=a[2][1]*1;
	a[1][2]-=a[2][2]*1;
	edenic[1][0]-=edenic[2][0]*1;
	edenic[1][1]-=edenic[2][1]*1;
	edenic[1][2]-=edenic[2][2]*1;
	
	printf("\nAlternative matrix(Your matrix is second):\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			if(j==2){printf("%d | %d, %d, %d\n",a[i][j],edenic[i][0],edenic[i][1],edenic[i][2]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	return 0;
}
