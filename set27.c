int main()
{
int a,b,rem,ams=0,temp,k=0,mul=1,i;
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
temp=i;
while(temp>0)
{
temp=temp/10;
k++;
}
temp=i;
while(temp)
{
rem=temp%10;
for(i=1;i<=k;i++)
{
    mul=mul*rem;
}
ams=ams+mul;
mul=1;
temp=temp/10;
}
//printf("%d",ams);
if(ams==i)
{
printf("%d",ams);
}
}
return 0;
}
