#include <iostream>
using namespace std;

void sort(int *a, const int n); // 선택 정렬 함수
int BinarySearch(int *a, const int x, const int n); // 이원 탐색 함수

int main(void) {
    int N, X, A[10000];
    int res; // 이원 탐색 함수 반환값 변수 

    cin >> N >> X;
    for(int i = 0; i < N; i++){         //수열 A값 입력
        cin >> A[i];
    }

    sort(A, N); // A 수열 선택정렬

    res = BinarySearch(A, X, N); // 이원 탐색 함수 반환값 저장

    if(A[N-1] < X){                 // X값이 A수열 내 값보다 클 때
        cout << "Error" << endl;
    }
    else {
        if(res >= 0) {                          // X 값이 수열 내에 있을 때
            for(int i = res + 1; i < N; i++){
            cout << A[i] << " ";
            }
            cout << endl;
        }
        else {                                  // X 값이 수열 내에 없을 때
            for(int i = res + 1; i < N; i++){
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
}

void sort(int *a, const int n) // 선택 정렬 함수
{
    for(int i = 0; i < n; i++){
        int j = i;
        for(int k = i + 1; k < n; k++){
            if(a[k] < a[j]) {
                j = k;
            }
        }
        swap(a[i], a[j]);
    }
}

int BinarySearch(int *a, const int x, const int n) // 이원 탐색 함수
{
	int left = 0; int right = n-1, check;
    while (left <= right){ 
        int middle = (left + right) / 2;
        
        if (x < a[middle]){
            right = middle - 1;
        }
        else if (x > a[middle]){ 
            left = middle + 1;
            check = middle;
        }
        else {
            return middle;
        }
    }
    return check; // 발견되지 않음
}