int main()
{
    int m,h=0;
    scanf("%d",&m);
    while(m>=60)
    {
        h=h+1;
        m=m-60;
    }
    printf("%d %d",h,m);
return 0;
}
