int main()
{
 int a,b,i;
 scanf("%d%d",&a,&b);
 if(a&&b<=100000)
 for(i=a;i<b;i++)
 {
     if(i%2!=0)
     printf("%d\t",i);
 }
 else
 printf("invalid");


    return 0;
}
