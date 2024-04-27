#include <iostream>

class Animal {
public:
    virtual void speak() const = 0; 
};

class Dog : public virtual Animal {
public:
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public virtual Animal {
public:
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};

class DogCat : public Dog, public Cat {
public:
    void speak() const override {
        Dog::speak();
        Cat::speak();
    }
};

int main() {
    DogCat dogcat;
    dogcat.speak();

    Animal* animal = &dogcat;
    animal->speak();

    return 0;
}