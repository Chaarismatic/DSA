int low = 0,high=arr.size()-1,mid=low+1;
while(low<mid && mid<=high){
  if(arr[mid] == pivot)mid++;
  else if(arr[mid]>pivot){
    swap(arr[mid],arr[high]);
    high--;
  }
  else{
    swap(arr[mid],arr[low]);
    low++;
  }
}