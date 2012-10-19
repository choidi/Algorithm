/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  find out the max, min and average 
 *
 *        Version:  1.0
 *        Created:  2012年08月31日 09时26分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int main(){
  int x;
  int max = 0;
  int min = INT_MAX;
  int sum = 0;
  int cnt = 1;
  FILE *fin, *fout;

 // fin = fopen("input.txt", "r");
 // fout = fopen("output.txt", "w");
 //
  fin = stdin;
  fout = stdout;

  while(fscanf(fin, "%d", &x) == 1){
    if(x < min){
      min = x;
    }
    if(x > max){
      max = x;
    }

    sum += x;
    cnt++;

  }

  fprintf(fout, "average:%f\nmin:%d\nmax:%d\n", (double)sum / cnt, min, max);
//  fclose(fin);
//  fclose(fout);
  return 0;
}

