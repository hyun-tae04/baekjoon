#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		int n, j;
		cin >> n;
		int k = n % 42;
        if(k==0){
            k = -1;
        }
		for (j = 0; j < i; j++) {
			if (v[j] == k) break;
		}
		if (j == i) v.push_back(k);
	}
	cout << v.size();
}