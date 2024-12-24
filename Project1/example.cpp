#include <iostream>
using namespace std;


void sort(int a, int numbers[]) {
    int size = _msize(numbers) / sizeof(int);
    cout << "현재 배열";
        for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    } 
     cout << endl;
    int temp = 0;
    //오름차순일 경우
    if (a == 1) {
        for (int i = 0; i < size - 1; i++) { // size만큼의 for문
            for (int j = i + 1; j < size; j++) { //for문 안에서도 size만큼 돌지만, 여기서는 현재 숫자보다 뒤의 숫자를 가져올 필요가 있어 i에 1을 더하는 것으로 처리
                // 앞의 숫자가 뒤의 숫자보다 클 경우에만 재정렬을 함
                if (numbers[i] > numbers[j]) {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }
    //내림차순일 경우
    else if (a == 2) {
        for (int i = 0; i < size - 1; i++) { // size만큼의 for문
            for (int j = i + 1; j < size; j++) { //for문 안에서도 size만큼 돌지만, 여기서는 현재 숫자보다 뒤의 숫자를 가져올 필요가 있어 i에 1을 더하는 것으로 처리
                // 앞의 숫자보다 뒤의 숫자가 클 경우에만 재정렬을 함
                if (numbers[i] < numbers[j]) {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }

    }
    else { cout << "숫자를 잘못 입력하셨습니다." << endl; }
    cout << "정렬 후 배열";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void allPlusAndAvg(int a[], int i) {
    int size = i;
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        sum += a[i];
    }
  
    cout << "총합은 : " << sum << endl;
    cout << "입력값 전체의 평균은 : " << sum / size << endl;
}


int main() {
    // 1. 입력 받은 성적를 저장 할 수 있어야 합니다.
    
    int temp = 0;// 오름차순/내림차순 분별용 변수
    int length = 0; // 동적 배열 할당을 위한 변수

    cout << "입력할 정수 갯수를 입력해주세요 :";
    cin >> length;
    int* array = new int[length]();
    int size = _msize(array) / sizeof(int); 
    // 동적배열을 할당 할 경우 크기 * 4byte(int 자료형의 크기)로 할당받기 때문에 int의 사이즈 만큼 나눠줘야 길이를 확인 가능 
    // ex) 4를 입력했을 경우 4*4 = 16의 사이즈가 주어지기때문에 4개를 입력하게 하기 위해서는 int의 사이즈인 4로 나눠줘야 4가 나옴
    cout <<"입력할 정수 갯수: " << size << endl; 
    for (int a = 0; a < _msize(array) / sizeof(int); a++) {
        cout << "입력할" << a + 1<< " 번째 정수를 입력해주세요 : ";
        cin >> array[a];
    }
    allPlusAndAvg(array, size);
    
    // 오름차순 내림차순 구분을 위해 입력값 처리
    cout << "오름차순 정렬을 원하시면 1, 내림차순 정렬을 원하시면 2를 입력해주세요 :" << endl;
    cin >> temp;
    
    sort(temp, array);
    return 0;
}


