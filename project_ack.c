#include<stdio.h>
int  main()
{
	int c,ack,wo,wn,cbws,wm,bws;
	int i=0,j,b=0,n;
	printf("enter wo\n");
	scanf("%d",&wo);
	printf("enter cbws\n");
	scanf("%d",&cbws);
	printf("enter wm\n");
	scanf("%d",&wm);
	printf("enter wn\n");
	scanf("%d",&wn);
printf("enter ack\n");
srand(time(NULL));
  for (c = 1; c <= 10; c++) {
    ack = rand() % 2;
    
if(ack==1)
{
	printf("success transmision\n");
	if(cbws<=wn){
		if(cbws==wo){
			bws=wo;
		}
		else
		{
			if(bws!=wo){
				bws=cbws/2;
			}
			else
			{
				bws=cbws-wo;
				if(cbws<wm)
				{
					bws = cbws*2;
				}
				else
				{
					printf("frame lost due to collision");
					if(bws==wn)
					{
						bws=wn;
					}
					else
					{
						bws=cbws+wo;
					}
				}
			}
		}
	}

}

}

printf("bws = %d\n",bws);
n = bws;
i=1;
for(j=n;j>0;j=j/2)

       {
        b=b+(n%2)*i;
        i=i*10;
        n=n/2;
       }
       printf("\nThe Binary of %d is %d.\n\n",bws,b);
return 0;
}
