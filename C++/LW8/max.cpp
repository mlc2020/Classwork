

int max(int a, int b) {
	if (a >= b) {
		return a;
	} else
		return b;
}

double max(double a, double b) {
	if (a >= b) {
		return a;
	} else
		return b;
}

char max(char a, char b) {
	if (a >= b) {
		return a;
	} else
		return b;
}

int* max(int* A, int i, int* B, int j) {
	int maxdex = max(i, j);
	bool A_max = false;
	bool B_max = false;
	int mindex = maxdex;
	if (i != j) {
		if (maxdex == i) {
			mindex = j;
			A_max = true;
		} else {
			mindex = i;
			B_max = true;
		}
	}
	int* C = new int[maxdex];
	for (int k = 0; k < mindex; ++k) {
		C[k] = max(A[k], B[k]);
	}
	for (int x = mindex; x < maxdex; ++x) {
		if (A_max) {
			C[x] = A[x];
		} else if (B_max) {
			C[x] = B[x];
		}
	}
	return C;
}

char* max(char* A, char* B) {
	bool A_max = false;
	for (int i = 0; true; ++i) {
		bool caseA = false;
		bool caseB = false;
		if (A[i] == '\0') {
			break;
		}
		if (B[i] == '\0') {
			A_max = true;
			break;
		}
		int A_i = A[i];
		int B_i = B[i];
		if (A_i < 97) {
			A_i += 32;
			caseA = true;
		}
		if (B_i < 97) {
			B_i += 32;
			caseB = true;
		}
		if (!caseA && !caseB) {
			if (A[i] > B[i]) {
				return A;
			} else if (A[i] < B[i]) {
				return B;
			}
		} else {
			if (A_i > B_i) {
				return A;
			} else if (A_i < B_i) {
				return B;
			}
		}
	}
	if (A_max) {
		return A;
	}
	return B;
}

int max(int a, int b, int c, int d, int e, int f) {
	int numbers[6];
	int i = 0;
	numbers[i] = a;
	numbers[i+1] = b;
	numbers[i+2] = c;
	numbers[i+3] = d;
	numbers[i+4] = e;
	numbers[i+5] = f;
	int maxNum = numbers[0];
	for (i = 1; i < 6; ++i) {
		if (numbers[i] > maxNum) {
			maxNum = numbers[i];
		}
	}
	return maxNum;
}

