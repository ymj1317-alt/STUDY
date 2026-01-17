#include <stdio.h>

int main(void)
{
    double light_year = 3 * 365 * 24 * 36 * 1e-5;
    double distance_year = (40) / light_year;       //1e-12이 분자 분모에 공통적으로 있어 미리 제거
    double vo_light = (6 * 24 * 365) / (light_year * 1e8);
    double vo_time = distance_year / vo_light;   //걸리는 시간=주어진 거리(광년)/보이저(광년)속도
    printf("보이저로 가려면 얼마의 시간이 걸리는가?[광년] : %.1lf[광년]\n", vo_time);

    return 0;
}