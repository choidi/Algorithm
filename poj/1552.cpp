/*
 * =====================================================================================
 *
 *       Filename:  1552.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月05日 17时19分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <iostream>

#define MAX 1024
using namespace std;

int main(){
  int temp;
  
  while(1){
    cin >> temp;
    if(temp == -1){
      break;
    }
    
    int array[MAX];
    int size = 0;
    int cnt = 0;
    array[0] = temp;
    
    for(int i = 1;;i++){
      cin >> array[i];
      size++;
      if(array[i] == 0)
        break;
    }
    
    for(int i = 0; i < size ; i++){
      for(int j = 0; j < size; j++)  {
        if(array[i] == array[j] * 2){
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
  
  
  return 0;
}

