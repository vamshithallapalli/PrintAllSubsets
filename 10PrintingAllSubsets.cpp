//Using Backtracking;
#include <bits/stdc++.h>
using namespace std;
void helper(vector<int>& A, vector<vector<int> >& res,vector<int>& subset, int i)
{
	//Base Case
    if(i==A.size()){
        res.push_back(subset);
        return;
    }

    //include ith element
    subset.push_back(A[i]);
    helper(A,res,subset,i+1);

    //not including the ith element
    subset.pop_back();
    helper(A,res,subset,i+1);
}
vector<vector<int> > subsets(vector<int>& A)
{
	vector<int> subset;
	vector<vector<int> > res;
	helper(A, res, subset, 0);
	return res;
}
int main()
{
	vector<int> array = { 1, 2, 3 };
	vector<vector<int> > res = subsets(array);
    // Print the generated subsets
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
    return 0;
}
