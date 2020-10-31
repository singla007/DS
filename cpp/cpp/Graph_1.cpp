#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addedge(vector<int> g[], int a, int b) {
	g[a].push_back(b);
	g[b].push_back(a);
}
void bfs(vector<int> g[], const int x, int s) {
	bool* visited = new bool[6];
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	cout << s << " ";
	while (!q.empty()) {
		for (auto i = g[q.front()].begin(); i != g[q.front()].end(); i++) {
			if (visited[*i] != 1) {
				cout << *i << " ";
				visited[*i] = 1;
				q.push(*i);
			}
		}
		q.pop();
	}
}

int main() {
	const int V = 5;
	vector<int> g[V];
	addedge(g, 0, 1);
	addedge(g, 0, 2);
	addedge(g, 2, 3);
	addedge(g, 2, 4);
	bfs(g, V, 0);
	return 0;
}