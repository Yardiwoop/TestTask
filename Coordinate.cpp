// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#define vniz 37
#define vlevo -10
#include <iostream>

int main()
{
    const int wid = 1920;
    const int height = 1080;
    const int n = 10;
    const int m = 2;

    static int A[n][m] = { {1117, 1080} ,{1161, 523},{1015, 303},{991, 174},{1161, 523},{1161, 523},{1054, 98},{1167, 70},{1189, 32},{1160, 0} };
    float B[n][m];
    for (int i = 0; i < n; i++){
        B[i][0] = vlevo + ((float)(A[i][0] - wid / 2)*60/wid) ;
        B[i][1] = vniz - ((float)A[i][1] - height / 2)*40/height;
        float dal = 3*tanf(B[i][1] * M_PI / 180);
        float x = sinf(B[i][0] * M_PI / 180) * dal;
        float y = cosf(B[i][1] * M_PI / 180) * dal;
        B[i][0] = x;
        B[i][1] = y;
    }
    for (int i = 0; i < n; i++) std::cout << B[i][0]<<" " << B[i][1] <<  std::endl;

}


