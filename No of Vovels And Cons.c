#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char check;
    int k, j, n;
    int a=0, e=0, i=0, o=0, u=0, cons=0;
    printf("Hello, World!\n");
    scanf("%s",str);
    //for(k=0; k<n; k++){
      //  scanf("%c",&s[i]);
    //}
    n=strlen(str);
    for(j=0; j<n; j++){
        check=str[j];
        switch(check){
            case 'a' : a++; break;
            case 'e' : e++; break;
            case 'i' : i++; break;
            case 'o' : o++; break;
            case 'u' : u++; break;
            case 'A' : a++; break;
            case 'E' : e++; break;
            case 'I' : i++; break;
            case 'O' : o++; break;
            case 'U' : u++; break;
            default  : cons++; break;
        }
    }
    printf("The Vovels and Consonents counts are----------\n");
    printf("A = %d\nE = %d\nI = %d\nO= %d\nU = %d\nConsonents = %d\n",a,e,i,o,u,cons);
    return 0;
}