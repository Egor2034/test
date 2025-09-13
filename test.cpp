#include <iostream>

class Animal {
public:
    Animal() : weight(-1), name("") {}

    Animal(std::string name, float weight) {
        this->name = name;
        this->weight = weight;
    }

    void print() {
        std::cout << name << ": " << weight << "\n";
    }
private:
    float weight;
    std::string name;
};

class Cat : public Animal {
private:
    using Animal::Animal;
};

class Dog : public Animal {
private:
    using Animal::Animal;
};

int main() {
    Cat cat{"Стёпа", 5.5};
    Dog dog("Боня", 45);

    cat.print();
    dog.print();

    return 0;
}