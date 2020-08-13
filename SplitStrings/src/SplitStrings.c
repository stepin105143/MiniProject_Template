
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void GetStr(char **f)
{
    for(int i =0;1;i++)
    {    
        if(i)
            *f = (char*)realloc((*f),i+1);
        else
            *f = (char*)malloc(i+1);
        (*f)[i]=getchar();
        if((*f)[i] == '\n')
        {
            (*f)[i]= '\0';
            break;
        }
    }   
}
void SplitStrings(char *a)
{
    int len = strlen(a);
    char temp[len];
    int k = 0;
    printf("\"");
    for(int i =0;i<len;i++)
    {
        if(a[i]=='_')
        {
            printf("\",\"");
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    printf("\"");
}
int main()
{
    char *s =NULL;
    GetStr(&s);
    SplitStrings(s);
}