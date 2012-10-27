/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月20日 16时10分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

int func(int m){
  int result = 1;
  
  while(m != 0){
    result *= m;
    m--;
  }
  
  return result;
}

int func2(int n, int m){
    
}

int main(){
  int n;
  int m;
  
  scanf("%d", &n);
  scanf("%d", &m);
  printf("%u\n", func(n) / (func(m) * func(n-m)));//该方法容易溢出
  printf("%d\n", func2(n, m));
  
  return 0;
}

