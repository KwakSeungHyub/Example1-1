#include <iostream>
using namespace std;




void allPlus(int a[], int i) {
    int size = i;
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        sum += a[i];
    }
  
    cout << "총합은 : " << sum << endl;
    
}
void allAvg(int a[], int i) 
{   
    int size = i;
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        sum += a[i];
    }
    cout << "평균은 : " << sum / i << endl;
}

int main() {
    // 1. 입력 받은 성적를 저장 할 수 있어야 합니다.
    



    int* array = new int[5]();

    int size = 5; 
    cout << "첫번째 정수를 입력해주세요 :";
    cin >> array[0];

    cout << "두번째 정수를 입력해주세요 :";
    cin >> array[1];

    cout << "세번째 정수를 입력해주세요 :";
    cin >> array[2];

    cout << "네번째 정수를 입력해주세요 :";
    cin >> array[3];

    cout << "다섯번째 정수를 입력해주세요 :";
    cin >> array[4];

    allPlus(array, size);
    allAvg(array, size);
    return 0;
}


