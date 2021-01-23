#include <stdio.h>
int main(){
	char s[9];
	scanf("%s",s);
	if(s[0]==s[1]&&s[1]==s[2]){
		printf("Won");
	}else{
		printf("Lost");
	}
}