#include<stdio.h>
main(){
	
	int playlistRating[3][5]={
		{1, 2, 3, 4, 5},
		{3, 4, 5, 5, 4},
		{4, 5, 4, 5, 5}
	};
	
	int i;
	
	printf("Rating of second playlist:\n");
	
	for(i=0; i<5; i++){
		printf("%d", playlistRating[1][i]);
	}
}
