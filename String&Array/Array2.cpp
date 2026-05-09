#include<iostream>
using namespace std;
int main()
{
    int arr[] = {45, 12, 78, 34, 89, 23, 67, 5};
    int largest_no=arr[0];
    int smallest_no=arr[0];
    int largest_index=0;
    int smallest_index=0;
    for(int i=0;i<8;i++){
        if(arr[i]>largest_no){
           largest_no=arr[i];
           largest_index=i;
        }
        if(arr[i]<smallest_no){
            smallest_no=arr[i];
            smallest_index=i;
        }
        }
     cout << "Largest number = " << largest_no << endl;
    cout << "Index of largest number = " << largest_index << endl;

    cout << "Smallest number = " << smallest_no << endl;
    cout << "Index of smallest number = " << smallest_index << endl;

    return 0;
}