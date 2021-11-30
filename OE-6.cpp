//Name: Kim Carlo Larino
//Activity: OE-6

#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

void search(){

    int input[100], count, i, num;
       
    cout << "Enter size of array: ";
    cin >> count;
    cout << endl;
    cout << "Enter " << count << " elements: ";
      
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
    
    cout << endl;
    cout << "Enter number to be searched: ";
    cin >> num;
    cout << endl;
      
    for(i = 0; i < count; i++){
        if(input[i] == num){
            i++;
            cout << "Element found at index " << i;
            cout << endl;
        }
    }
}

void descend(){
    int arr[100];
	int a,s,d,temp;
	
	cout << "Enter size of array: ";
	cin >> a;
    cout << endl;

	
	for(s=0;s<a;s++)
	{
		cout<<"Enter element ["<<s+1<<"] ";
		cin>>arr[s];
	}
	
	for(s=0;s<a;s++)
	{		
		for(d=s+1;d<a;d++)
		{
			if(arr[s]<arr[d])
			{
				temp  =arr[s];
				arr[s]=arr[d];
				arr[d]=temp;
			}
		}
	}
	
    cout << endl;
	cout << "Elements of array - descending order:"<<endl;
	for(s=0;s<a;s++)
	    cout<<arr[s]<<" ";
	cout<<endl;
}

void ascend (){
    int arr[100];
    int a, s, d, temp;
 
    cout << "Enter size of array : ";
    cin >> a;
    cout << endl;

    for(s=0; s<a; s++)
    {
        cout << "Enter element ["<<s+1<<"]: ";
        cin>>arr[s];
    }
    
    for(s=0; s<a; s++)
    {
        for(d=s+1; d<a; d++)
        {
            if(arr[d] < arr[s])
            {
                temp   = arr[s];
                arr[s] = arr[d];
                arr[d] = temp;
            }
        }
    }

    cout << endl;
    cout << "Elements of array - ascending order:"<<endl;

    for(s=0; s<a; s++)
    {
        cout<<arr[s]<<" ";
    
    }
}

int main(){

    int ch, ans=0;

    system("Color 01");

    system("cls");

    do{

        system("cls");

        cout << endl;
        cout << endl;
        cout << "<<Array Program>>" << endl;
        cout << endl;
        cout << "[1] Searching Array" <<endl;
        cout << "[2] Ascending Sorting" <<endl;
        cout << "[3] Descending Sorting" <<endl;
        cout << "[0] Exit the Program" <<endl;
        cout << endl;
        cout << "Select Operation: ";
        cin >> ch;

        switch(ch){
            case 1: {
                cout << endl;
                cout << "<<Searching Array>>" <<endl<<endl; 
                search();
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }

            case 2:{
                cout << endl;
                cout << endl;
                cout << "<<Ascending Sorting>>" <<endl<<endl; 
                ascend();
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }

            case 3: {
                cout << endl;
                cout << "<<Descending Sorting>>" <<endl<<endl;
                descend();
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }

            case 0:{
                cout << endl;
                cout << "Program Terminated" <<endl; 
                cout << "Thank you for using the app!";
                cout << endl<<endl;
                return 0;
            break;
            }

            default:{
                cout << endl;
                cout << endl;
                cout << "Invalid Input!";
                cout << endl;
                system("pause");
            break;
            }
        }
    } while(ans == 0);
}