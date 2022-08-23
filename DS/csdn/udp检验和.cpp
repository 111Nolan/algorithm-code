#include<stdio.h>
unsigned short checksum(unsigned short *buf,int nword)
{
unsigned long sum;
for(sum=0;nword>0;nword--)  //ģ��ӷ�?
{
sum += *buf++;
sum = (sum>>16) + (sum&0xffff);
}
return ~sum;
}
int main()
{
	unsigned short buffer[71]=
    {0xca77,0xcb04,
    0x0a03,0xe628,
    0x0011,0x0082,
    0x0035,0xc46c,
    0x0082,0x0000,
    0x0590,0x8180
,   0x0001 , 0x0003 , 0x0000 , 0x0000 , 0x0374 , 0x3130
,   0x0562 , 0x6169 , 0x6475 , 0x0363 , 0x6f6d , 0x0000 , 0x0100 , 0x01c0
,   0x0c00 , 0x0500 , 0x0100 , 0x0007 , 0x1300 , 0x1903 , 0x7431 , 0x3005
,   0x6261 , 0x6964 , 0x7503 , 0x636f , 0x6d01 , 0x6106 , 0x6264 , 0x7964
,   0x6e73 , 0xc016 , 0xc02b , 0x0005 , 0x0001 , 0x0000 , 0x003c , 0x001a
,   0x0f6f , 0x7065 , 0x6e63 , 0x646e , 0x6264 , 0x7369 , 0x6d61 , 0x6765
,   0x076a , 0x6f6d , 0x6f64 , 0x6e73 , 0xc016 , 0xc050 , 0x0001 , 0x0001
,   0x0000 , 0x000b , 0x0004 , 0x78f0 , 0xa524};
	int n=71;
	unsigned short re_checksum;     
	re_checksum=checksum(buffer,n);
	printf("%x\t",re_checksum); 
	if(re_checksum==0xa842) 
		printf("TRUE!\n"); 
	else          
		printf("FALSE!\n");
} 