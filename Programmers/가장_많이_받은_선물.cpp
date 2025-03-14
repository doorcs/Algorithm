#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> mp; // 이름 -> 인덱스 매핑
int arr[51][51];
int scores[51];

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    for (int i = 0; i < friends.size(); i++) mp[friends[i]] = i;
    
    for (string it : gifts) {
        stringstream ss(it);
        string name;
        vector<string> splitted;
        while (getline(ss, name, ' ')) splitted.push_back(name); // 그냥 vector<string> split() 함수를 외워서 쓰는게 낫나?
        int src = mp[splitted.front()], dst = mp[splitted.back()];
        scores[src]++, scores[dst]--;
        arr[src][dst]++, arr[dst][src]--;
    }
    
    for (int i = 0; i < friends.size(); i++) {
        int curr = 0;
        for (int j = 0; j < friends.size(); j++) {
            if (arr[i][j] > 0) curr++;
            else if (arr[i][j] == 0) {
                if (scores[i] > scores[j]) curr++;
            }
        }
        if (curr > answer) answer = curr;
    }
    return answer;
}
