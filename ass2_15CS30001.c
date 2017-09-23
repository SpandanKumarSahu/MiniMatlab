#define BUFF 20
//#include <stdlib.h>
#include<stdio.h>
int print_int(int n)
{
	char buff[BUFF], zero='0';
	int i=0,j,k,bytes;
	if(n==0) buff[i++]=zero;
	else
	{
		if(n<0) {
			buff[i++]='-';
			n=-n;
		}
		while(n){
			int dig=n%10;
			buff[i++]=(char)(zero+dig);
			n/=10;
		}
		if(buff[0]=='-') j=1;
		else j=0;
		k=i-1;
		while(j<k){
			char temp=buff[j];
			buff[j++]=buff[k];
			buff[k--]=temp;
		}
	}
	buff[i]='\n';
	bytes=i+1;
	__asm__ __volatile__ (
		"movq $1, %%rax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff),"d"(bytes)
	);//$1:write,$1: on stdin
	return bytes;
}


int printStr(char *arr)
{
	int length=0;
	while(arr[length]!='\0') length++;
	__asm__ __volatile__ (
		"movq $1, %%rax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(arr),"d"(length)
	);
	return length;
}


int printFlt(float f)
{
	int n=0;
	int declen=0;
	char buff[BUFF], zero='0';
	//while(f!=(int)f) {n=n*10+(int)f; f-=(int)f; f*=10; declen++;}
	n=(int)f;
	f-=n;
	int i=0,j,k,bytes;
	if(n==0) {buff[i++]=zero;}
	if(f==0) {buff[i++]='.'; buff[i++]=zero;}
	else
	{
		if(n<0) {
			buff[i++]='-';
			n=-n;
		}
		while(n){
			int dig=n%10;
			buff[i++]=(char)(zero+dig);
			//declen--;
			//if(declen==0) buff[i++]='.';
			n/=10;
		}
		//printf("%d\n", n);
		/*buff[i++]='.';
		while(f!=(int)f)
		{
			f=f*10;
			int dig = (int)f;
			buff[i++]=(char)(zero+dig);
			f=f-dig;
		}*/
		if(buff[0]=='-') j=1;
		else j=0;
		k=i-1;
		while(j<k){
			char temp=buff[j];
			buff[j++]=buff[k];
			buff[k--]=temp;
		}
		//printf("asd/n");
		buff[i++]='.';
		while(f!=(int)f)
		{
			f=f*10;
			int dig = (int)f;
			buff[i++]=(char)(zero+dig);
			f=f-dig;
		}
	}
	//printf("asd/n");
	buff[i]='\n';
	bytes=i+1;
	__asm__ __volatile__ (
		"movq $1, %%rax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff),"d"(bytes)
	);
	return bytes;
}


int readInt(int *n)
{
	char buff[BUFF], zero = '0';
	int bytes=BUFF, i=0, j=0, tem=0;
	__asm__ __volatile__ (
		"movq $0, %%rax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff),"d"(bytes)
	);
	//printf("%s\n",buff);
	while(buff[i]!='\n') i++;
	if(buff[0]=='-') j=1;
	while(j<i)
	{
		if((buff[j]-zero)>=10 || (buff[j]-zero)<0) return 1;
		tem=tem*10+(buff[j]-zero);
		j++;
	}
	if(buff[0]=='-') tem=-tem;
	*n=tem;
	return 0;
}


int readFlt(float *f)
{
	char buff[BUFF], zero = '0';
	int bytes=BUFF, i=0, j=0, k=0;
	float tem=0, p=0.1;
	__asm__ __volatile__ (
		"movq $0, %%rax \n\t"
		"movq $0, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff),"d"(bytes)
	);
	while(buff[i]!='.') i++;
	k=i+1;
	while(buff[k]!='\n') {k++; if(k-i>6) break;}
	if(buff[0]=='-') j=1;
	while(j<i)
	{
		if((buff[j]-zero)>=10 || (buff[j]-zero)<0) return 1;
		tem=tem*10+(buff[j]-zero);
		j++;
	}
	j++;
	while(j<k)
	{
		if((buff[j]-zero)>=10 || (buff[j]-zero)<0) return 1;
		tem+=p*(buff[j]-zero);
		p/=10;
		j++;
	}
	if(buff[0]=='-') tem=-tem;
	*f=tem;
	return 0;
}
