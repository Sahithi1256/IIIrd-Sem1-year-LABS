#include<stdio.h>

struct frame{

int num;

char str[20];

};

struct frame arr[10];

int n;

void sort() /*Bubble sort */

{

int i,j;

struct frame temp;

for(i=0;i<n-1;i++)

for(j=0;j<n-i-1;j++)

if(arr[j].num>arr[j+1].num)

{ temp=arr[j];

arr[j]=arr[j+1];

arr[j+1]=temp;

}

}

int main()

{

int i;

printf("Enter the number of frames\n");

scanf("%d",&n);

printf("Enter the frame sequence number and frame contents\n");

for(i=0;i<n;i++)

scanf("%d%c",&arr[i].num,arr[i].str);

sort();

printf("The frame in sequences\n");

for(i=0;i<n;i++)

printf("%d\t%s\n",arr[i].num,arr[i].str);

}

OUTPUT:
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
