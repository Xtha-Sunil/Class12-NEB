#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,count=0;
    printf("Enter a string:\n");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if (str[i]=='a' || str[i]=='A' || 
            str[i]=='e' || str[i]=='E' || 
            str[i]=='i' || str[i]=='I' || 
            str[i]=='o' || str[i]=='O' || 
            str[i]=='u' || str[i]=='U'){
                count++;
            }
    }

    printf("Total vowels count: %d\n",count);
    return 0;

}
