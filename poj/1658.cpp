/*
 * =====================================================================================
 *
 *       Filename:  1658.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年10月21日 13时20分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <iostream>

using namespace std;

int main(){
  int t;
  int array[5];
  
  cin >> t;
  while(t--){
    for(int i = 0; i < 4; i++){
      cin >> array[i];
    }
    int j = 0;
    if((array[j+2] - array[j]) == (array[j+3] - array[j+1])){
      array[j+4] = array[j+3] + (array[j+1] - array[j]);
    }
    else
      array[j+4] = array[j + 3] * array[j + 2] / array[j + 1];
    
    for(int i = 0; i < 5; i++){
      cout << array[i] << " ";
    }
    cout << endl;
  }
  
  return 0;
}

