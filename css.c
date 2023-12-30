#include<stdio.h>

int main()
{
    char msg[100] ,ch;
    int i  ,key=0;
    printf("enter the message to encrypt ");
    gets(msg);

    for(i=0;i<'\0';i++)
    {
     ch=msg[i];
     if(ch>='0' && ch <='3')
     {
        ch=ch+key ;
        if(ch>'z')
        {
            ch=ch-'z'+'a'-1;
            
        }
        msg[i]=ch;
     }
    }
    printf("encrypted messege is %s" , msg );
    return 0;
}