#include <iostream>
using namespace std;


void sort(int a, int numbers[]) {
    int size = _msize(numbers) / sizeof(int);
    cout << "���� �迭";
        for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    } 
     cout << endl;
    int temp = 0;
    //���������� ���
    if (a == 1) {
        for (int i = 0; i < size - 1; i++) { // size��ŭ�� for��
            for (int j = i + 1; j < size; j++) { //for�� �ȿ����� size��ŭ ������, ���⼭�� ���� ���ں��� ���� ���ڸ� ������ �ʿ䰡 �־� i�� 1�� ���ϴ� ������ ó��
                // ���� ���ڰ� ���� ���ں��� Ŭ ��쿡�� �������� ��
                if (numbers[i] > numbers[j]) {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }
    //���������� ���
    else if (a == 2) {
        for (int i = 0; i < size - 1; i++) { // size��ŭ�� for��
            for (int j = i + 1; j < size; j++) { //for�� �ȿ����� size��ŭ ������, ���⼭�� ���� ���ں��� ���� ���ڸ� ������ �ʿ䰡 �־� i�� 1�� ���ϴ� ������ ó��
                // ���� ���ں��� ���� ���ڰ� Ŭ ��쿡�� �������� ��
                if (numbers[i] < numbers[j]) {
                    temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }

    }
    else { cout << "���ڸ� �߸� �Է��ϼ̽��ϴ�." << endl; }
    cout << "���� �� �迭";
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
  
    cout << "������ : " << sum << endl;
    cout << "�Է°� ��ü�� ����� : " << sum / size << endl;
}


int main() {
    // 1. �Է� ���� ������ ���� �� �� �־�� �մϴ�.
    
    int temp = 0;// ��������/�������� �к��� ����
    int length = 0; // ���� �迭 �Ҵ��� ���� ����

    cout << "�Է��� ���� ������ �Է����ּ��� :";
    cin >> length;
    int* array = new int[length]();
    int size = _msize(array) / sizeof(int); 
    // �����迭�� �Ҵ� �� ��� ũ�� * 4byte(int �ڷ����� ũ��)�� �Ҵ�ޱ� ������ int�� ������ ��ŭ ������� ���̸� Ȯ�� ���� 
    // ex) 4�� �Է����� ��� 4*4 = 16�� ����� �־����⶧���� 4���� �Է��ϰ� �ϱ� ���ؼ��� int�� �������� 4�� ������� 4�� ����
    cout <<"�Է��� ���� ����: " << size << endl; 
    for (int a = 0; a < _msize(array) / sizeof(int); a++) {
        cout << "�Է���" << a + 1<< " ��° ������ �Է����ּ��� : ";
        cin >> array[a];
    }
    allPlusAndAvg(array, size);
    
    // �������� �������� ������ ���� �Է°� ó��
    cout << "�������� ������ ���Ͻø� 1, �������� ������ ���Ͻø� 2�� �Է����ּ��� :" << endl;
    cin >> temp;
    
    sort(temp, array);
    return 0;
}


