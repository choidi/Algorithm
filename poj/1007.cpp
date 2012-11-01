/*
 * =====================================================================================
 *
 *       Filename:  1007.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年09月29日 12时17分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *      
 *         Author:  choidi, choidichamy@gmail 
 *=====================================================================================
 */


#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

#define MAX 1024
using namespace std;

typedef struct{
  string s;
  int num;
}DNA;

DNA d[MAX];

bool cmp(DNA a, DNA b){
  return a.num < b.num;
}
int main(){
  int length, size;
  cin >> length >> size;
  
  for(int i = 0; i < size; i++){
    cin >> d[i].s;
  }
  
  for(int i = 0; i < size; i++){
    d[i].num = 0;
    
    for(int j = 0; j < length; j++){
      for(int m = j; m < length; m++){
        if(d[i].s[j] > d[i].s[m]){
          d[i].num++;
        }
      }
    }
  }
  
  stable_sort(d, d + size, cmp);
  
  for(int i = 0; i < size; i++){
    cout << d[i].s << endl;
  }
  return 0;
}

