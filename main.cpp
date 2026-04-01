#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt1,int cnt2) {
   cout << cnt1+cnt2;
}

int main() {
   cin >> N >> M;
   func(N,M);
}
