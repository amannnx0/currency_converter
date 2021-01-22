#include<iostream>
#include<string>

//function prototype
void select_first_currrency(int &choice);
void select_second_currrency(int &choice2);


int main(){
    int first_currency;
    int second_currency;

    std::cout<<"\n-----------------------------";
    std::cout<<"\nWelcome to Currency Converter\n";
    select_first_currrency(first_currency);
    select_second_currrency(second_currency);

    if(first_currency==1&&second_currency==1){
        std::cout<<"\n1 Rupee= 1Rupee";
    }

    else if(first_currency==1&&second_currency==2){
        std::cout<<"\n1 Rupee= 0.01 U.S Dollars";
    }
    
    else if(first_currency==1&&second_currency==3){
        std::cout<<"\n1 Rupee= 0.01 Euro";
    }

    else if(first_currency==1&second_currency==4){
        std::cout<<"\n1 Rupee= 1.42 Yen";
    }

    else if(first_currency==1&&second_currency==5){
        std::cout<<"\n1 Rupee= 0.01 British Pound";
    }

    else if(first_currency==1&&second_currency==6){
        std::cout<<"\n1 Rupee= 0.02 Australian Dollar";
    }

    else if(first_currency==1&&second_currency==7){
        std::cout<<"\n1 Rupee= 0.02 Canadian Dollar";
    }

    else if(first_currency==1&&second_currency==8){
        std::cout<<"\n1 Rupee= 0.09 Chinese yuan";
    }

    else if(first_currency==1&&second_currency==9){
        std::cout<<"\n1 Rupee= 0.044 Israeli Shakel";
    }

    else if(first_currency==1&&second_currency==10){
        std::cout<<"\n1 Rupee= 15.08 Korean Won";
    }

    else if(first_currency==2&&second_currency==1){
        std::cout<<"\n1 U.S Dollar= 72.94 Rupee";
    }

    else if(first_currency==2&&second_currency==2){
        std::cout<<"\n1 U.S Dollar= 1 U.S Dollar";
    }

    else if(first_currency==2&&second_currency==3){
        std::cout<<"\n1 U.S Dollar= 0.83 Euro";
    }

    else if(first_currency==2&&second_currency==4){
        std::cout<<"\n1 U.S Dollar= 103.56 Yen";
    }

    else if(first_currency==2&&second_currency==5){
        std::cout<<"\n1 U.S Dollar= 0.73 British Pound";
    }

    else if(first_currency==2&&second_currency==6){
        std::cout<<"\n1 U.S Dollar= 1.29 Australian Dollar";
    }

    else if(first_currency==2&&second_currency==7){
        std::cout<<"\n1 U.S Dollar= 1.27 Canadian Dollar";
    }

    else if(first_currency==2&&second_currency==8){
        std::cout<<"\n1 U.S Dollar= 6.47 Yuan";
    }

    else if(first_currency==2&&second_currency==9){
        std::cout<<"\n1 U.S Dollar= 3.27 Israeli New Shekel";
    }

    else if(first_currency==2&&second_currency==10){
        std::cout<<"\n1 U.S Dollar= 1,10534 Korean Won";
    }

    else if(first_currency==3&&second_currency==1){
        std::cout<<"\n1 Euro= 88.59 Rupee";
    }
    
    else if(first_currency==3&&second_currency==2){
        std::cout<<"\n1 Euro= 1.21 U.S Dollar";
    }

    else if(first_currency==3&&second_currency==3){
        std::cout<<"\n1 Euro= 1 Euro";
    }

    else if(first_currency==3&&second_currency==4){
        std::cout<<"\n1 Euro= 125.77 U.S Dollar";
    }

    else if(first_currency==3&&second_currency==5){
        std::cout<<"\n1 Euro= 0.88 British Pound";
    }

    else if(first_currency==3&&second_currency==6){
        std::cout<<"\n1 Euro= 1.57 Australian Dollar";
    }

    else if(first_currency==3&&second_currency==7){
        std::cout<<"\n1 Euro= 1.53 Canadian Dollar";
    }

    else if(first_currency==3&&second_currency==8){
        std::cout<<"\n1 Euro= 125.77 Yen";
    }

    else if(first_currency==3&&second_currency==9){
        std::cout<<"\n1 Euro= 4,096 Israeli New Shakel";
    }

    else if(first_currency==3&&second_currency==10){
        std::cout<<"\n1 Euro= 1336.56 Korean Won";
    }

    else if(first_currency==4&&second_currency==1){
        std::cout<<"\n1 Yen= 0.70 Rupee";
    }

    else if(first_currency==4&&second_currency==2){
        std::cout<<"\n1 Yen= 0.0097 U.S Dollar";
    }

    else if(first_currency==4&&second_currency==3){
        std::cout<<"\n1 Yen= 0.0080 Euro";
    }

    else if(first_currency==4&&second_currency==4){
        std::cout<<"\n1 Yen= 1 Yen";
    }

    else if(first_currency==4&&second_currency==5){
        std::cout<<"\n1 Yen= 0.0070 British Pound";
    }

    else if(first_currency==4&&second_currency==6){
        std::cout<<"\n1 Yen= 0.01 Australian Dollar";
    }

    else if(first_currency==4&&second_currency==7){
        std::cout<<"\n1 Yen= 0.01 Canadian Dollar";
    }

    else if(first_currency==4&&second_currency==8){
        std::cout<<"\n1 Yen= 0.06 Chinese Yuan";
    }

    else if(first_currency==4&&second_currency==9){
        std::cout<<"\n1 Yen= 0.031 Israeli New Shekel";
    }

    else if(first_currency==4&&second_currency==10){
        std::cout<<"\n1 Yen= 10.64 Korean Won";
    }

    else if(first_currency==5&&second_currency==1){
        std::cout<<"\n1 British Pound= 100.10 Rupee";
    }

    else if(first_currency==5&&second_currency==2){
        std::cout<<"\n1 British Pound= 1.37 U.S Dollar";
    }

    else if(first_currency==5&&second_currency==3){
        std::cout<<"\n1 British Pound= 1.13 Euro";
    }

    else if(first_currency==5&&second_currency==4){
        std::cout<<"\n1 British Pound= 142.12 Yen";
    }

    else if(first_currency==5&&second_currency==5){
        std::cout<<"\n1 British Pound= 1 British Pound";
    }

    else if(first_currency==5&&second_currency==6){
        std::cout<<"\n1 British Pound= 1.77 Australian Dollar";
    }

    else if(first_currency==5&&second_currency==7){
        std::cout<<"\n1 British Pound= 1.74 Canadian Dollar";
    }

    else if(first_currency==5&&second_currency==8){
        std::cout<<"\n1 British Pound= 8.87 Chinese Yuan";
    }

    else if(first_currency==5&&second_currency==9){
        std::cout<<"\n1 British Pound=4.31603 Israeli New Shekel";
    }

    else if(first_currency==5&&second_currency==10){
        std::cout<<"\n 1 British Pound= 1510.24 Korean Won";
    }

    else if(first_currency==6&&second_currency==1){
        std::cout<<"\n1 Australian Dollar= 56.57 Rupee";
    }

    else if(first_currency==6&&second_currency==2){
        std::cout<<"\n1 Australian Dollar= 0.78 U.S Dollar";
    }

    else if(first_currency==6&&second_currency==3){
        std::cout<<"\n1 Australian Dollar= 0.64 Euro";
    }

    else if(first_currency==6&&second_currency==4){
        std::cout<<"\n1 Australian Dollar= 80.31 yen";
    }

    else if(first_currency==6&&second_currency==5){
        std::cout<<"\n1 Australian Dollar= 0.57 British Pound";
    }

    else if(first_currency==6&&second_currency==6){
        std::cout<<"\n1 Australian Dollar= 1 Australian Dollar";
    }

    else if(first_currency==6&&second_currency==7){
        std::cout<<"\n1 Australian Dollar= 0.98 Canadian Dollar";
    }

    else if(first_currency==6&&second_currency==8){
        std::cout<<"\n1 Australian Dollar= 5.01 Chinese Yuan";
    }

    else if(first_currency==6&&second_currency==9){
        std::cout<<"\n1 Australian Dollar= 2.4885 Israeli New Shekel";
    }

    else if(first_currency==6&&second_currency==10){
        std::cout<<"\n1 Australian Dollar= 853.47 Korean Won";
    }

    else if(first_currency==7&&second_currency==1){
        std::cout<<"\n1 Canadian Dollar= 57.74 Rupee";
    }

    else if(first_currency==7&&second_currency==2){
        std::cout<<"\n1 Canadian Dollar= 0.79 U.S Dollar";
    }

    else if(first_currency==7&&second_currency==3){
        std::cout<<"\n1 Canadian Dollar= 0.65 Euro";
    }

    else if(first_currency==7&&second_currency==4){
        std::cout<<"\n1 Canadian Dollar= 81.98 yen";
    }

    else if(first_currency==7&&second_currency==5){
        std::cout<<"\n1 Canadian Dollar= 0.58 British Pound";
    }

    else if(first_currency==7&&second_currency==6){
        std::cout<<"\n1 Canadian DOllar= 1.02 Australian Dollar";
    }

    else if(first_currency==7&&second_currency==7){
        std::cout<<"\n1 Canadian Dollar= 1 Canadian Dollar";
    }

    else if(first_currency==7&&second_currency==8){
        std::cout<<"\n1 Canadian Dollar= 5.11 Chinese Yuan";
    }

    else if(first_currency==7&&second_currency==9){
        std::cout<<"\n1 Canadian Dollar= 2.5642 Israeli New Shekel";
    }

    else if(first_currency==7&&second_currency==10){
        std::cout<<"\n1 Canadian DOllar= 859.63 Korean Won";
    }

    else if(first_currency==8&&second_currency==1){
        std::cout<<"\n1 Chinese Yuan= 11.29 Rupee";
    }

    else if(first_currency==8&&second_currency==2){
        std::cout<<"\n1 Chinese Yuan= 0.15 U.S Dollar";
    }

    else if(first_currency==8&&second_currency==3){
        std::cout<<"\n1 Chinese Yuan= 0.13 Euro";
    }

    else if(first_currency==8&&second_currency==4){
        std::cout<<"\n1 Chinese Yuan= 16.03 Yen";
    }

    else if(first_currency==8&&second_currency==5){
        std::cout<<"\n1 Chinese Yuan= 0.11 British Pound";
    }

    else if(first_currency==8&&second_currency==6){
        std::cout<<"\n1 Chinese Yuan= 0.20 Australian Dollar";
    }

    else if(first_currency==8&&second_currency==7){
        std::cout<<"\n1 Chinese Yuan= 0.20 Canadian Dollar";
    }

    else if(first_currency==8&&second_currency==8){
        std::cout<<"\n1 Chinese Yuan= 1 Chinese Yuan";
    }

    else if(first_currency==8&&second_currency==9){
        std::cout<<"\n1 Chinese Yuan= 2.0602 Israeli New Shakel";
    }

    else if(first_currency==8&&second_currency==10){
        std::cout<<"\n1 Chinese Yuan= 170.34 Korean Won";
    }

    else if(first_currency==9&&second_currency==1){
        std::cout<<"\n1 Shekel= 22.29 Rupee";
    }

    else if(first_currency==9&&second_currency==2){
        std::cout<<"\n1 Shekel= 0.31 U.S  Dollar";
    }

    else if(first_currency==9&&second_currency==3){
        std::cout<<"\n1 Shekel= 0.25 Euro";
    }

    else if(first_currency==9&&second_currency==4){
        std::cout<<"\n1 Shekel= 31.69 yen";
    }

    else if(first_currency==9&&second_currency==5){
        std::cout<<"\n1 Shekel= 0.22 British Pound";
    }

    else if(first_currency==9&&second_currency==6){
        std::cout<<"\n1 Shekel= 0.40 Australian Dollar";
    }

    else if(first_currency==9&&second_currency==7){
        std::cout<<"\n1 Shekel= 0.39 Canadian Dollar";
    }

    else if(first_currency==9&&second_currency==8){
        std::cout<<"\n1 Shekel= 1.98 Chinese Yuan";
    }

    else if(first_currency==9&&second_currency==9){
        std::cout<<"\n1 Shekel= 1 Shekel";
    }

    else if(first_currency==9&&second_currency==10){
        std::cout<<"\n1 Shekel= 337.62 Koraen Won";
    }
    
    else if(first_currency==10&&second_currency==1){
        std::cout<<"\n1 Korean Won= 0.066 Rupee";
    }

    else if(first_currency==10&&second_currency==2){
        std::cout<<"\n1 Koran Won= 0.00090 U.S Dollar";
    }

    else if(first_currency==10&&second_currency==3){
        std::cout<<"\n1 Korean won= 0.00074 Euro";
    }

    else if(first_currency==10&&second_currency==4){
        std::cout<<"\n1 Korean Won= 0.094 Yen";
    }

    else if(first_currency==10&&second_currency==5){
        std::cout<<"\n1 Korean Won= 0.00066 British Pound";
    }

    else if(first_currency==10&&second_currency==6){
        std::cout<<"\n1 Korean Won= 0.0012 Australian Dollar";
    }

    else if(first_currency==10&&second_currency==7){
        std::cout<<"\n1 Korean Won= 0.0011 Canadian Dollar";
    }

    else if(first_currency==10&&second_currency==8){
        std::cout<<"\n1 Korean Won= 0.0059 Chinese Yuan";
    }

    else if(first_currency==10&&second_currency==9){
        std::cout<<"\n1 Korean Won= 0.0030 Israeli New Shekel";
    }

    else if(first_currency==10&&second_currency==10){
        std::cout<<"\n1 Korean Won= 1 Korean Won";
    }

    else{
        std::cout<<"\nInvalid Choice.Please check the number and run the program again";
    }






    
return 0;
}

//function to print the name and input the user's choice for the first currency

void select_first_currrency(int &choice){
    std::cout<<"\nSelect the first currency:"<<std::endl;
    std::cout<<"\n1.Rupee";
    std::cout<<"\n2.U.S Dollar";
    std::cout<<"\n3.Euro";
    std::cout<<"\n4.Yen";
    std::cout<<"\n5.British Pound";
    std::cout<<"\n6.Australian Dollar";
    std::cout<<"\n7.Canadian Dollar";
    std::cout<<"\n8.Chinese Yuan";
    std::cout<<"\n9.Israeli New Shekel";
    std::cout<<"\n10.Korean Won";
    

    std::cout<<"\n\nPlease enter the number displayed against the currency name";
    std::cout<<"\n\nEnter your choice:";
    std::cin>>choice;
   
}


//function to display and input the user's choice for second currency

void select_second_currrency(int &choice2){
    std::cout<<"\nSelect the second currency:"<<std::endl;
    std::cout<<"\n1.Rupee";
    std::cout<<"\n2.U.S Dollar";
    std::cout<<"\n3.Euro";
    std::cout<<"\n4.Yen";
    std::cout<<"\n5.British Pound";
    std::cout<<"\n6.Australian Dollar";
    std::cout<<"\n7.Canadian Dollar";
    std::cout<<"\n8.Chinese Yuan";
    std::cout<<"\n9.Israeli New Shekel";
    std::cout<<"\n10.Korean Won";
    
    std::cout<<"\n\nPlease enter the number displayed against the currency name";
    std::cout<<"\n\nEnter your choice:";
    std::cin>>choice2;
   
}

