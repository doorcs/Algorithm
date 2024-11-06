#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string vowels = "aiyeou", consonants = "bkxznhdcwgpvjqtsrlmf"; // char 배열이 필요할 땐 그냥 string을 쓰기!!

  string s;
  while (getline(cin, s)) {
    for (const auto& c : s) {
      if (!isalpha(c)) {
        cout << c;
      } else if (isupper(c)) {
        char lo = tolower(c);
        for (int i = 0; i < 6; i++) {
          if (vowels[i] == lo) cout << (char)toupper(vowels[(i+3)%6]);
        }
        for (int i = 0; i < 20; i++) {
          if (consonants[i] == lo) cout << (char)toupper(consonants[(i+10)%20]);
        }
      } else { // lowercase
        for (int i = 0; i < 6; i++) {
          if (vowels[i] == c) cout << vowels[(i+3)%6];
        }
        for (int i = 0; i < 20; i++) {
          if (consonants[i] == c) cout << consonants[(i+10)%20];
        }
      }
    }
    cout << '\n';
  }
}

/* 첫 풀이:

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(false);

  const vector<char>
  vowels{'a', 'i', 'y', 'e', 'o', 'u'},
  consonants{'b', 'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q', 't', 's', 'r', 'l', 'm', 'f'};

  string s;
  while (getline(cin, s)) {
    for (const auto& c : s) {
      if (!isalpha(c)) {
        cout << c;
      } else if (isupper(c)) {
        char lo = tolower(c);
        for (int i = 0; i < vowels.size(); i++) {
          if (vowels[i] == lo) cout << (char)toupper(vowels[(i+3)%6]);
        }
        for (int i = 0; i < consonants.size(); i++) {
          if (consonants[i] == lo) cout << (char)toupper(consonants[(i+10)%20]);
        }
      } else { // lowercase
        for (int i = 0; i < vowels.size(); i++) {
          if (vowels[i] == c) cout << vowels[(i+3)%6];
        }
        for (int i = 0; i < consonants.size(); i++) {
          if (consonants[i] == c) cout << consonants[(i+10)%20];
        }
      }
    }
    cout << '\n';
  }
}

*/
