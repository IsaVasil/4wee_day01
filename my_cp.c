#include <fcntl.h>
#include <unistd.h>
#include<stdio.h>
int main(int arc,char **argp){
int fd_in =open(argp[1],O_RDONLY);
int fd_out=open(argp[2],O_WRONLY| O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
if(fd_in==-1){
    perror("could not open file\n");
    return -1;
}
char cur_sym;
int read_count;
while(read_count!=0){
read_count=read(fd_in,&cur_sym,1);
if(read_count==-1){
    perror("could not read from file\n");
    return -1;
}
int written_count;
written_count=write(1,&cur_sym,1);
if(written_count==0){
    perror("error");
    return -1;
}
}
close(fd_in);
close(fd_out);
    return 0;
}