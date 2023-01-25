// Method 1 : TC -> O(n)

#include <iostream>
using namespace std;

// Main Function Code
void PrintL3(int arr[], int arr_size)
{
  int first, second, third;
  
  if(arr_size < 3)
  {
    cout << "Invalid";
    return;
  }
  
  third = second = first = INT_MIN;
  for(int i=0; i<arr_size; i++)
  {
    if(arr[i]>first)
    {
      third = second;
      second = first;
      first = arr[i];
    }
    
    else if(arr[i]>second && arr[i]!=first)
    {
      third = second;
      second = arr[i];
    }
    
    else if(arr[i]>third && arr[i]!=first)
      third = arr[i];
    
  }
  
  cout << first << " " << second << " " << third << endl;
}


// Driver Code
int main()
{
  int sz; //size of array
  cin >> sz;
  int arr[sz];
  
  for(int i=0; i<sz; i++)
    cin >> arr[i];
  
  PrintL3(arr,sz);
}
