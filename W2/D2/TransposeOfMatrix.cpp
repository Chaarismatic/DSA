vector<vector<int>> transpose(vector<vector<int>> &mat)
{
  int i = 0;
  while (i < mat.size())
  {
    int j = i + 1;
    while (j < mat[0].size() && i != j)
    {
      swap(mat[i][j], mat[j][i]);
      j++;
    }
    i++;
  }
  return mat;
}