int main()
{
    char a[50];
    int i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("space=%d",c);
    return 0;
}
