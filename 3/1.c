/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  reverse the array
 *
 *        Version:  1.0
 *        Created:  2012年09月15日 10时40分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 100000

void reverse(int array[], int n);
void copyArray(int resource[], int destination[], int size);

int main(){
  int array[MAX];
  int arrayTwo[MAX];
  int n;
  int i;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  reverse(array, n);
  copyArray(array, arrayTwo, n);
  reverse(arrayTwo, n);
  return 0;
}

void reverse(int array[], int n){
  int i;

  for(i = n - 1; i >= 0; i--){
    printf("%d ", array[i]);
  }
  printf("\n");
}

void copyArray(int resource[], int destination[], int size){
  memcpy(destination, resource, sizeof(int)*size);
}
