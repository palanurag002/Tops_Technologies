#include<stdio.h>
main(){
	int likes, comments, shares;
	
	printf("Enter a likes: ");
	scanf("%d", &likes);
	
	printf("Enter a comments: ");
	scanf("%d", &comments);
	
	printf("Enter a shares: ");
	scanf("%d", &shares);
	
	if(likes >= 1000 || (comments > 200 && shares >= 50)){
		printf("Post Treniding on instagram");
	}
	else {
		printf("Post is not Treniding on instagram");
	}
}
