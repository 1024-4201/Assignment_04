#include<iostream>
#include"Rectangle.h"

Rectangle::Rectangle(int length,int width)//ʹ�������������г�ʼ��
{
    setlength(length);
    setwidth(width);
}
int Rectangle::perimeter()
{
    int perimeter;
    perimeter = 2*lengthdata+2*widthdata;//�����ܳ�
    return perimeter;
}
int Rectangle::area()
{
    int area;
    area = lengthdata*widthdata;//�������
    return area;
}
void Rectangle::setlength(int length)
{
    lengthdata = length;
}
void Rectangle::setwidth(int width)
{
    widthdata = width;
}
int Rectangle::getlength()
{
    return lengthdata;//���س���
}
int Rectangle::getwidth()
{
    return widthdata;//���ؿ��
}




