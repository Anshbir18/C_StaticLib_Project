#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int make_same_size(char** a, char** b){
  int len_a=strlen(*a);
  int len_b=strlen(*b);

  if(len_a<len_b){
    char* str_a = (char*)malloc(sizeof(char)*len_b+1);
    //adding 0's
    for(int i=0;i<len_b-len_a;i++){
      str_a[i]='0';
    }
    //remaning
    for(int i=len_b-len_a;i<len_b;i++){
      str_a[i]=(*a)[i-(len_b-len_a)];
    }

    str_a[len_b]='\0';
    *a=str_a;
    return len_b;
  }
  else{
    char* str_b = (char*)malloc(sizeof(char)*len_a+1);

    for(int i=0;i<len_a-len_b;i++){
      str_b[i]='0';
    }

    for(int i=len_a-len_b;i<len_a;i++){
      str_b[i]=(*b)[i-(len_a-len_b)];
    }
    str_b[len_a]='\0';
    *b=str_b;
    return len_a;
  }
  
}


char* make_substr(char* a,int start,int end){
  char* substr=(char*)malloc(sizeof(char)*(end-start+2));

  for(int i=start;i<=end;i++){
   // printf("%c ",a[i]);
    substr[i-start]=a[i];
  }
  substr[end-start+1]='\0';
  return substr;
}

char* add_substr(char*a,char*b){
  
  int length=make_same_size(&a,&b);
  char* res=(char*)malloc(sizeof(char)*(length+2));
  int bit_a=0;
  int bit_b=0;
  int carry=0;
  while(length>0){
    bit_a=a[length-1]-'0';
    bit_b=b[length-1]-'0';
    int sum=carry+bit_a+bit_b;
    if(sum>=2){
      carry=1;
      sum=sum%2;
    }
    else{
      carry=0;
    }
    res[length]=sum+'0';
    length--;
    
  }

  if(carry==1)res[0]='1';
  else{
    for(int i=0;i<strlen(res)-1;i++){
      res[i]=res[i+1];//reight left copy
    }
    res[strlen(res)-1]='\0';
  }
  return res;
}
long int fast_Multiply(char* a,char* b){
  int length=make_same_size(&a,&b);
  if(length==0)return 0;
  if(length==1){
    return (a[0]-'0')*(b[0]-'0');
  }

  int n_left_bits=length/2;
  int n_right_bits=length-n_left_bits;

  char* aL=make_substr(a,0,n_left_bits-1);
  char* aR=make_substr(a,n_left_bits,length-1);

  char* bL=make_substr(b,0,n_left_bits-1);
  char* bR=make_substr(b,n_left_bits,length-1);


  long int A=fast_Multiply(aL, bL);


  
  long int B=fast_Multiply(
  (add_substr(aL,aR)),
  (add_substr(bL,bR))
  );



  
  long int C=fast_Multiply(aR,bR);

  return A*(1<<(2*n_right_bits))+(B-A-C)*(1<<n_right_bits)+C;
  
}
