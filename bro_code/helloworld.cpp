#include <iostream>
//https://www.youtube.com/watch?v=-TkoO8Z07hI

// Lesson 1: print output
/*
int main()
{

    std::cout << "Hello world" << '\n';
    std::cout << "My name is Thang" << std::endl;
    std::cout << "End!";
    return 0;
} 
*/

// Lesson 2: variable
/*
int main()
{
    int x; //declare the variable name
    x = 5; //assignment

    int y = 6;
    int sum = x+y;
    std::cout <<x << std::endl;
    std::cout <<y << std::endl;
    std::cout <<sum << std::endl;

    // double
    double price = 10.99;
    std::cout <<price<<std::endl;

    // character
    char grade = 'A';
    std::cout <<grade << std::endl;

    // boolean
    bool state = true;
    std::cout << state << std::endl;

    // string
    std::string name = "Bob";
    std::cout <<name << std::endl;

    std::cout << "Hello "<<name << '\n';
    std::cout << "You are "<<sum << " years old." << std::endl;

    return 0;
}
*/

// Lesson 3: Constant
// tell the compiler to prevent anything from modifying it (read only mode)
/*
int main()
{
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2*PI*radius;

    std::cout << circumference << "cm";
}
*/

// Lesson 4: Namespaces
// Prevent name conflict
/*
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
// int main(){
//     int x = 0;
//     std::cout << x << std::endl;
//     std::cout << first::x << '\n';
//     return 0;
// }

int main(){
    using namespace second;

    std::cout << first::x << std::endl;
    std::cout << x << std::endl;

    return 0;
}
*/
// int main(){
//     using std::cout;
//     using std::string;

//     string name = "Bob";
//     cout << "Hello "<< name;
//     return 0;
// }

// Lesson 5: typedef
// define a type in different name

/*
// // first method
// typedef std::string text_t;
// typedef int number_t;
// // second method
using text_t = std::string;
using number_t = int;

int main(){
    text_t firstName = "Bob";
    number_t age = 20;
    std::cout << firstName << '\n';
    std::cout << age << std::endl;
    return 0;
}
*/

// Lesson 6: Arithmetic operators
/*
int main(){

    int students = 16;
    students += 2;
    students -= 6;
    students *= 5;
    students /= 3;
    std::cout << students << std::endl;

    int remainder = students % 7;
    std::cout << remainder<< std::endl;

    int math = 6 - 5 + 4 * 3 / 2;
    std::cout << math << std:: endl;
    return 0;
}
*/

// Lesson 7: Type Conversion
// convert a value of 1 data type to other data type
/*
int main()
{
    double x = (int) 3.14;
    char y = 100;

    int correct = 8;
    int question = 10;
    double score = correct /(double) question * 100; 
    std::cout <<x ;
    std::cout <<y ;
    std::cout << (char) 101<<'\n';

    std::cout << score << "%";
    return 0;
}
*/

// Lesson 8: User input
// std::cin >>
/*
int main()
{
    std::string name;
    int age;

    std::cout << "What is your name? " << '\n';
    std::cin >> name;
    std::cout << "Hello "<< name << "!"<< '\n';
    std::cout << "How old are you? " << '\n';
    std::cin >> age;
    std::cout << "Your are "<< age << " years old" << std::endl;

    std::string full_name;
    std::cout << "What's your full name? " << '\n';
    std::getline(std::cin >> std::ws, full_name);
    std::cout << "Nice to meet you "<< full_name;

    return 0;
}
*/

// Lesson 9: Usefull math function
// https://cplusplus.com/reference/cmath/
/*
#include <cmath>
int main()
{
    double x = 3.14159;
    double y = 4;
    double z;

    z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(2,5);
    // z = sqrt(9);
    // z = abs(-5);
    // z = round(x);
    // z = ceil(x);
    // z = floor(x);

    std::cout << z;
    return 0;
}
*/
// Lesson 10: Exercise hypothenus calculator
/*
#include <cmath>
int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    // a = pow(a,2);
    // b = pow(b,2);
    // c = sqrt(a+b);
    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "Side C: " << c;
    return 0;
}
*/

// Lesson 11: If statement
/*
int main(){
    int age;
    std::cout<< "How old are you?: ";
    std::cin >> age;
    
    if(age >= 18){
        std::cout << "Welcome to website!";
    }
    else if(age <0){
        std::cout << "You haven't born yet";
    }
    else{
        std::cout << "You are not allow to enter!";
    }
    return 0;
}
*/

// Lesson 12: Switch statement
/*
int main(){
    int month;
    std::cout << "Enter number (1-12):";
    std::cin >> month;
    switch (month)
    {
    case 1:
        std::cout << "January";
        break;
    case 2:
        std::cout << "Febuary";
        break;
    case 3:
        std::cout << "March";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "May";
        break;
    case 6:
        std::cout << "June";
        break;
    case 7:
        std::cout << "Jully";
        break;
    case 8:
        std::cout << "August";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "October";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "December";
        break;
    default:
        std::cout << "Please enter only number (1-12)";
        break;
    }
    return 0;
}
*/
// Lesson 13: Exercise Calculator
/*
int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***** CALCULATOR *****\n";
    std::cout << "Enter operator either (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter #1: ";
    std::cin >> num1;
    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op){
        case '+':
            result = num1+num2;
            std::cout << "result: "<< result << '\n';
            break;
        case '-':
            result = num1-num2;
            std::cout << "result: "<< result << '\n';
            break;
        case '*':
            result = num1*num2;
            std::cout << "result: "<< result << '\n';
            break;
        case '/':
            result = num1/num2;
            std::cout << "result: "<< result << '\n';
            break;
        default : 
            std::cout << "That wasn't an operation!\n";
    }
    std::cout << "***** ********** *****\n";
    return 0;
}
*/
// Lesson 14: Ternary operator ?:
// condition ? expresion 1 : expresion 2
/*
int main(){
    int grade = 55;

    grade >= 60 ? std::cout << "You passed": std::cout << "You failed";

    int number = 9;
    number % 2 == 0 ? std::cout << "Odd": std::cout << "Even";

    bool hungry = false;
    // hungry ? std::cout << "Let's eat." : std::cout << "I'm full.";
    std::cout << (hungry? "Let's eat" : "I'm full");
    return 0;
}
*/

// Lesson 15: Logical operators
/*
int main(){
    double temp;
    bool sunny = true;
    std::cout << "Enter temperature: ";
    std::cin >> temp;

    // if (temp >= 0 && temp <= 30){
    //     std::cout << "Good temperature!";
    // }
    // else{
    //     std::cout << "Bad temperature";
    // }

    if (temp <0 || temp >30){
        std::cout << "Bad temperature \n";
    }
    else{
        std::cout << "Good temperature \n";
    }

    if(!sunny){
        std::cout << "It's cloudy";
    }
    else{
        std::cout << "It's sunny";
    }
    return 0;
}
*/

// Lesson 16: Exercise: Temperature conversion
/*
int main(){
    
    double temp;
    char unit;
    std::cout << "***** Temperature ***** \n";
    std::cout << "F: Fahrentheit \n";
    std::cout << "C: Celsius \n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8*temp)+ 32.0;
        std::cout << "Temperature is: "<< temp << "F \n";
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrentheit: ";
        std::cin >> temp;
        temp = (temp - 32.0)/ 1.8;
        std::cout << "Temperature is: "<< temp << "C \n";
    }
    else{
        std::cout << "Please enter only C or F \n";
    }
    std::cout << "***** *********** *****";
    return 0;
}
*/

// Lesson 17: String methods
/*
int main(){
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    if (name.length() > 10){
        std::cout << "Your name are more than 10 character";
    }
    else if (name.empty()){
        std::cout << "You didn't enter your name.";
    }
    else{
        std::cout << "Welcome " << name << '\n';
    }

    name.append("@gmail.com");
    std::cout << "Your user name: "<< name << '\n';

    std::cout << name.at(0) << '\n';
    std::cout << name.insert(3, "y")<< '\n';
    std::cout << name.find('m') << '\n';
    std::cout << name.erase(0,2) << '\n';
    return 0;
}
*/

// Lesson 18: While loop
/*
int main(){
    std::string name;

    while (name.empty())
    {
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    }
    std::cout << "Hello " << name;
    return 0;
}
*/

// Lesson 19: Do While loop
/*
int main(){
    int number;
    do{
        std::cout << "Enter positibe #: " ;
        std::cin >> number;
    }while(number < 0);
    std::cout << "The # is: " << number;
    
    return 0;
}
*/

// Lesson 20: For loop
/*
int main(){
    // for(int i = 0; i<=3; i++){
    //     std::cout << "HAPPY NEW YEAR! \n";
    // }

    for(int i = 5; i>=0; i --){
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR! \n";
    return 0;
}
*/

// Lesson 21: break; continue
// break will finish the loop; continue will skip and still doing the loop
/*
int main(){
    
    for(int i = 1; i<=15; i++){
        if(i == 13){
            // break;
            continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}
*/

// Lesson 22: Nested loop
/*
int main(){
    for(int i = 1; i <=3; i++){
        for(int j = 1; j<=10; j++){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    
    return 0;
}
*/

// Exercise 22.5: nested loop to printout rectangle shape
/*
int main(){
    int row; 
    int column;
    char symbol = 'x';
    std::cout << "Enter row: ";
    std::cin >> row;
    std::cout << "Enter column: ";
    std::cin >> column;

    for(int i = 1; i<= row; i++){
        for (int j = 1; j <= column; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}
*/

// Lesson 23: random number generator
/*
#include <ctime>
int main(){
    // pseudo-random = NOT truly random (but close)
    srand(time(NULL));
    // rolling dice
    int num1 = (rand()%6) +1;
    int num2 = (rand()%6) +1;
    int num3 = (rand()%6) +1;

    std::cout << "Dice 1: " << num1 << '\n';
    std::cout << "Dice 2: " << num2 << '\n';
    std::cout << "Dice 3: " << num3 << '\n';
    return 0;
}
*/

// Lesson 24: Random event generator
/*
#include <ctime>
int main(){
    // current time
    srand(time(0));

    int randNum = rand()% 4 +1;
    switch(randNum){
        case 1:
            std::cout << "Bronze";
            break;
        case 2:
            std::cout << "Silver";
            break;
        case 3:
            std::cout << "Gold";
            break;
        case 4:
            std::cout << "Diamond";
            break;

    }
    return 0;
}
*/

// Exercise 25: Number guessing game
/*
#include <ctime>
int main(){
    srand(time(NULL));

    int nbr = rand()% 100;
    int guess;
    int tries;

    std::cout << "***** NUMBER GUESSING GAME *****\n";
    do {
        std::cout << "Guess the number between (0-99): ";
        std::cin >> guess;
        tries++;

        if (nbr > guess){
            std::cout << "Higer \n";
        }
        else if (nbr < guess)
        {
            std::cout << "Lower \n";
        }
        else{
            std::cout<< "BINGO: \n";
            std::cout<< "number of try:"<<tries<<"\n";
            std::cout<< "number: "<<guess <<"\n";
        }
    }while (nbr != guess);

    std::cout << "***** ************ ***** \n";
    
    return 0;
}
*/

// Lesson 26: user defined function
// function = a block of reusable code
/*
void sing(std::string name, int age);

int main(){
    std::string name = "Tom";
    int age = 20;
    sing(name, age);
    return 0;
}

void sing(std::string Name, int Age){
    std::cout << "Happy birth day to "<<Name<< "\n";
    std::cout << "Happy birth day to "<<Name<< " \n";
    std::cout << "Happy birth day dear "<<Name<< "\n";
    std::cout << "Happy birth day to "<<Name<< "!!! \n";
    std::cout << "you are "<< Age << " years old \n";
}
*/

// Lesson 27 Return keyword

/*
double square(double length);
double cube(double length);

int main(){
    double length = 5;

    double area = square(length);
    double volumn = cube(length);

    std::cout << "Area: " << area << " cm^2 \n";
    std::cout << "Volumn: " << volumn << " cm^3 \n";
    return 0;
}
double square(double length){
    return length*length;
}
double cube(double length){
    return length*length*length;
}
*/

// Exercise 27.5: concatenate full name
/*
std::string concatenate_name(std::string name1, std::string name2);
int main(){

    std::string firstName = "Thang";
    std::string lastName = "VuHong";
    std::string fullName = concatenate_name(firstName, lastName);

    std::cout<<"Hello " << fullName;
    return 0;
}

std::string concatenate_name(std::string name1, std::string name2){
    return name1 + " " + name2 + "\n";
}
*/

// Lesson 28: Overloaded functions
/*
void bakedPizza();
void bakedPizza(std::string topping);
void bakedPizza(std::string topping1, std::string topping2);

int main(){
    bakedPizza("Pepperoni", "pineapple");
    return 0;
}

void bakedPizza(){
    std::cout << "Pizza is ready!";
}
void bakedPizza(std::string topping1){
    std::cout << topping1 << " Pizza is ready!";
}
void bakedPizza(std::string topping1, std::string topping2){
    std::cout << topping1<< " and " << topping2 << " Pizza is ready!";
}
*/

// Lesson 29: Variable scope
// Local var = declared inside a function or block {}
// Global var = declared outside of all functions 
/*
int number = 2;
void printNumber();
int main(){

    int number = 20;
    printNumber();

    std::cout << number << '\n';
    std::cout << ::number << '\n';

    return 0;
}

void printNumber(){
    std::cout << number << '\n';
}
*/

// Exercise 30: Banking practice programe
/*
#include <iomanip> // precise of float number

void showBalance(double balance);
double deposite();
double withdraw(double balance);
int main(){
    double balance = 20;
    int choise;

    std::cout << "***** ***** ***** \n";
    std::cout << "Welcome \n";
    std::cout << "***** ***** ***** \n";
    std::cout << "1. Show Balance \n";
    std::cout << "2. Deposit money \n";
    std::cout << "3. Withdraw money \n";
    std::cout << "4. Exit\n";

    do{
        std::cout << "Enter your choise: \n";
        std::cin >> choise;

        std::cin.clear();
        fflush(stdin);

        switch (choise){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposite();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you! \n";
                break;
            default:
                std::cout << "Wrong choise \n";
                break;
        }
    }while (choise != 4);

    std::cout << "***** ***** ***** \n";
    
    return 0; 
}

void showBalance(double balance){
    // std::cout<< "Your balance: $" << balance << "\n";
    std::cout<< "Your balance: $" <<std::setprecision(2)<<std::fixed<< balance << "\n";
}
double deposite(){
    double amount;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if (amount >0){
        return amount;
    }else {
        std::cout << "That's not a valid amount \n";
        return 0;
    }
    
}
double withdraw(double balance){
    double amount;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficient fund \n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That's not a valid amount \n";
        return 0;
    }
    else{
        return amount;
    }
}
*/

// Exercise 31: Rock, Paper, Sissors game
/*
#include <ctime>
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char playerChoice = getUserChoice();
    std::cout << "Your choice: "; 
    showChoice(playerChoice);

    char computerChoice = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computerChoice);

    chooseWinner(playerChoice, computerChoice);

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "***** ***** ***** \n";
    std::cout << "Rock, Paper, Sissors game! \n";
    do{
        std::cout << "r. Rock \n";
        std::cout << "p. Paper \n";
        std::cout << "s. Sissors \n";
        std::cout << "Enter your choice: ";
        std::cin >> player;
    } while (player!='r' && player!='p' && player!='s');
    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int nbr = rand()% 3+1;

    switch (nbr){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    switch (choice)
    {
    case 'r': std::cout << "Rock \n";
        break;
    case 'p': std::cout << "Paper \n";
        break;
    case 's': std::cout << "Sissors \n";
        break;
    default: std::cout << "Wrong choice";
        break;
    }
}
void chooseWinner(char player, char computer){
    switch (player)
    {
    case 'r':
        if (computer == 's'){
            std::cout << "player win";
        }else if (computer == 'r'){
            std::cout << "tie";
        }else{
            std::cout << "computer win";
        } break;
    case 'p':
        if (computer == 'r'){
            std::cout << "player win";
        }else if (computer == 'p'){
            std::cout << "tie";
        }else{
            std::cout << "computer win";
        } break;
    case 's':
        if (computer == 'p'){
            std::cout << "player win";
        }else if (computer == 's'){
            std::cout << "tie";
        }else{
            std::cout << "computer win";
        } break;
    default:
        break;
    }
}
void chooseWinner_1(char player, char computer){
    if(player == computer){
        std::cout << "Tie" << std::endl;
    }else if (player == 'r' && computer == 's'){
        std::cout << "You win";
    }else if (player == 'p' && computer == 'r'){
        std::cout << "You win";
    }else if (player == 's' && computer == 'p'){
        std::cout << "You win";
    }else {
        std::cout<< "You lose" << std::endl;
    }
}
*/

// Lesson 32: Arrays 
/*
int main(){

    std::string cars[] = {"Kia", "Merc", "Audi"};

    cars[1] = "Ford";
    // std::cout << cars; // only print out the memory address
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    std::string fruits[3];
    fruits[0] = "Apple";
    fruits[1] = "Banana";
    fruits[2] = "Citron";

    std::cout << fruits[2] << std::endl;
    return 0;
}
*/

// Lesson 33: sizeof() function
// sizeof() = determines the size in bytes of : variable, datatype, class, objects, etc...

/*
int main(){
    double gpa = 2.5;
    std::string name = "tommy";
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Anna", "Bob", "Cleo", "Dave"};

    std::cout << sizeof(double) << " bytes"<< std::endl;
    std::cout << sizeof(gpa) << std::endl;
    std::cout << sizeof(name) << std::endl;
    std::cout << sizeof(grade) << std::endl;
    std::cout << sizeof(student) << std::endl;
    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements"<< std::endl;
    std::cout << sizeof(students)/sizeof(std::string)<< " elements"<< std::endl;
    std::cout << sizeof(students)<< " bytes"<< std::endl;

    return 0;
}
*/

// Lesson 34: Iterate over an array
/*
int main(){
    std::string students[] = {"Ana", "Bob", "Cleo", "Dave"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << std::endl;
    }
    return 0;
}
*/

// Lesson 35: Foreach loop

/*
int main(){
    std::string students[] = {"Anna", "Bob", "Cleo", "Dave"};

    for(std::string student : students){
        std::cout << student << std::endl;
    }
    
    return 0;
}
*/

// Lesson 36: Pass array to a function
/* When put the array as an argument in function; 
array transform to pointer therefore we must define the size of the array too
*/
/*
double getTotal(double prices[], int size);
int main(){
    double prices[] = {4.99, 8.5, 10.6, 15, 19.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << total << " $";

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i <= size; i++){
        total += prices[i];
    }
    return total;
}
*/

// Lesson 37: Search an array for an element

int searchArray(int array[], int size, int guess);
int main(){
    int number[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(number)/sizeof(int);
    int myNum;
    int index;


    std::cout << "***** ***** *****" << std::endl;
    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    index = searchArray(number, size, myNum);
    if(index != -1){
        std::cout << myNum <<" is located at: " << index << std::endl;
    }else{
        std::cout << myNum << " Not in the list" <<std::endl;
    }

    return 0;
}

int searchArray(int array[], int size, int element){
    for(int i=0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}