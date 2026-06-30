class Solution
{
public:
  void MergeSort(vector<int> &arr, int start, int end)
  {
    if (start >= end)
      return;
    // int mid = end + (start-end)/2;
    int mid = start + (end - start) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
  }

  void Merge(vector<int> &arr, int start, int mid, int end)
  {
    vector<int> temp(end - start + 1);
    int index = 0, left = start, right = mid + 1;
    while (left <= mid && right <= end)
    {
      if (arr[left] <= arr[right])
      {
        temp[index++] = arr[left++];
      }
      else
      {
        temp[index++] = arr[right++];
      }
    }
    while (left <= mid)
      temp[index++] = arr[left++];
    while (right <= end)
      temp[index++] = arr[right++];

    index = 0;
    for (int i = start; i <= end; i++)
    {
      arr[i] = temp[index++];
    }
  }
