/*
 * =====================================================================================
 *
 *       Filename:  1674.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月25日 19时28分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1024

int main(){
  int time;
  int size;
  int array[MAXSIZE];
  int i;
  int temp;
  int m;

  scanf("%d", &time);
  while(time != 0 ){
    int cnt = 0;
    int cnt_num = 0;

    scanf("%d", &size);
    for(i = 1; i <= size; i++){
      scanf("%d", &array[i]);
    }
    
    for(i = 1; i <= size; i++){
      if(array[i] != i){
        cnt_num = 1;
        m = i;
        while(m != i){
          temp = array[m];   
          array[m] = m;
          m = temp;
          cnt_num++;
        }
        cnt++;
      }

    }
    
    printf("%d\n", cnt_num - cnt);

    time--;
  }

  return 0;
}

