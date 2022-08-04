#include <stdio.h>
#include <stdlib.h>
int main(){
FILE* f_ptr=fopen("test_text_file","wb");
    if(!f_ptr){
perror("could not open");
exit(-1);
}
long arr[]={63,64,65,66};
fwrite(arr,sizeof(char),4,f_ptr);


fclose(f_ptr);
    return 0;
}