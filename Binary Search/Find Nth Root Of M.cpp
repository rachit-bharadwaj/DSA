//  Question: https://www.codingninjas.com/studio/problems/1062679?topList=striver-sde-sheet-problems&leftPanelTabValue=PROBLEM

int NthRoot(int n, int m) {
  int start = 1, end = m, mid;

  while (start <= end) {
    mid = start + ((end - start) / 2);
    double root = pow(mid, n);

    if(root == m) return mid;

    else if(root > m) end = mid-1;

    else if(root < m) start = mid+1;
  }

  return -1;
}