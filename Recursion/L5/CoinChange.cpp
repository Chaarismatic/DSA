
void SUBSET(vector<int> &coins, int sum, int index, int CoinSum, int &ans)
{
  if (index == coins.size())
  {
    if (sum == CoinSum)
      ans++;
    return;
  }
  if (CoinSum > sum)
    return;
  SUBSET(coins, sum, index, CoinSum + coins[index], ans);
  SUBSET(coins, sum, index + 1, CoinSum, ans);
}

int countCoinCombinations(vector<int> &coins, int sum)
{
  int ans = 0;
  SUBSET(coins, sum, 0, 0, ans);
  return ans;
}