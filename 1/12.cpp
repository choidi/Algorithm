/*
 * =====================================================================================
 *
 *       Filename:  12.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月02日 15时43分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <cstdio>
#include <stack>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
  int n;
  int i = 0;
  int target[1024];
  stack<int> s;
  string mark = "Yes";

  scanf("%d", &n);
  for(int j = 0; j < n; j++){
    scanf("%d", &target[j]);
  }

  s.push(i+1);
  while(!s.empty()){
   if(i > n){
      mark = "No";
      break;
    }

    s.push(i+1);
    if(s.top() == target[n]){
      s.pop();
    }
    i++;
     }
   
  cout << mark;
  
  return 0;
}

