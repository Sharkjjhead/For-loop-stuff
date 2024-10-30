#include<iostream>
using namespace std;
void drawbox();
void printname(string name);
void drawline(int line);
int hourstoseconds(int h2s);
int findMax(int x, int y, int z);
int main() {

	drawbox();
	printname("JJ");
	drawline(2);
	cout << hourstoseconds(2) << endl;
	cout<<findMax(1,5,9)<<endl;
}
void drawbox() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void printname(string name) {
	cout << "hello " << name << endl;
}
void drawline(int line) {
	for (int i = 0; i < line; i++) {
		cout << "-" << " ";
	}
}
int hourstoseconds(int h2s) {
	int ans = 60 * h2s;
	return ans;
}
int findMax(int x, int y, int z) {
	if (x > y && x > z)
		return x;
	if (y > x && y > z)
		return y;
	if (z > y && z > x)
		return z;
}