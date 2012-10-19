/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 10时39分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int count(int n);

int main(){
  int n;
  FILE *fin, *fout;

  fin = fopen("input.txt", "r");
  fout = fopen("bits.txt", "w");

  while(fscanf(fin, "%d", &n) == 1){

    fprintf(fout, "%d\n", count(n));
  }
//  scanf("%d", &n);
//  printf("has %d bits \n", count(n));
  fclose(fin);
  fclose(fout);
  return 0;
}

int count(int n){
  int cnt = 1;

  while(n / 10 != 0){
    n = n / 10;
    cnt++;
  }

  return cnt;
}
