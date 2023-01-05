#include<stdio.h>
#include<stdlib.h>
#define bucketSize 512
void bktInput(int a,int b)
{
if(a>bucketSize)
printf("\n\t\tBucket overflow");
else {
delay(500);
while(a>b){
printf("\n\t\t bytes outputed.");
a-=b;
delay(500);
}
if (a>0) printf("\n\t\tLast %d%d" ,&a,&b);
printf(“bytes sent\t");
printf("\n\t\tBucket output successful");
}
}
void main() {
int op, pktSize;
  randomize();
printf("Enter output rate : ");
scanf(“%d”,&op);
for(int i=1;i<=5;i++){
delay(random(1000));
pktSize=random(1000);
printf("\nPacket no %d",i);
printf("\tPacket size = %d",pktSize);
bktInput(pktSize,op);
}
}
       Enter output rate : 100
Packet no 0 Packet size = 3
Bucket output successful
Last 3 bytes sent
Packet no 1 Packet size = 33
Bucket output successful
Last 33 bytes sent
Packet no 2 Packet size = 117
Bucket output successful
100 bytes outputted.
Last 17 bytes sent
Packet no 3 Packet size = 95
Bucket output successful
Last 95 bytes sent
Packet no 4 Packet size = 949
Bucket overflow
