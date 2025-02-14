#include<bits/stdc++.h>
#define ll long long

using namespace std;
const ll maxii = 1000000;

/*
solver : sam_in07
date : 2/12/2025
time : 2:33pm
topic : prime factorization
mother topic : Sieve of Eratosthenes




*/


vector<bool> is_prime(maxii + 1, true);




vector<ll> sieve() {
    ll i , j ;

    is_prime[0] = is_prime[1] = false;
    for (i = 2; i * i <= maxii; i++) {
        if (is_prime[i]) {
            for (j = i * i; j <= maxii; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<ll> v;
    for (i = 2; i <= maxii; i++) {
        if (is_prime[i]) {
            v.push_back(i);
        }
    }
    return v;
}


string prime_factorization(ll n, const vector<ll>& v) {
    stringstream result;
    bool first = true;


    for (ll prime : v) {
        if (prime * prime > n) break;

        while (n % prime == 0) {
            if (!first) result << " * ";
            result << prime;
            n /= prime;
            first = false;
        }
    }


    if (n > 1) {
        if (!first) result << " * ";
        result << n;
    }

    return result.str();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    vector<ll> v = sieve();

    ll T;
    cin >> T;

    while (T--) {
        ll n;
        cin >> n;
        cout << prime_factorization(n, v) << endl;
    }

    return 0;
}
