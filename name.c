#include<stdio.h>
#include<string.h>
int main(){
    int i;
    FILE*fname;
    char ch[]="dawar";
    fname=fopen("name.text","w");
    for(i=0;i<strln(ch);i++){
        fputc(ch[i],fname);
    }
    fclose(fname);
}