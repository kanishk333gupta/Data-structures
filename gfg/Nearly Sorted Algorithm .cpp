//https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/1/#


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t ;
	cin>>t;
	while(t--){
	    int n, k;
	    cin >> n>> k;
	    int arr[n];
	    for(int i = 0 ; i < n ; i ++) cin>>arr[i];
	    priority_queue<int , vector<int> , greater<int>> pq;
        vector<int>v;
	    for(int i = 0; i<n; i++){
	        pq.push(arr[i]);
    	    if(pq.size()>k){
    	        v.push_back(pq.top());
    	        pq.pop();
    	    }
	    }
    	    while(pq.size()>0){
	            v.push_back(pq.top());
	            pq.pop();// 
	    }
	   for(auto it= v.begin() ; it!=v.end() ;it++) cout<<*it<<" ";
	   cout<<"\n";
    }return 0;
}