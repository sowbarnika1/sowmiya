int main()
{
int a,rem,ams=0,temp,k=0,mul=1,i,j;
scanf("%d",&a);
temp=a;
while(temp>0)
{
temp=temp/10;
k++;
}
temp=a;
while(temp)
{
rem=temp%10;
for(j=1;j<=k;j++)
{
    mul=mul*rem;
}
ams=ams+mul;
mul=1;
temp=temp/10;
}
//printf("%d",ams);
if(ams==a)
{
printf("yes");
}
else
{
    printf("no");
}
return 0;
}
