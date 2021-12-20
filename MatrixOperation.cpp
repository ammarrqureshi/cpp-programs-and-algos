#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int M,N,X,Y,I,J,K,n;
 int A[20][20], B[20][20], P[20][20];
 cout<<"\n\n * First Matrix *"<<endl;
 cout<<"  Number of Rows : ";
 cin>>M;
 cout<<"  Number of Columns : ";
 cin>>N;
 cout<<"\n Enter The First Matrix"<<endl;
 for (I=0 ; I<M ; I++ ){
 for (J=0 ; J<N ; J++){
 cin>>A[I][J];}
 }
 cout<<"\n\n\n * Second Matrix *"<<endl;
 cout<<"  Number of Rows : ";
 cin>>X;
 cout<<"  Number of Columns : ";
 cin>>Y;
 cout<<"\n \n Enter The Second Matrix"<<endl;
 for (I=0 ; I<X ; I++ ){
  for (J=0 ; J<Y ; J++){
 cin>>B[I][J];}
 }
 cout<<"\n\n The First Matrix You Entered\n"<<endl;
 for (I=0 ; I<M ; I++)
 {
 for (J=0 ; J<N ; J++){
  cout<<"\t "<<A[I][J];}
  cout<<"\n";
  }
  cout<<"\n\n The Second Matrix You Entered\n"<<endl;
  for (I=0 ; I<X ; I++)
  {
  for (J=0 ; J<Y ; J++){
   cout<<"\t "<<B[I][J];} 
cout<<endl<<"\n";
}
 A:
  cout<<"\n\n Select the any of the three option:\n"<<endl;
  cout<<"\n 1: Multiplication of matrixes";
  cout<<"\n 2: Addition of matrixes";
  cout<<"\n 3: Subtraction of matrixes";
  cout<<"\n 4: Exit\n\t";
  cin>>n;
  switch(n)
  {
  case 1:
  	{
	  
if (N==X)
{
for (I=0 ; I<M ; I++)
 {
 for (J=0 ; J<Y ; J++)
 {
  P[I][J] = 0;	
  for( K = 0 ;K< X ; K++)
  {
  	 P[I][J] = P[I][J] + A[I][K] * B[K][J];
  }
  }
  
  }	
}
else{
	 cout<<"\n\n Multiplication is not possible, incompatible dimension"<<endl;
	 
}

 cout<<"\n\n Multiplication of given matrixes are: \n"<<endl;
  for (I=0 ; I<X ; I++)
  {
  for (J=0 ; J<Y ; J++){
   cout<<"\t "<<P[I][J];}
cout<<endl<<"\n";
}
goto A;
break;
}
case 2:
	{
		if(M==X && N==Y){
		
	cout<<"\n\n Addition of given matrixes are: \n"<<endl;	
	for (I=0 ; I<X ; I++)
 {
 for (J=0 ; J<Y ; J++)
 {
  
  	 P[I][J] =  A[I][J] + B[I][J];
  
  }
  
  }
   for (I=0 ; I<X ; I++)
  {
  for (J=0 ; J<Y ; J++){
   cout<<"\t "<<P[I][J];}
cout<<endl<<"\n";
}
}
else{
	cout<<"\n Incorrect rows and column\n";
}
  goto A;
	break;
	}
	
	case 3:
	{
	if(M==X && N==Y){	
	cout<<"\n\n Subtraction of given matrixes are: \n"<<endl;	
	for (I=0 ; I<X ; I++)
 {
 for (J=0 ; J<Y ; J++)
 {
  
  	 P[I][J] =  A[I][J] - B[I][J];
  
  }
  
  }
   for (I=0 ; I<X ; I++)
  {
  for (J=0 ; J<Y ; J++){
   cout<<"\t "<<P[I][J];}
cout<<endl<<"\n";
}
}
else{
	cout<<"\n Incorrect rows and column\n";
}
  goto A;
	break;
	}
	
	case 4:
		{
			cout<<"\n\n ***EXIT***";
			exit(0);
		}
}
return 0;
}