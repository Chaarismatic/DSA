vector<vector<int>> addTwoMatrix(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
{
  int m = mat1.size();
  int n = mat1[0].size();
  int a = mat2.size();
  int b = mat2[0].size();
  vector<vector<int>> mat(1, vector<int>(1));
  if (m != a || n != b)
  {
    mat[0][0] = -1;
    return mat;
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      mat1[i][j] += mat2[i][j];
    }
  }
  return mat1;
}