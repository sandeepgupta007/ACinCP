vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret; 
	int s = A.size();
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[(i + B)%s]);
	}
	return ret; 
}

