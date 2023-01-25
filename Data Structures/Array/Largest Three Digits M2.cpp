// Method 2 : O(nlogn)

#include <iostream>
#include <climits> // To use INT_MIN
#include <algorithm> // To use sort STL
using namespace std;

// Main Function Code
void findL3(int arr[], int n)
{
  sort(arr,arr+n); // Sorting of array using quicksort
  
  int chk = 0, cnt = 1;
  for(int i=0; i<n; i++)
  {
    if(cnt < 4)
    {
      if(chk != arr[n-i])
      {
        cout << arr[n-i] << " ";
        chk = arr[n-i];
        cnt++;
      }
    }
    else
      break;
  }
}

// Driver Code
int main()
{
  int sz; // size of array
  cin >> sz;
  int arr[sz];
  
  for(int i=0; i<sz; i++)
    cin >> arr[i];
  
  findL3(arr,sz);
}
