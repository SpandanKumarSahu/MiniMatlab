#include "myl.h"

int printStr(char *ptr)
{
  int ret = 0;
  char *temp = ptr;
  int len = 0;
  while (*(temp++) != '\0') {
    ++len;
  }
  asm (
       "movl $0x04, %%eax;"
       "movl $1, %%ebx;"
       "int $0x80"
       : "=r" (ret)
       : "c" (ptr), "d" (len));
  return ret;
}

int printInt(int n)
{
  int ret = 1;
  if(n < 0){
    ret = printStr("-");
    n *= (-1);
  }
  int m = n;
  int len = 0;
  while (m > 0){
    len += 1;
    m /= 10;
  }
  char str[len];
  m = n;
  for (int i = len-1; i>=0; i--){
    str[i] = '0' + m%10;
    m = m/10;
  }
  for(int i=0; i < len; i++){
    switch(str[i]){
    case '0':
      ret =printStr("0");
      break;
    case '1':
      ret =printStr("1");
      break;
    case '2':
      ret =printStr("2");
      break;
    case '3':
      ret =printStr("3");
      break;
    case '4':
      ret =printStr("4");
      break;
    case '5':
      ret =printStr("5");
      break;
    case '6':
      ret =printStr("6");
      break;
    case '7':
      ret =printStr("7");
      break;
    case '8':
      ret =printStr("8");
      break;
    case '9':
      ret =printStr("9");
      break;
    default:
      break;
    }
    if(ret != 1)
    return ERR;
  }
  return OK;
}

int printFloat(float x){
  int ret = 1;
  if(x < 0){
    ret =printStr("-");
    x *= (-1);
  }
  if(ret != 1)
    return ERR;
  int int_part = ((int) x);
  int frac_part = (int)((x - int_part) * 100000);
  ret = printInt(int_part);
  if(ret < 0)
    return ERR;
  ret =printStr(".");
  if(ret != 1)
    return ERR;
  ret =printInt(frac_part);
  if(ret < 0)
    return ERR;
  return OK;
}

int readInt(int *n){
  char ar[100];
  char *ptr = &ar[0];
  int ret = 0;
  asm (
       "movl $0x03, %%eax;"
       "movl $0x00, %%ebx;"
       "movl $10, %%edx;"
       "int $0x80"
       : "=r" (ret)
       : "c" (ptr));
  int x = 0;
  int minus = 0;
  while(*(ptr++) != '\0'){
    switch(*(ptr)){
    case '0':
      x += 0;
      break;
    case '1':
      x += 1;
      break;
    case '2':
      x += 2;
      break;
    case '3':
      x += 3;
      break;
    case '4':
      x += 4;
      break;
    case '5':
      x += 5;
      break;
    case '6':
      x += 6;
      break;
    case '7':
      x += 7;
      break;
    case '8':
      x += 8;
      break;
    case '9':
      x += 9;
      break;
    case '-':
      if(minus == 1)
	return ret;
      minus = 1;
      break;
    default:
      break;
    }
    x *= 10;
  }
  if(minus){
    x *= (-1);
  }
  *n = x;
  if(ret == 0)
    return OK;
  else
    return ERR;
}

int readFloat(float *f){
  char ar[100];
  char *ptr = &ar[0];
  int ret = 0;
  asm (
       "movl $0x03, %%eax;"
       "movl $0x00, %%ebx;"
       "movl $10, %%edx;"
       "int $0x80"
       : "=r" (ret)
       : "c" (ptr));
  float x = 0.0;
  int minus = 0;
  while(*(ptr) != '\0' && *(ptr) != '.'){
    switch(*(ptr)){
    case '0':
      x += 0;
      break;
    case '1':
      x += 1;
      break;
    case '2':
      x += 2;
      break;
    case '3':
      x += 3;
      break;
    case '4':
      x += 4;
      break;
    case '5':
      x += 5;
      break;
    case '6':
      x += 6;
      break;
    case '7':
      x += 7;
      break;
    case '8':
      x += 8;
      break;
    case '9':
      x += 9;
      break;
    case '-':
      if(minus == 1)
	return ret;
      minus = 1;
      break;
    default:
      break;
    }
    x *= 10;
    ptr++;
  }
  float mult = 0.1;
  while(*(ptr) != '\0'){
    switch (*(ptr)){
    case '0':
      x += mult * 0;
      break;
    case '1':
      x += mult * 1;
      break;
    case '2':
      x += mult * 2;
      break;
    case '3':
      x += mult * 3;
      break;
    case '4':
      x += mult * 4;
      break;
    case '5':
      x += mult * 5;
      break;
    case '6':
      x += mult * 6;
      break;
    case '7':
      x += mult * 7;
      break;
    case '8':
      x += mult * 8;
      break;
    case '9':
      x += mult * 9;
      break;
    default:
      break;
    }
    mult /= 10;
  }
  *f = x;
  if(ret == 0)
    return OK;
  else
    return ERR;
}
