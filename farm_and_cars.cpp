// program stores information about animals on the farm
// animals: cat, goat, cow
// properties: species, name, age [years]
#include <iostream>
using namespace std;

    class Animal
        {
        public:
            // atributes
            string species;
            string name;
            int age;

            //methods
            void add_animal()
                {
                cout<<"Adding new animal do database: "<<endl;
                cout<<"Please insert a species of new animal: ";
                cin>>species;
                cout<<"Please insert a name of new animal: ";
                cin>>name;
                cout<<"Please insert age of new animal: ";
                cin>>age;
                }

            void give_voice()
                {
                    if (species=="cat") cout<<name<<" age "<<age<<": Meow!"<<endl;
                    else if (species=="goat") cout<<name<<" age "<<age<<": Beee!"<<endl;
                    else if (species=="cow") cout<<name<<" age "<<age<<": Mooo!"<<endl;
                    else cout<<"Unknown species!"<<endl;

                }
        };

    class Car
        {
        public:
            string producer;
            string model;
            int year_of_production;
            int mileage;

            void read()
            {
                cout<<" Adding new car to database: "<<endl;
                cout<<" Please insert the producer of your car: "<<endl;
                cin>>producer;
                cout<<" Please insert the model of your car: "<<endl;
                cin>>model;
                cout<<" Please insert the year of production of your car: "<<endl;
                cin>>year_of_production;
                cout<<" Please insert the mileage of your car: "<<endl;
                cin>>mileage;
            }

            void print()
            {
                cout<<"Your car is: "<<endl;
                cout<<producer<<": "<<model<<" "<<" produced: "<<year_of_production<<" it has "<<mileage<<" km of mileage"<<endl;
            }
        };

int main() {
    Animal a1; // making an object: a1
    a1.add_animal();
    a1.give_voice();

    Animal a2;
    a2.add_animal();
    a2.give_voice();

    Car s1;
    s1.read();
    s1.print();

    Car s2;
    s2.read();
    s2.print();
    return 0;
}
