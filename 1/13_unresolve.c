/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  tree
 *
 *        Version:  1.0
 *        Created:  2012年09月03日 10时04分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node{
  int value;
  struct node *left, *right;
}Node;

Node *input(Node *root);
void output(Node *root);

int main(){

  Node *root = malloc(sizeof(Node));
  
  root = input(root);
  
  output(root);

  return 0;
}

Node *input(Node *root){
  int value;
  Node *p = root;

  while(scanf("%d", &value) == 1){
    char s[1024];
    scanf("%s", s);
    int i = 0;

    while(s[i] == 'l' || s[i] == 'r' || s[i] == 'o'){
      if(s[i] == 'l')
      {
        p->left = malloc(sizeof(Node));
        p = p->left;
      }
      else if(s[i] == 'r'){
        p->right = malloc(sizeof(Node));
        p = p->right;
      }
      else{
        break;
      }
      i++;
    }

    p->value = value;
    p = root;
  }
 
  return root;
}


void output(Node *root){
  //deep travel
  Node *q[1024];
  q[0] = root;
  int front = 0; 
  int rear = 1;
  int i;

  while(front < rear){
    Node *u = q[front++];

    if(u->left != NULL) q[rear++] = u->left;
    if(u->right != NULL) q[rear++] = u->right;    

  }

  for(i = 0; i < rear; i++){
    printf("%d ", q[i]->value);
  }

  printf("\n");
}
