/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月24日 15时27分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 1000

char dict[MAX][MAX];

int isCorrect(char a[], char b[], int lengtha, int lengthb){
  int i, j, flag = 0;
  
  if(lengtha != lengthb)
    return 0;
  
  for(i = 0; i < lengtha; i++){
    flag = 0;
    for(j = 0; j < lengthb; j++){
      if(a[i] == b[j])
        flag = 1;      
    }
    if(flag == 0){
      return 0;     
    }
  }
  
  return 1;
}


int main(){
  int cnt;
  int dict_size;
  char des[MAX];
  int flag = 1;
   
  for(cnt = 0; ; cnt++){
    scanf("%s", &dict[cnt]);
    
    if(!strcmp(dict[cnt],"*******")){
      break;
    }
  }

  dict_size = cnt;
  
  while(scanf("%s", &des) != 0){
    flag = 1;
    
    for(cnt = 0; cnt <= dict_size; cnt++){
      if(isCorrect(dict[cnt], des, strlen(dict[cnt]), strlen(des))){
        printf("%s\n", dict[cnt]);
        flag = 0;
      }
    }
    if(flag == 1)
      printf(":()\n");
  }
  
  return 0;
}

