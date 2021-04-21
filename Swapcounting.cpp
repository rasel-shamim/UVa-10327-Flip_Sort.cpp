#include<iostream>
#include<stdio.h>

using namespace std;


int check_sort(int arr[],int x){
	int i;
	for(i=0;i<x-1;i++){
		if(arr[i] > arr[i+1])
			return 0;
	}

	return 1;
}

int main(){
	int n;

	while(scanf("%d",&n)!=EOF){
		int arr[n],i,cnt =0,temp;

		for(i=0;i<n;i++){
			cin>>arr[i];
		}

		while(check_sort(arr,n)!=1){
			for(i=0;i<n-1;i++){
				if(arr[i]>arr[i+1]){
					temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
					cnt++;
				}
			}
		}

		cout<<"Minimum exchange operations : "<<cnt<<endl;

	}

	return 0;
}
