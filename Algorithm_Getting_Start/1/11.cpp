/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月02日 15时30分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <cstdio>
#include <queue>

using namespace std;

int main(){
  int n;
  queue<int> q;

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    q.push(i+1);
  }
  
  while(!q.empty()){
    printf("%d ", q.front());
    q.pop();
    q.push(q.front());
    q.pop();

  }

  printf("\n");
  return 0;
}

