#include <iostream>
#include <cmath>
using namespace std;

void yoyo(int l0, int newL)
{
  //체중증감 = 일일섭취량 - (일일기초대사량 + 일일활동대사량)
  int result = l0 - newL;
  if(result > 0) printf("YOYO");
  else printf("NO");
  
}
//기초대사량 변화를 고려해서 몸무게 계산하는 함수
void calculateWeightBMR(int weight, int l0, int t, int day, int eat, int activity)
{
  int newL = l0;
  for(int i =0; i<day; i++)
    {
      //체중증감 = 일일 섭취량 -(일일 기초대사량 + 일일 활동 대사량)
      int result = eat - (newL + activity);
      weight += result;


      //기초대사량 변화 역치 t 초과시
      if(abs(result) > t) newL += (int)(floor(result/2.0));

      if(weight <= 0 || newL <= 0)
      {
        printf("Danger Diet");
        return;
      }

      //printf("weight %d\t%d newL\tresult %d\n", weight, newL, result);
      
      
    }

  printf("%d %d ", weight, newL);
  yoyo(l0, newL);
  
}
//기초대사량 변화 고려하지 않은 몸무게 계산하는 함수
void calculateWeight(int w0, int l0, int day, int eat, int activity)
{
  int dailyAmount = eat-(l0+activity);
  int total = day*dailyAmount;
  int result = w0+total;

  if(result <= 0) printf("Danger Diet\n");
  else printf("%d %d\n", result, l0);
  
}
int main() {

  int w0 =0, l0 =0, t =0;
  int day = 0, eat=0, activity=0;
  
  scanf("%d %d %d", &w0, &l0, &t);
  scanf("%d %d %d", &day, &eat, &activity);

  calculateWeight(w0, l0, day, eat, activity);
  calculateWeightBMR(w0, l0, t, day, eat, activity);

}
