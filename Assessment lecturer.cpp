#include<iostream>
using namespace std;

class lecture
{
    string lecturer;
    string subject;
    string course;
    int lecturers;
    
    public:
    lecture(string lec,string sub,string cour,int num)
    { 
        lecturer=lec;
        subject=sub;
        course=cour;
        lecturers=num;
	}
	
  	void display()
	{
		cout<<endl<<"name of lecturer : "<<lecturer<<endl;
		cout<<"name of subject : "<<subject<<endl;
		cout<<"name of course : "<<course<<endl;
		cout<<"number of lecturers : "<<lecturers<<endl;
	}
};

int main()
{
	cout<<"---------lecture managment system---------"<<endl<<endl;
	 
	lecture	ob1("nirav sir","database","full stack",4);
	lecture	ob2("jignesh sir","immunology","microbiology",30);
	lecture	ob3("hemali mem","enviroment","microbiology",30);
 	lecture	ob4("vijay sir","hematology","microbiology",30);
    lecture	ob5("virali mem","genetics","microbiology",30);
    
	cout<<"------------lecture details------------"<<endl;
	ob1.display();
	ob2.display();
	ob3.display();
	ob4.display();
	ob5.display();
}