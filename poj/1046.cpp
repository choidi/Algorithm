/*
 * =====================================================================================
 *
 *       Filename:  1046.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月30日 15时55分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */

#include <cstdio>
#include <iostream>
#include <cmath>
#include <climits>

#define MAX 1024
using namespace std;

typedef struct {
  int x;
  int y;
  int z;
}Point;

int main(){
  Point point[MAX];
  int cnt = 0;
  Point goal;
 
  while(cnt != 16){
    cin >> point[cnt].x >> point[cnt].y >> point[cnt].z;  
    cnt++;
  }
  
  while(1){
    cin >> goal.x >> goal.y >> goal.z;
    
    Point des; 
    int minMapping = INT_MAX;

    if(goal.x == -1 && goal.y == -1 && goal.z == -1){
      break;
    }
    
    for(int i = 0; i < 16; i++){
      int dis = (int)sqrtf((goal.x - point[i].x)*(goal.x - point[i].x) + (goal.y - point[i].y)*(goal.y - point[i].y) + (goal.z - point[i].z) * (goal.z - point[i].z));
      
      if(minMapping > dis){
        des.x = point[i].x;
        des.y = point[i].y;
        des.z = point[i].z;
        minMapping = dis;
      }
    }
    
    cout << "(" << goal.x << "," << goal.y << "," << goal.z << ") maps to (" << des.x << "," << des.y << "," << des.z << ")" << endl;
  }
  return 0;
}

