#include<iostream>
#include<random>
#include<string>
#include<cstdlib>
#include<time.h>


using namespace std;

class ExceptionHandler
{
public:
    string msg;
    ExceptionHandler(string msg)
    {
        this->msg = msg;
    }
    void showException()
    {
        cout << "Try again after sometimes" << endl;
    }
};

class User
{
public:
    string userId;
    static int cnt;

    static User& getInstance(string userId)
    {
        static User instance(userId);
        return instance;
    }

    void display()
    {
        cout << this->userId << endl;
    }

    void login()
    {
        string password;
        cout << endl;
        cout << "       " << "enter the password: " << " ";
        cin >> password;
        if (password == "car@1008")
        {
            cout << endl;
            cout << endl;
            cout << "      " << "----------------------------" << "WELCOME TO CAR RENTAL SYSTEM" << "-------------------------" << endl;
            cout << endl;
            cout << endl;
        }
        else if (password != "car@1008")
        {
            cnt++;
            cout << "         " << "Incorrect password" << endl;
            if (cnt > 3)
            {
                throw ExceptionHandler("Try again after sometimes");
            }
            login();
        }
    }
private:
    User(string userId)
    {
        this->userId = userId;
    }
};

int User::cnt = 0;
int arr[2]={0};

class CarSpecification
{
   public:
       string fuelType;
       int capacity;
       string fuelEff;
       string colour;
       CarSpecification(){ }
    CarSpecification(string fuelType,int capacity,string fuelEff,string colour)
    {
        this->fuelType=fuelType;
        this->capacity=capacity;
        this->fuelEff=fuelEff;
        this->colour=colour;
    }

    static void ToyotaEtiosSep(CarSpecification *csarr1,int n)
    {

        for(int i=0;i<n;i++)
        {
            cout<<"       "<<"Enter "<<i+1<<" for "<<csarr1[i].fuelType<<" "<<csarr1[i].capacity<<" "<<csarr1[i].fuelEff<<" "<<csarr1[i].colour<<endl;
        }

    }

    void chooseToyotaEtiosSpe(CarSpecification csarr1[])
    {
        int m=0;
        int op;
        while(m!=1)
        {
           cout<<endl;
           cout<<"       "<<"choose a specification ";
           cin>>op;
           int m1=op-1;
           arr[0]=m1+1;
           switch(op)
           {
               case 1:cout << "       " << "You have chosen the " << csarr1[m1].fuelType<<" "<<csarr1[m1].capacity<<" "<<csarr1[m1].fuelEff<<" "<<csarr1[m1].colour<<" ToyotaEtios Car"<<endl;
                       break;
               case 2:  cout<<"       "<<"You have choosen the "<<csarr1[m1].fuelType<<" "<<csarr1[m1].capacity<<" "<<csarr1[m1].fuelEff<<" "<<csarr1[m1].colour<<" ToyotaEtios Car"<<endl;
                        break;
               case 3:  cout<<"       "<<"You have choosen the "<<csarr1[m1].fuelType<<" "<<csarr1[m1].capacity<<" "<<csarr1[m1].fuelEff<<" "<<csarr1[m1].colour<<" ToyotaEtios Car"<<endl;
                        break;
               case 4: exit(0);
           }
           m++;
        }
    }

    static void ToyotaGlanzaSep(CarSpecification *csarr2,int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"       "<<"Enter "<<i+1<<" for "<<csarr2[i].fuelType<<" "<<csarr2[i].capacity<<" "<<csarr2[i].fuelEff<<" "<<csarr2[i].colour<<endl;
        }
    }
    void chooseToyotaGlanzasSpe(CarSpecification csarr2[])
    {
        int m=0;
        int op;
        while(m!=1)
        {
           cout<<endl;
           cout<<"       "<<"choose a specification ";
           cin>>op;
           int m1=op-1;
           arr[0]=m1+1;
           switch(op)
           {
               case 1:cout << "       " << "You have chosen the " << csarr2[m1].fuelType<<" "<<csarr2[m1].capacity<<" "<<csarr2[m1].fuelEff<<" "<<csarr2[m1].colour<<" ToyotaGlanza car"<<endl;
                       break;
               case 2:  cout<<"       "<<"You have choosen the "<<csarr2[m1].fuelType<<" "<<csarr2[m1].capacity<<" "<<csarr2[m1].fuelEff<<" "<<csarr2[m1].colour<<" ToyotaGlanza car"<<endl;
                        break;
               case 3:  cout<<"       "<<"You have choosen the "<<csarr2[m1].fuelType<<" "<<csarr2[m1].capacity<<" "<<csarr2[m1].fuelEff<<" "<<csarr2[m1].colour<<" ToyotaGlanza car"<<endl;
                        break;
               case 4: exit(0);
           }
           m++;
        }
    }

    static void HyundaiSep(CarSpecification *csarr3,int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"       "<<"Enter "<<i+1<<" for "<<csarr3[i].fuelType<<" "<<csarr3[i].capacity<<" "<<csarr3[i].fuelEff<<" "<<csarr3[i].colour<<endl;

        }
    }
    void chooseHyundaiSpe(CarSpecification csarr3[])
    {
        int m=0;
        int op;
        while(m!=1)
        {
           cout<<endl;
           cout<<"       "<<"choose a specification ";
           cin>>op;
           int m1=op-1;
           arr[0]=m1+1;
           switch(op)
           {
               case 1:cout << "       " << "You have chosen the " << csarr3[m1].fuelType<<" "<<csarr3[m1].capacity<<" "<<csarr3[m1].fuelEff<<" "<<csarr3[m1].colour<<" Hyundai car"<<endl;
                       break;
               case 2:  cout<<"       "<<"You have choosen the "<<csarr3[m1].fuelType<<" "<<csarr3[m1].capacity<<" "<<csarr3[m1].fuelEff<<" "<<csarr3[m1].colour<<" Hyundai Car"<<endl;
                        break;
               case 3:  cout<<"       "<<"You have choosen the "<<csarr3[m1].fuelType<<" "<<csarr3[m1].capacity<<" "<<csarr3[m1].fuelEff<<" "<<csarr3[m1].colour<<" Hyundai Car"<<endl;
                        break;
               case 4: exit(0);
           }
           m++;
        }
    }

    static void FordSep(CarSpecification *csarr4,int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"       "<<"Enter "<<i+1<<" for "<<csarr4[i].fuelType<<" "<<csarr4[i].capacity<<" "<<csarr4[i].fuelEff<<" "<<csarr4[i].colour<<endl;

        }
    }
    void chooseFordSpe(CarSpecification csarr4[])
    {
        int m=0;
        int op;
        while(m!=1)
        {
           cout<<endl;
           cout<<"       "<<"choose a specification ";
           cin>>op;
           int m1=op-1;
           arr[0]=m1+1;
           switch(op)
           {
               case 1:cout << "       " << "You have chosen the " << csarr4[m1].fuelType<<" "<<csarr4[m1].capacity<<" "<<csarr4[m1].fuelEff<<" "<<csarr4[m1].colour<<" Ford Car"<< endl;
                       break;
               case 2:  cout<<"       "<<"You have choosen the "<<csarr4[m1].fuelType<<" "<<csarr4[m1].capacity<<" "<<csarr4[m1].fuelEff<<" "<<csarr4[m1].colour<<" Ford Car"<<endl;
                        break;
               case 3:  cout<<"       "<<"You have choosen the "<<csarr4[m1].fuelType<<" "<<csarr4[m1].capacity<<" "<<csarr4[m1].fuelEff<<" "<<csarr4[m1].colour<<" Ford Car"<<endl;
                        break;
               case 4: exit(0);
           }
           m++;
        }
    }
    int sepchoosen()
    {
        return arr[0];
    }
};

string carName;
string carModel;
class Car
{
public:
    string cName;
    string model;
    int n;
    CarSpecification *cs;

    Car(){ }

    Car(string cName,string model)
    {
        this->cName=cName;
        this->model=model;
    }

    void displayCarDetails()
    {
        cout<<"       "<<"You have choosen "<<this->cName<<" "<<this->model<<endl;
        carName=this->cName;
        carModel=this->model;
        cout<<endl;
    }

    void selctedCarModel()
    {
        cout<<"       "<<"| Car Model. :----------------------------| "<<carModel<<"        |"<<endl;
        cout<<"       "<<"| Car Name. :-----------------------------| "<<carName<<"       |"<<endl;
    }
     void displaycar()
    {
            cout<<endl;
            cout<<"       "<<"Please Select a Car"<<endl;
            cout<<"       "<<"Enter 1 for Toyota etios"<<endl;
            cout<<"       "<<"Enter 2 for Toyota Glanza"<<endl;
            cout<<"       "<<"Enter 3 for Hyundai Creta"<<endl;
            cout<<"       "<<"Enter 4 for Ford Figo"<<endl;
            cout<<endl;
    }
    void displayCarChoosen(int n,Car carr[])
    {
        if(n==1)
        {
            carr[n-1].displayCarDetails();
        }
        else if(n==2)
        {
            carr[n-1].displayCarDetails();
        }
        else if(n==3)
        {
            carr[n-1].displayCarDetails();
        }
        else if(n==4)
        {
            carr[n-1].displayCarDetails();
        }
    }
    int displayoption(Car carr[])
    {
        cout<<"       "<<"Choose a Car from the above options:";
        cin>>n;
         //cout<<endl;
        Car::displayCarChoosen(n,carr);
        return n;
   }

   int displayN()  ///car Number
   {
       return n;
   }

   int carSpecNumber()   ///car specification number
   {
       return cs->sepchoosen();
   }
};
string name;
class Customer
{
public:
    User& user;

    Customer(string userId) : user(User::getInstance(userId))
    { }
    void setName()
    {
        cout<<"       "<<"Please Customer Name:"<<" ";
        cin>>name;

    }
    void getName()    ///customer name
    {
        cout<<"       "<<"| Customer Name. :------------------------| "<<name<<"        |"<<endl;
    }
    int displayCustomer1(Car ca)   ///print the car number
    {

        return ca.displayN();
    }
   void login()
    {
        user.login();
    }
};
string agree;
int agremch;
int noday;
int dmch;
class BeforePayment
{
public:
    int damageCharge;
    int laterReturnCharge;

    BeforePayment(int damageCharge,int laterReturnCharge)
    {
        this->damageCharge=damageCharge;
        this->laterReturnCharge=laterReturnCharge;
    }
    void diplayBeforePaymentDetail()
    {
        cout<<"       "<<"damageCharge is: "<<damageCharge<<endl;
        cout<<"       "<<"laterReturnCharge is: "<<laterReturnCharge<<endl;
        agremch=laterReturnCharge;
        dmch=damageCharge;
    }
    int laterReturnChargeis()
    {
        return agremch;
    }
    int additionldamage()
    {
        return dmch;
    }
    void aggrement()
    {
        cout<<endl;
        cout<<"       "<<"Are you agree with these condition :";
        cin>>agree;
    }
    string agreementValue()
    {
        return agree;
    }
};

int toaAmt;
int toaAmt1;
int m1,m2,m3;
int p1,p2,p3;
string rentDate1;
int advanceAmt1;
int numDays1;
int tAmount;
int totalRentAmount2;
class Rent
{
public:
    int rentDay;
    int rentMonth;
    int rentYear;
    int advanceAmt;
    int numDays;
    int rentPrice;
    Customer *cust;
    BeforePayment *bpay;
    Rent() { }
    Rent(int rentPrice)
    {
        this->rentPrice=rentPrice;
        tAmount=this->rentPrice;
    }
    bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

void addDaysToDate(int& day, int& month, int& year, int& daysToAdd) {
    while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth(month, year);
        int remainingDaysInMonth = daysInCurrentMonth - day + 1;

        if (daysToAdd >= remainingDaysInMonth) {
            daysToAdd -= remainingDaysInMonth;
            day = 1;
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        } else {
            day += daysToAdd;
            daysToAdd = 0;
        }
    }
    p1=day;
    p2=month;
    p3=year ;
  }

    void getData()
    {
        cout<<"       "<<"Per Day Charge To Rent a Car is : 1000 "<<endl;
        cout<<endl;
        cout<<"       "<<"Enter Day on which you are Renting the Car : ";
        cin>>rentDay;
        m1=rentDay;
        cout<<"       "<<"Enter Month on which you are Renting the Car : ";
        cin>>rentMonth;
        m2=rentMonth;
        cout<<"       "<<"Enter Year on which you are Renting the Car : ";
        cin>>rentYear;
        m3=rentYear;
        cout<<"       "<<"Enter Number of Days to Rent : ";
        cin>>numDays;
        numDays1=numDays;
        int totalRentAmount2=tAmount*numDays1;
        cout<<"       "<<"Your total Rent Amount is : "<<totalRentAmount2<<endl;
        int  toaAmt1=0.3*totalRentAmount2;
        cout<<"       "<<"You need to Pay 30% Advance Amount : "<<toaAmt1<<endl;
        advanceAmt1=toaAmt1;
        cout<<endl;
        Rent::addDaysToDate(rentDay,rentMonth,rentYear,numDays);
    }
     void rentPriceIs()
    {
         cout<<"       "<<"| Rent Date. :----------------------------| "<<m1<<"-"<<m2<<"-"<<m3<<"     |"<<endl;
         cout<<"       "<<"| Number of days. :-----------------------| "<<numDays1<<"            |"<<endl;
         int totalRentAmount=rentPrice*numDays1;
         cout<<"        ********************************************************\n";
         cout<<"       "<<"| Your Rental Amount is. :----------------| "<<totalRentAmount<<"         |"<<endl;
         cout<<"       "<<"| Advance Amount. :-----------------------| "<<advanceAmt1<<"         |"<<endl;
         toaAmt=totalRentAmount;
    }

    string checkingStatusOfAgree()
    {
         return bpay->agreementValue();
    }
    void displayAdditonalAmt()
    {
         int totalAmt=toaAmt-advanceAmt1;
        cout<<"       "<<"___________________________________________________________"<<endl;
        cout<<endl;
        cout<<"       "<<"|Total Rental Amount is:------------------| "<<totalAmt<<"         |"<<endl;
        cout <<"       "<<"|   You need to return the car on : " << p1 << "-" << p2 << "-" << p3 <<endl;
        cout<<"       "<<"___________________________________________________________"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                        "<<"Thank You Visit Again :)"<<endl;
        cout<<endl;
        cout<<endl;
    }
};

class AfterPayment
{
    public:
    string invoiceNumber;
    Rent *rent;
    Customer *cust;
    Car *car;


    AfterPayment() {}
    void totalPayment()
    {
        if(rent->checkingStatusOfAgree()=="yes")
       {
           cout<<endl;
           cout<<endl;
           cout<<"                          "<<"Car Rental - Customer Invoice"<<"                       "<<endl;
           cout<<"       "<<"//////////////////////////////////////////////////////////////////"<<endl;
          srand(time(0));
           cout<<"       "<<"| Invoice No. :---------------------------| "<<rand()<<"        |"<<endl;
           cust->getName();
           car->selctedCarModel();
           rent->rentPriceIs();
           rent->displayAdditonalAmt();
        }
        else
        {
            cout<<endl;
            cout<<"       "<<"Sorry Your Registration will not Proceed!"<<endl;
        }
    }
};

int main()
{
    cout << endl;
    cout << endl;
    cout << "       " << "LOGIN" << endl;
    cout << "       " << "---------------------------" << endl;
    cout << endl;

    string userId;
    cout << "       " << "enter the user name: ";
    cin >> userId;

    Customer cd(userId);
    try
    {
        cd.login();
    }
    catch (const char* r)
    {
        cout << endl;
        cout << "      -" << r << "-" << endl;
    }
    catch (ExceptionHandler& r)     ///Exception class
    {
        r.showException();
    }
    cd.setName();
     Car ca;
     Car ca1("Toyota","etios"),ca2("Toyota","Glanza"),ca3("Hyundai","Creta"),ca4("Ford","Figo");
    Car carr[]={ca1,ca2,ca3,ca4};
    ca.displaycar();
    cout<<endl;
    int option=ca.displayoption(carr);
    cout<<"       "<<"Specifications"<<endl;
    CarSpecification cs;
    CarSpecification cs1("Petrol",5,"Black","16.78kmpl"),cs2("Diesel",7,"Red","23.59kmpl"),cs3("Diesel",5,"Blue","23.59kmpl"),
    cs4("Petrol",7,"White","22.35Kmpl"),cs5("Petrol",5,"Red","25.35Kmpl"),cs6("Petrol",7,"Gray","21.35Kmpl"),
    cs7("Petrol",5,"Black","17.78kmpl"),cs8("Petrol",7,"Red","19.59kmpl"),cs9("Diesel",5,"Blue","21.59kmpl"),
    cs10("Petrol",5,"Black","20.4kmpl"),cs11("Diesel",7,"White","25.5kmpl"),cs12("Diesel",5,"Blue","24.59kmpl");
    if(option==1)
    {
       CarSpecification csarr1[]={cs1,cs2,cs3};
       CarSpecification::ToyotaEtiosSep(csarr1,3);
       cs.chooseToyotaEtiosSpe(csarr1);
       cout<<endl;
    }
    else if(option==2)
    {
        CarSpecification csarr2[]={cs3,cs4,cs5};
        CarSpecification::ToyotaGlanzaSep(csarr2,3);
        cs.chooseToyotaGlanzasSpe(csarr2);
        cout<<endl;
    }
    else if(option==3)
    {
        CarSpecification csarr3[]={cs6,cs7,cs8};
        CarSpecification::HyundaiSep(csarr3,3);
        cs.chooseHyundaiSpe(csarr3);
        cout<<endl;
    }
    else if(option==4)
    {
        CarSpecification csarr4[]={cs9,cs10,cs11};
        CarSpecification::FordSep(csarr4,3);
        cs.chooseFordSpe(csarr4);
        cout<<endl;
    }
    AfterPayment ap;
    ap.rent=new Rent(1000);
    Rent rn1;
    rn1.getData();
    rn1.bpay= new BeforePayment(1000,500);
    cout<<"       "<<"Additional Charges :"<<endl;
    cout<<endl;
    rn1.bpay->diplayBeforePaymentDetail();
    rn1.bpay->aggrement();
    ap.totalPayment();
    return 0;
}
