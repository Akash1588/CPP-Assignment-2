#include"Address.h"

Address::Address():HouseNo("\0"),Colony("\0"),Area("\0"),City("\0"),Pincode("\0")
{
	cout<<"\n Default Ctor";
}

Address::Address(string h,string n,string a,string c,string p):HouseNo(h),Colony(n),Area(a),City(c),Pincode(p)
{
        cout<<"\n Parameterized Ctor";
}

void Address::Accept()
{
	cout<<"\n Enter House no. : ";
	getline(cin,HouseNo);
	cout<<"\n Enter Colony : ";
	getline(cin,Colony);
	cout<<"\n Enter Area : ";
	getline(cin,Area);
	cout<<"\n Enter City : ";
	getline(cin,City);
	cout<<"\n Enter Pincode : ";
	getline(cin,Pincode);
}

void Address::Display()
{
	cout<<"\n House no. is : "<<HouseNo;
	cout<<"\n Colony is : "<<Colony;
	cout<<"\n Area is : "<<Area;
	cout<<"\n City is : "<<City;
	cout<<"\n Pincode is : "<<Pincode;
}

void Address::operator==(const Address a1)
{
	if(this->HouseNo==a1.HouseNo && Colony==a1.Colony && Area==a1.Area && City==a1.City && Pincode==a1.Pincode)
		cout<<"\n Address are same."<<endl;
	else
		cout<<"\n Address are not same."<<endl;


}
