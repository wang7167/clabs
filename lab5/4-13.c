#include<stdio.h>

void reverse(char s[]){
   int c,j,i=0,k=0;
   while(s[k]!='\0'){
    k++;}
   j=k-1;
   for(i=0;i<j;i++,j--)
     {
     if(i<j)
    c=s[i];
    s[i]=s[j];
    s[j]=c;}
}
int main(){
    printf("输入一个字符串：");
	char *s;
    scanf("%s",*&s);  
	reverse(s);
    printf("%s",s);
	return 0 ;
}