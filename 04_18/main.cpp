#include <iostream>
#include <string>

class Animal{
 private:
    std::string name;

 public:
    Animal(std::string name) : name(name) {
        std::cout << "Animal " << name << " was born\n";
    }
    Animal() : Animal("Pet") {}

    virtual void voice() {
        std::cout << "Some sounds\n";
    }

    void sayHiToAnimal(std::string mess) {
        std::cout << "You say \"" << mess << "\" to " << this->name << "!\n";
        /*
            do something
        */
    }

    ~Animal() {
        std::cout << "Animal gone\n";
    }
};

class Dog : public Animal {
 public:
    void voice() {
        std::cout << "GAV GAV!\n";
    }

    Dog(std::string name) : Animal(name) {
        std::cout << "Dog " << name << " was born\n";
    }
    Dog() : Animal() {}

    ~Dog() {
        std::cout << "Dog gone\n";
    }
};


class Cat : public Animal {
 public:
    void voice() {
        std::cout << "maw maw!\n";
    }

    Cat(std::string name) : Animal(name) {
        std::cout << "Cat " << name << " was born\n";
    }
    Cat() : Animal() {}

    ~Cat() {
        std::cout << "Cat gone\n";
    }
};

void saySomeToAnimal(Animal *animal) {
    animal->voice();
    animal->sayHiToAnimal("Hi");
}


int main() {
    Dog some_dog("Шарик");
    Cat some_cat("Киса");

    saySomeToAnimal(&some_dog);
    saySomeToAnimal(&some_cat);
    return 0;
}
