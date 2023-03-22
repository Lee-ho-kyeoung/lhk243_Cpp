#include <iostream>
using namespace std;

int main(void){
    int r1, r2, c1, c2; // 행 r, 열 c
    int A[10][10], B[10][10], add[10][10], sub[10][10]; // 행렬 A, B , 합행렬, 차행렬 선언

    cin >> r1 >> c1; // 행렬 A 크기 입력

    for(int i = 0; i < r1; i++){        // 행렬 A 입력
        for(int j = 0; j < c1; j++){
            cin >> A[i][j];
        }
    }

    cin >> r2 >> c2; // 행렬 B 크기 입력

   for(int i = 0; i < r2; i++){         // 행렬 B 입력
        for(int j = 0; j < c2; j++){
            cin >> B[i][j];
        }
    }

    if(r1 == r2 and c1 == c2){      //행렬 크기가 같을 때
        for(int i = 0; i < r1; i++){        // 합행렬, 차행렬 구하기
            for(int j = 0; j < c1; j++){
                add[i][j] = A[i][j] + B[i][j];
                sub[i][j] = A[i][j] - B[i][j];
            }
        }
        for(int i = 0; i < r1; i++){        // 합행렬 출력
            for(int j = 0; j < c1; j++){
                cout << add[i][j] << " ";
            }
            cout << endl;
        }
        for(int i = 0; i < r1; i++){        // 차행렬 출력
            for(int j = 0; j < c1; j++){
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {      // 행렬 크기가 다를 때
        cout << "계산 오류" << endl;
    }
}