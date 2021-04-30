﻿#include "iostream"

class Human {
private:
    friend std::string steal_phrase(Human human);
    // поле класса
    std::string known_phrase;
public:
    // конструктор класса
    Human(std::string phrase) {
        known_phrase = phrase;
    }
    // метод класса
    void saySomething() {
        std::cout << known_phrase;
    }

    // деструктор класса
    ~Human() {
        std::cout << "Bye world";
    }
};

// дружественная функция
std::string steal_phrase(Human human) {
    std::string temp = human.known_phrase;
    human.known_phrase = "phrase was stolen";
    return temp;
}

int main() {
    // создание объекта
    Human human_obj = Human("Hello world\n");
    human_obj.saySomething();
    return 0;
}
// был вызан деструктор
