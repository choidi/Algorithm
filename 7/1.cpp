/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  枚举排列  
 *
 *        Version:  1.0
 *        Created:  2012年10月19日 11时11分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */

#include <iostream>

using namespace std;

void print_permutation(int* A, int n, int cur){
  if(cur == n){
    for(int i = 0; i < n; i++){
      cout << A[i];
    }
    cout << endl;
  }
  else{
    for(int i = 1; i <= n; i++){
      int flag = 1;
      for(int j = 0; j < cur; j++){
        if(A[j] == i){
          flag = 0;
        }
      }
      if(flag == 1){
        A[cur] = i;
        print_permutation(A, n, cur+1);
      }
    }
  }

}
int main(){
  int array[3] ;

  print_permutation(array, 3, 0);
  return 0;
}

