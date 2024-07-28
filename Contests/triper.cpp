#include <bits/stdc++.h>
using namespace std;

constexpr bool legendre(int64_t n) {
  while (!(n & 3)) n >>= 2;
  return n % 8 != 7;
}

vector<int> sieve_primes(int until) {
  vector<int> pd(until + 1);
  iota(pd.begin(), pd.end(), 0);
  for (int d = 2; d * d <= until; ++d) {
    if (pd[d] != d) {
      continue;
    }
    for (int m = d * d; m <= until; m += d) {
      pd[m] = d;
    }
  }
  vector<int> primes;
  for (int d = 2; d <= until; ++d) {
    if (pd[d] == d) {
      primes.push_back(d);
    }
  }
  return primes;
}

template <typename T>
struct static_set {
 public:
  static_set() {}
  explicit static_set(const vector<T>& vals) : raw(vals) {}
  void insert(const T& val) { raw.push_back(val); }

  int dedup() {
    sort(raw.begin(), raw.end());
    raw.erase(unique(raw.begin(), raw.end()), raw.end());
    return raw.size();
  }

  bool contains(const T& val) const {
    const auto it = lower_bound(raw.cbegin(), raw.cend(), val);
    return it != raw.cend() && *it == val;
  }

 private:
  vector<T> raw;
};

int main() {
  cin.tie(0)->sync_with_stdio(0);

  auto primes = sieve_primes(100'000);
  primes.erase(primes.begin());

  static_set<int64_t> squares;
  for (const auto first : primes) {
    squares.insert(first * 1ll * first);
  }

  int t; cin >> t; while (t--) {
    int64_t n;
    cin >> n;

    if (!n || !legendre(n)) {
      cout << "No\n";
      continue;
    }

    bool found = false;
    for (const auto second : primes) {
      const auto second_square = second * 1ll * second;
      const auto first_square = n - 4 - second_square;
      if (first_square <= second_square) {
        break;
      }
      if (squares.contains(first_square)) {
        cout << "Yes\n";
        found = true;
        break;
      }
    }

    if (!found) {
      cout << "No\n";
    }
  }
}