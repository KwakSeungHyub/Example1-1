#include <iostream>
using namespace std;




void allPlus(int a[], int i) {
    int size = i;
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        sum += a[i];
    }
  
    cout << "������ : " << sum << endl;
    
}
void allAvg(int a[], int i) 
{   
    int size = i;
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        sum += a[i];
    }
    cout << "����� : " << sum / i << endl;
}

int main() {
    // 1. �Է� ���� ������ ���� �� �� �־�� �մϴ�.
    



    int* array = new int[5]();

    int size = 5; 
    cout << "ù��° ������ �Է����ּ��� :";
    cin >> array[0];

    cout << "�ι�° ������ �Է����ּ��� :";
    cin >> array[1];

    cout << "����° ������ �Է����ּ��� :";
    cin >> array[2];

    cout << "�׹�° ������ �Է����ּ��� :";
    cin >> array[3];

    cout << "�ټ���° ������ �Է����ּ��� :";
    cin >> array[4];

    allPlus(array, size);
    allAvg(array, size);
    return 0;
}


