#include "Arrays.h"5
#include <iostream>

int main()
{
	int tam;
	cout<<"***************************************************"<<endl;
	cout<<"First Array"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Size of the Array ";
	cin>>tam;

	Arrays A(tam);
	A.generateArray();

	cout<<"***************************************************"<<endl;
	cout<<"Second Array"<<endl;
	cout<<"***************************************************"<<endl;
	cout<<"Size of the Array ";
	cin>>tam;

	Arrays B(tam);
	B.generateArray();

	if (B.getSize() == A.getSize())
	{
		//Overloading +=
		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading +="<<endl;
		cout<<"***************************************************"<<endl;

		cout<<"A= ";
		A.printArray();

		cout<<"B= ";
		B.printArray();

		A+=B;
		cout<<"A+=B "<<endl;

    cout<<"A= ";
    A.printArray();

    cout<<"B= ";
    B.printArray();


		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading + and ="<<endl;
		cout<<"***************************************************"<<endl;

		Arrays *C;

		cout<<"A= ";
		A.printArray();

		cout<<"B= ";
		B.printArray();

		C=A+B;

    C=B+A;

		cout<<"Result C=A + B "<<endl;

    cout<<"C= ";
		C->printArray();

		cout<<"A= ";
		A.printArray();

		cout<<"B= ";
		B.printArray();


		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading * (producto punto)"<<endl;
		cout<<"***************************************************"<<endl;


		cout<<"A= ";
		A.printArray();

		cout<<"B= ";
		B.printArray();

		double punto;
			punto =A*B;
		cout<<"A.B="<<punto<<endl;


		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading * (an Array multiply by 10) C = A * 10"<<endl;
		cout<<"***************************************************"<<endl;


		cout<<"A= ";
		A.printArray();


		C =A*10;
		cout<<"C = ";
		C->printArray();



		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading *= (an Array multiply by 10) A*= 10"<<endl;
		cout<<"***************************************************"<<endl;


		cout<<"A= ";
		A.printArray();


		A*=10;
		cout<<"A = ";
		A.printArray();

		cout<<endl<<"***************************************************"<<endl;
		cout<<"Overloading ="<<endl;
		cout<<"***************************************************"<<endl;

		B=A;
		cout<<"A= ";
		A.printArray();
		cout<<"B= ";
		B.printArray();


	}else
	{
		cout<<"Wrong sizes"<<endl;
	}

	return 0;
}