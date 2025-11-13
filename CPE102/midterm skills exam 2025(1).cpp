#include <iostream>
#include <iomanip>
using namespace std;


struct TodaySales{
	string name;
	int quantitySold;
	double pricePerItem;
	double totalSales;
	
};
int main (){
	int soldToday = 3;
	string breads = "bread";
	int sold = 20;
	double pricePerItem = 25.50;
	double totalSales= 510.00;
	
 	TodaySales sales[3] = { {"Bread", 20, 25.50, 510.00 }, {"Milk", 15, 45.00, 75.00},{"Butter", 10, 80.00, 800.00} };
 	TodaySales *pSales= sales;
	
	cout <<"Enter number of items sold today: ";
	cin>>soldToday;
	
	
	cout <<"Enter details for item 1: "<<endl;
	for (int i = 0; i <1; i++){
		cout <<"name: ";
		cin>>breads;
		for(int j = 1; j <2; j++){ 
		cout<<"Quantity Sold: ";
		cin>>sold;
		cout<<"Price per item: ";
		cin>>pricePerItem;
		cout<<"       "<<endl;
		}
}
	cout <<"Enter details for item 2: "<<endl;
	for (int i = 0; i <1; i++){
		cout <<"name: ";
		cin>>breads;
		for(int j = 1; j <2; j++){ 
		cout<<"Quantity Sold: ";
		cin>>sold;
		cout<<"Price per item: ";
		cin>>pricePerItem;
		cout<<"       "<<endl;
}
	
}
	cout <<"Enter details for item 3: "<<endl;
	for (int i = 0; i <1; i++){
		cout <<"name: ";
		cin>>breads;
		for(int j = 1; j <2; j++){ 
		cout<<"Quantity Sold: ";
		cin>>sold;
		cout<<"Price per item: ";
		cin>>pricePerItem;
		cout<<"       "<<endl;
}
}

	cout<<"-----------------------------------------"<<endl;
	cout<<"       	SALES REPORT          		"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Item	 Quantity   Price   Total Sales    "<<endl;
	cout<<"-----------------------------------------"<<endl;
	
	for (int i=0; i <3; i++){
		cout<<(pSales + i)->name <<"    "<<"      "<< (pSales + i)->quantitySold <<"      "
		<< (pSales + i)->pricePerItem<<"      "<<(pSales + i)->totalSales<<endl; 	
		
		
	}
	cout<<"-----------------------------------------"<<endl;
	cout<<"Grand Total Sales: 1985.00"<<endl;
	
	return 0;
}
