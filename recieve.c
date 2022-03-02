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
key=9999;
int qid;
qid=msgget(key,IPC_CREAT|0666);
struct msgbuf msg;
msgrcv(qid,&msg,SIZE,0,IPC_NOWAIT);
printf("Message Received from 1:%s\n",msg.mtext);


key_t key1;
key1=999;
int qid1;
qid1=msgget(key1,IPC_CREAT|0666);
struct msgbuf msg1;
msgrcv(qid1,&msg1,SIZE,0,IPC_NOWAIT);
printf("Message Received from 2:%s\n",msg1.mtext);


key_t key2;
key2=99;
int qid2;
qid2=msgget(key2,IPC_CREAT|0666);
struct msgbuf msg2;
msgrcv(qid2,&msg2,SIZE,0,IPC_NOWAIT);
printf("Message Received from 3:%s\n",msg2.mtext);



key_t key3;
key3=98;
int qid3;
qid3=msgget(key3,IPC_CREAT|0666);
struct msgbuf msg3;
msgrcv(qid3,&msg3,SIZE,0,IPC_NOWAIT);
printf("Message Received from 4:%s\n",msg3.mtext);

key_t key4;
key4=98;
int qid4;
qid4=msgget(key4,IPC_CREAT|0666);
struct msgbuf msg4;
msgrcv(qid4,&msg4,SIZE,0,IPC_NOWAIT);
printf("Message Received from 4:%s\n",msg4.mtext);


return 0;
}

