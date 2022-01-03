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
                arr[j] = 0;//난쟁이 후보들의 키는 자연수이므로 가짜 난쟁이는 임의로 0 대입
                 

                break;//일곱난쟁이 조합이 여러개 가능해도 아무거나 출력해도 괜찮음
                //-> 이코드는 앞에서 부터 순차적으로 제외해보고 처음 나오는 조합이 출력됨
                //하나를 찾으면 더이상 for문을 돌릴 필요가 없음

            }

        }
        if (arr[i] == 0) break;//이미 일곱난쟁이를 다 찾아서 for문을 더 돌릴 필요가 없을 때
    }

    sort(arr, arr + 9);

    for (int i = 2; i < 9; i++)//가짜 난쟁이들의 키 : 0 -> 오름차순 정렬에 의해 index 0, index 1에 저장되어있음
        //-> 2부터 진짜 난쟁이들의 키 오름차순 정렬되어 있음
        printf("%d\n", arr[i]);


}


