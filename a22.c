#include<stdio.h>
#include<string.h>
int main(void) {
	int c,a,b,k,i;
	char ch[1000];
	while(scanf("%s",&ch)==1){
		a=0;
		b=strlen(ch)-1;
		k=0;
		do{
			if(ch[a++]!=ch[b--]){
				k=1;
				break;					
			}
		}while(a<b);
		if(k==0)
			printf("yes\n");
		else if(k==1)
			printf("no\n");
	}

    return 0;
}

