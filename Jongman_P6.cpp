//JM_book P6 Rock Festival
#include<iostream>
using namespace std;


int main() {
	double min = 100000;
	int C;
	int N;
	int L;

	int Psum[1000 + 1] = {0};		//N일까지의 합

	cin >> C;

	for (int i = 0; i < C; i++) {

		cin >> N >> L;
		for (int j = 1; j <= N; j++) {		//solve [start:end] claculating using  O[1]
			
			int tmp;
			cin >> tmp;
			Psum[j] = Psum[j - 1] + tmp;
			
		}
		
		for (int i = 0; i < N;i++) {	//start - 1
			
			for (int j = L; j <= N;j++) {	//How long
				if (i + j > N) break;
				if (min > (double)(Psum[i + j] - Psum[i]) / j)
					min = (double)(Psum[i + j] - Psum[i]) / j;
					
			}
		}
		cout << fixed;			// 절대/상대오차 표기법
		cout.precision(10);
		cout << min<<endl;

	}
}

//https://seongjuk.tistory.com/entry/%EC%A2%85%EB%A7%8C%EB%B6%81-%EB%A1%9D-%ED%8E%98%EC%8A%A4%ED%8B%B0%EB%B2%8C
//https://aorica.tistory.com/13
