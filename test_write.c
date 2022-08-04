#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int main(){
    int fd =open("test_binary", O_WRONLY | O_TRUNC);
    printf("new_fd:%d",fd);
    if(fd==-1){
        perror("could not open file");
    }
    int arr[]={1,2,3,4};
    //char *buf="HELLO SYSCALLS!";
   // int sym_num=strlen(buf);
    int written_count;
    written_count=write(fd,arr,sizeof(int)*4);
    if(written_count!=sizeof(int)*4){
        write(2,"Could not write to file!\n",26);
    }
 close(fd);
    return 0;
}