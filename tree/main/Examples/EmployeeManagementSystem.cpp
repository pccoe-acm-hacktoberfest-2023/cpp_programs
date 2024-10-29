#include <iostream>
#include <vector>
#include <memory>

class Employee {
protected:
    std::string name;
    int employeeID;
    float salary;

public:
    Employee(const std::string &name, int employeeID) : name(name), employeeID(employeeID), salary(0.0) {}
    virtual ~Employee() {}
    
    virtual void calculateSalary() = 0;
    virtual void display() const = 0;
};

class FullTimeEmployee : public Employee {
    float monthlySalary;

public:
    FullTimeEmployee(const std::string &name, int employeeID, float monthlySalary)
        : Employee(name, employeeID), monthlySalary(monthlySalary) {}

    void calculateSalary() override {
        salary = monthlySalary;
    }

    void display() const override {
        std::cout << "Full-Time Employee: " << name << "\nID: " << employeeID << "\nSalary: $" << salary << "\n\n";
    }
};

class PartTimeEmployee : public Employee {
    float hourlyRate;
    int hoursWorked;

public:
    PartTimeEmployee(const std::string &name, int employeeID, float hourlyRate, int hoursWorked)
        : Employee(name, employeeID), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    void calculateSalary() override {
        salary = hourlyRate * hoursWorked;
    }

    void display() const override {
        std::cout << "Part-Time Employee: " << name << "\nID: " << employeeID << "\nSalary: $" << salary << "\n\n";
    }
};

void addEmployee(std::vector<std::shared_ptr<Employee>> &employees) {
    int type;
    std::string name;
    int id;
    std::cout << "Enter employee name: ";
    std::cin >> name;
    std::cout << "Enter employee ID: ";
    std::cin >> id;
    std::cout << "Enter 1 for Full-Time or 2 for Part-Time: ";
    std::cin >> type;

    if (type == 1) {
        float monthlySalary;
        std::cout << "Enter monthly salary: ";
        std::cin >> monthlySalary;
        auto employee = std::make_shared<FullTimeEmployee>(name, id, monthlySalary);
        employee->calculateSalary();  // Calculate salary immediately
        employees.push_back(employee);
    } else if (type == 2) {
        float hourlyRate;
        int hoursWorked;
        std::cout << "Enter hourly rate: ";
        std::cin >> hourlyRate;
        std::cout << "Enter hours worked: ";
        std::cin >> hoursWorked;
        auto employee = std::make_shared<PartTimeEmployee>(name, id, hourlyRate, hoursWorked);
        employee->calculateSalary();  // Calculate salary immediately
        employees.push_back(employee);
    } else {
        std::cout << "Invalid option.\n";
    }
}

void calculateSalaries(std::vector<std::shared_ptr<Employee>> &employees) {
    for (auto &employee : employees) {
        employee->calculateSalary();
    }
    std::cout << "Salaries calculated.\n";
}

void displayEmployees(std::vector<std::shared_ptr<Employee>> &employees) {
    calculateSalaries(employees);  // Ensure salaries are calculated before displaying
    for (const auto &employee : employees) {
        employee->display();
    }
}

int main() {
    std::vector<std::shared_ptr<Employee>> employees;
    int choice;

    do {
        std::cout << "1. Add Employee\n2. Calculate Salaries\n3. Display Employees\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(employees);
                break;
            case 2:
                calculateSalaries(employees);
                break;
            case 3:
                displayEmployees(employees);
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
