
#include<bits/stdc++.h>
using namespace std;




class Solution{
  public:
     
    int majorityElement(int a[], int size)
    {
    int n = size;
    int majorityElement = a[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == majorityElement)
            count++;
        else
            count--;

        if (count == 0) {
            majorityElement = a[i];
            count = 1;
        }
    }

    
    int occurrences = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == majorityElement)
            occurrences++;
    }

    if (occurrences > n / 2)
        return majorityElement;
    else
        return -1;

};




int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

