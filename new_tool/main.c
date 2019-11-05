//
//  main.c
//  new_tool
//
//  Created by s20181102934 on 2019/11/5.
//  Copyright © 2019 win. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#define NoInfo 0
//
struct tnode{
    int Data;
    struct tnode *  left;
    struct tnode * right;
};
typedef struct tnode* position;
typedef position BinTree;
//
typedef struct qnode*Queue;
struct qnode{
    int* data;
    int front,rear;
    int maxsize;
};
Queue CreateQ(int maxsize){
    Queue Q=(Queue)malloc(sizeof(struct qnode));
    Q->data=(int*)malloc(sizeof(int));
    Q->front=Q->rear=0;
    return Q;
}
bool AddQ(Queue Q,BinTree t){
    
}
//

BinTree CreateBinTree(int n){
    int Data;
    BinTree bt,t;
    Queue Q=CreateQ(n);
    //建立根节点
    scanf("%d",&Data);
    if(Data!=NoInfo){
        bt=(BinTree)malloc(sizeof(struct tnode));
        bt->Data=Data;
        bt->left=bt->right=NULL;
        AddQ(Q,bt);
    }
}
//
int main(int argc, const char * argv[]) {
    
    
    return 0;
}
