#pragma once
#include <string>
#include <iostream>
using namespace std;
class Human
{
public:
    // ���� ������
    std::string known_phrase;

    // ����������� ������
    Human(std::string phrase) {
        known_phrase = phrase;
    }

    // ����������� �����������
    Human() {
        known_phrase = "";
    }

    // ����� ������
    void saySomething() {
        std::cout << known_phrase;
    }

    // ���������� ������
    ~Human() {
        std::cout << "Bye world";
    }
};

