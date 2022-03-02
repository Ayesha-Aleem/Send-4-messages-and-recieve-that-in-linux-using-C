#include<sys/msg.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 512
struct msgbuf{
long mtype;
char mtext[SIZE];
};

int main()
{
key_t key;
key=98;
int qid;
qid=msgget(key,IPC_CREAT|0666);
struct msgbuf msg1;
msg1.mtype=10;
strcpy(msg1.mtext,"Message from 4\n");
msgsnd(qid,&msg1,sizeof msg1.mtext,0);


return 0;
}
