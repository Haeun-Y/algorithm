#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{

    int arr[9] = { 0 };
    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf_s("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (100 == sum - arr[i] - arr[j])
            {
                arr[i] = 0;
                arr[j] = 0;//������ �ĺ����� Ű�� �ڿ����̹Ƿ� ��¥ �����̴� ���Ƿ� 0 ����
                 

                break;//�ϰ������� ������ ������ �����ص� �ƹ��ų� ����ص� ������
                //-> ���ڵ�� �տ��� ���� ���������� �����غ��� ó�� ������ ������ ��µ�
                //�ϳ��� ã���� ���̻� for���� ���� �ʿ䰡 ����

            }

        }
        if (arr[i] == 0) break;//�̹� �ϰ������̸� �� ã�Ƽ� for���� �� ���� �ʿ䰡 ���� ��
    }

    sort(arr, arr + 9);

    for (int i = 2; i < 9; i++)//��¥ �����̵��� Ű : 0 -> �������� ���Ŀ� ���� index 0, index 1�� ����Ǿ�����
        //-> 2���� ��¥ �����̵��� Ű �������� ���ĵǾ� ����
        printf("%d\n", arr[i]);


}


