#pragma once
//calc.h

#ifndef M_PI //아직 정의 하지 않았으면
#define M_PI 3.14159265368979323846 //정의하기
#endif

// 함수 원형 선언하기
double sum(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
int rem(int, int);

// 추가 함수
double power(double base, double expnent);
double squareRoot(double num);
double area0fCircle(double radius);
double circumference0fCircle(double radius);
