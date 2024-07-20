class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int res = students.size();

      queue<int> q;
      for (const auto& it : students) q.push(it);

      int idx = 0, rep = 0;
      while (idx < students.size()) {
        if (sandwiches[idx] == q.front()) {
          res--; idx++;
          q.pop();
          rep = 0;
        } else {
          rep++;
          if (rep > q.size()) break;
          int tmp = q.front();
          q.pop();
          q.push(tmp);
        }
      }

      return res;
    }
};

// circular = 0, square = 1
