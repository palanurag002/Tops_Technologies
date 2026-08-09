#include<stdio.h>
main(){
	int followerCount = 100;
	
	printf("Before: %d\n", followerCount);
	
	//pre-increment
	printf("Pre-Increment: %d\n", ++followerCount);
	printf("After Pre-Increment: %d\n", followerCount);
	
	//post-increment
	printf("post-Increment: %d\n", followerCount++);
	printf("After Post-Increment %d\n", followerCount);
}
