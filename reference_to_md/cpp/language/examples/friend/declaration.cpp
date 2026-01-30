#include <iostream>
#include <string>

// ============================================
// Friend: grants access to private & protected members
// Uses: | class body
// ============================================

// 1. friend function
class BankAccount
{
private:
    std::string owner;
    double balance;

protected:
    std::string account_number;

public:
    BankAccount(const std::string& owner_, double balance_)
        : owner(owner_), balance(balance_), account_number("ACC-12345") {}

    // 1.1 friend function declaration
    //      → grants access to private & protected members
    friend void print_account_details(const BankAccount& acc);

    // 1.2 friend function definition AVAILABLE ALSO | class body
    friend void add_interest(BankAccount& acc, double rate)
    {
        acc.balance += acc.balance * rate;      // balance      private member
        std::cout << "Interest added. New balance: $" << acc.balance << std::endl;
    }
};

// friend function definition -- from -- PREVIOUSLY being declared | class body
void print_account_details(const BankAccount& acc)
{
    std::cout << "Account Details:" << std::endl;
    std::cout << "  Owner: " << acc.owner << std::endl;                     // private member
    std::cout << "  Balance: $" << acc.balance << std::endl;                // private member
    std::cout << "  Account #: " << acc.account_number << std::endl;        // protected member
}

// 2. friend class accessing private & protected members
// Forward declaration for friend class example
class Mechanic;

class Car
{
private:
    std::string model;
    int engine_temp;
    bool engine_running;

protected:
    std::string vin;

public:
    Car(const std::string& model_)
        : model(model_), engine_temp(90), engine_running(false), vin("VIN123456") {}

    // 2.1 friend class declaration | class body
    //      → grants Mechanic access -- to -- Car's private & protected members
    friend class Mechanic;

    void display() const
    {
        std::cout << "Car: " << model << std::endl;
    }
};

// 2.1.1 friend class can access Car's private & protected members
class Mechanic
{
    std::string name;

public:
    Mechanic(const std::string& name_) : name(name_) {}

    // access Car's private members
    void diagnose(const Car& car) const
    {
        std::cout << "\nMechanic " << name << " diagnosing:" << std::endl;
        std::cout << "  Model: " << car.model << " (private)" << std::endl;
        std::cout << "  Engine temp: " << car.engine_temp << "°C (private)" << std::endl;
        std::cout << "  Running: " << (car.engine_running ? "Yes" : "No") << " (private)" << std::endl;
        std::cout << "  VIN: " << car.vin << " (protected)" << std::endl;
    }

    // can modify Car's private members
    void start_engine(Car& car) const
    {
        std::cout << "\nMechanic " << name << " starting engine..." << std::endl;
        car.engine_running = true;  // Access private member
        car.engine_temp = 120;       // Modify private member
        std::cout << "  Engine started!" << std::endl;
    }

    void stop_engine(Car& car) const
    {
        car.engine_running = false;
        car.engine_temp = 90;
    }
};

int main()
{
    std::cout << "=== Friend: Access Grant Examples ===" << std::endl;
    std::cout << std::endl;

    // Example 1: Friend function
    std::cout << "1. Friend Function Example:" << std::endl;
    BankAccount acc("Alice", 1000.0);
    print_account_details(acc);  // Can access private & protected members
    add_interest(acc, 0.05);
    std::cout << std::endl;

    // Example 2: Friend class
    std::cout << "2. Friend Class Example:" << std::endl;
    Car car("Toyota Corolla");
    car.display();

    Mechanic mechanic("Bob");
    mechanic.diagnose(car);       // Can access ALL private & protected members
    mechanic.start_engine(car);   // Can modify private members
    mechanic.diagnose(car);
    std::cout << std::endl;

    std::cout << "=== Summary ===" << std::endl;
    std::cout << "✓ Friend function: grants access to private & protected members" << std::endl;
    std::cout << "✓ Friend class: grants ALL members access to private & protected" << std::endl;
    std::cout << "✓ Friend declarations appear | class body" << std::endl;

    return 0;
}
