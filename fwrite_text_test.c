#include <stdio.h>
#include <stdlib.h>
int main(){
FILE* f_ptr=fopen("test_text_file","r+");
    if(!f_ptr){
perror("could not open");
exit(-1);
}
fseek(f_ptr,4,SEEK_SET);
char *arr="Hello world!";
fwrite(arr,sizeof(char),12,f_ptr);
fclose(f_ptr);
return 0;
}