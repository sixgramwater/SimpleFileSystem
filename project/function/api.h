#ifndef __API__
    #define __API__
    void startsys();
    void format();
    void showBlock0();
    void my_cd(char *dirname);
    void my_mkdir(char *dirname);
    void my_rmdir(char *dirname);
    void my_ls();
    int my_create(char *filename);
    void my_rm(char *filename);
    void my_open(char *filename);
    void my_close(int fd);
    int my_write(int fd);
    int do_write(int fd,char *text,int len,char wstyle);
    int my_read(int fd,int len);
    int do_read(int fd,int len,char *text);
    void exitsys();
#endif
