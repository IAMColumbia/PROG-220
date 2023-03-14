#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <vector>
#include <map>
#include <string>

int main() {
  // std::vector<int> a;
  // a.reserve(100);
  // int a[100];
  //
  // for (std::vector<int>::iterator it = a.begin(); it != a.end(); it++) {
  //   std::cout << *it << std::endl;
  // }

  // for (int i : a) {
  //   std::cout << i << std::endl;
  // }

  // std::queue<int> q;
  // q.push(1);
  // q.push(2);
  // q.push(3);
  // q.push(4);

  // while (!q.empty()) {
  //   int v = q.front();
  //   std::cout << v << std::endl;
  //   q.pop();
  // }

  // std::stack<int> s;
  // s.push(1);
  // s.push(2);
  // s.push(3);
  // s.push(4);

  // while (!s.empty()) {
  //   int v = s.top();
  //   std::cout << v << std::endl;
  //   s.pop();
  // }

  // std::set<int> s2;

  // s2.insert(1);
  // s2.insert(5);
  // s2.insert(3);
  // s2.insert(3);
  // s2.insert(5);
  // s2.insert(2);
  // s2.insert(4);
  // s2.insert(6);

  // for (int x : s) {
  //   std::cout << x << std::endl;
  // }

  // std::unordered_set<int> s2;
  // s2.insert(1);
  // s2.insert(5);
  // s2.insert(3);
  // s2.insert(3);
  // s2.insert(5);
  // s2.insert(2);
  // s2.insert(4);
  // s2.insert(6);

  // for (int x : s2) {
  //   std::cout << x << std::endl;
  // }
  //
  std::map<int, std::string> m;
  m.insert(std::pair<int, std::string>(1, "Hello World"));

  std::string s = m[1];
}
