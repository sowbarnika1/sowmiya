int main()
{
    char a[1000];
    int i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
         
        }
        else if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
        {
        
        }
        else
        {
                c++;
        }
    
}
    printf("%d",c);
    return 0;
}
