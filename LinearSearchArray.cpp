#include <iostream>
using namespace std;
int findIndex(int array[5], int target){
		for(int k=0; k<5; k++){
		if(array[k]==target){
			return k;
		}
		
	}
	return -1;
};
int main()
{
	int arr1[5] = {3,5,7,88,999}, target_num;
	cout<<"Enter the number you want to search: "<<endl;
	cin>>target_num;
	int searchIndex=findIndex(arr1, target_num);
	cout<<"Array Index of Searched Num: "<<searchIndex;
	
	return 0;
}

                        
