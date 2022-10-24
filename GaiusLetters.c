#include<stdio.h>
 
int main()
{
    char message[10001], ch;
    int i;
    fgets(message, 10001, stdin);
    for(i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
        ch = ch - 12;
        if(ch < 'a')
        {
            ch = ch + 'z' - 'a' + 1;
        }
        message[i] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 12;
        if(ch < 'A')
        {
            ch = ch + 'Z' - 'A' + 1;
        }
        message[i] = ch;
    }
}
printf("%s", message);
return 0;

