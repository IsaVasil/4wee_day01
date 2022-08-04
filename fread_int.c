#include <stdio.h>
#include <stdlib.h>
int main(){
FILE* f_ptr=fopen("test_text_file","rb");
    if(!f_ptr){
perror("could not open");
exit(-1);
}
long arr[4];
fread(arr,sizeof(char),4,f_ptr);
printf("%ld %ld %ld %ld",arr[0],arr[1],arr[2],arr[3]);
fclose(f_ptr);
return 0;
}