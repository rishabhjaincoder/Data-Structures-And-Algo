// linear search
#include<iostream>
using namespace std;

int linearSearch(int arr[], int element, int size){
    for (int index = 0; index < size; index++)
    {
        if(arr[index]==element){
            return index;
        }
    }
    return -1;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int element = 8;

    int index = linearSearch(arr, element, size);

    if (index>=0){
        cout<< "element " << element <<" found on index "<< index <<endl;
    }
    else{
        cout<<"element not found! "<< endl;
    }
    return 0;
}