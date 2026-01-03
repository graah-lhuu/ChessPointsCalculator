#include <iostream>
using namespace std;

int calculate(int queen, int rook, int bishop, int knight, int pawn) {
	int sum;
	sum = queen * 9 + rook * 5 + bishop * 3 + knight * 3 + pawn;
	return sum;
}

void execution(void) {
	int a[2][5];
	int sum1, sum2;

	cout << "How many pieces do player1 have?" << endl;
	cout << "type in the numbers of queen, rook, bishop, knight and pawn." << endl;

	for (int i = 0; i < 5; i++) {
		cin >> a[0][i];
	}

	sum1 = calculate(a[0][0], a[0][1], a[0][2], a[0][3], a[0][4]);
	cout << "Player1 has " << sum1 << " materials" << endl;
	cout << endl;

	cout << "How many pieces do player2 have?" << endl;
	cout << "type in the numbers of queen, rook, bishop, knight and pawn." << endl;

	for (int i = 0; i < 5; i++) {
		cin >> a[1][i];
	}

	sum2 = calculate(a[1][0], a[1][1], a[1][2], a[1][3], a[1][4]);
	cout << "Player2 has " << sum2 << " materials" << endl;
	cout << endl;

	if (sum1 > sum2) {
		cout << "Player1 has more materials, ";
		cout << sum1 - sum2 << " more materials than player2" << endl;
		
	} else if (sum1 == sum2) {
		cout << "They have same materials" << endl;
	} else {
		cout << "Player2 has more materials, ";
		cout << sum2 - sum1 << " more materials than player1" << endl;
	}

	return;
}
int main(void) {
	execution();
	return 0;
}