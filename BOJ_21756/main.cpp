#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n;
vi arr;
vi brr;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	arr = vi(n);
	for (auto i = 1; i <= n; ++i) {
		arr[i - 1] = i;
	}

	while (1 < arr.size()) {
		brr.clear();

		for (auto i = 1; i <= arr.size(); ++i) {
			if (0 == i % 2) {
				brr.push_back(arr[i - 1]);
			}
		}

		arr = brr;
	}

	cout << arr[0];

	return 0;
}