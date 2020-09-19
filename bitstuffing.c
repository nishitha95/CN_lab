#include <stdio.h>
#include <string.h>
int main() {
char a[100];
char flag[] = {'0','1','1','1','1','1','1','0','\0'};
int count = 0;
printf("Enter the Bits:\n");
scanf("%s",a);
printf("After Bits Stuffing:\n");
printf("%s",flag);
for(int i=0;i<strlen(a);i++){
    if(a[i]=='1'){
        count++;
    }
    else{
        count=0;
    }
    printf("%c",a[i]);
    if(count==5){
        printf("0");
        count=0;
    }
}
printf("%s",flag);
printf("\n");
return 0;
}
