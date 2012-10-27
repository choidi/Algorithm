/*
 * =====================================================================================
 *
 *       Filename:  1969.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月25日 21时20分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int n;

  while(scanf("%d", &n) != EOF){
    int k = 1, s = 0;

    while(s < n){
      s += k; 
      k++;
    }

    k -= 1;
    if(k % 2 == 0){
      printf("TERM %d IS %d/%d\n", n, k - s + n, s - n + 1);
    }
    else
       printf("TERM %d IS %d/%d\n", n, s - n + 1, k - s + n);

  }
  return 0;
}

