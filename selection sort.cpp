#include <bits/stdc++.h>
using namespace std;

 void selectionSort(int arr[],int n)
 { 
 	
 	for(int i =0;i<n;i++)
 	{
 	int index = i;
 		for(int j = i+1;j<n;j++)
 		{
 			int mindInd = i;
 			if(arr[j]< arr[index])
 			{
 				index = j;
			 }
		 }
		 swap(arr[index],arr[i]);
	 }
	 
	 cout<<" \n After Sorted  : ";
	 for(int i =0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
 }

int main()
{
	int arr[13]={1,6,2,9,3,8,0,33,89,11,21,13,99};
	 cout<<" Array is   : ";
	 for(int i =0;i<13;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 selectionSort(arr,13);
}
