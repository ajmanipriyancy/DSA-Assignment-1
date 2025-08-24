/*Develop a Menu driven program to demonstrate the following operations of Arrays.
��MENU��-
1.CREATE
2.DISPLAY
3.INSERT
4.DELETE
5.LINEAR SEARCH
6.EXIT*/
#include<iostream>
using namespace std;

int array[50],i,num,pos,size,del,search,choice;

void create_array(){
	cout<<"Enter size of ur array (max limit 50 only) =";
	cin>>size;
	cout<<"Enter "<<size<<" Elements = "<<endl;
	for(i=0;i<size;i++)
	cin>>array[i];
}


void display_array(){
	cout<<"Your Elements are = ";
	for(i=0;i<size;i++)
	cout<<array[i]<<" ";
	cout<<endl;
}

void insert_array(){
	cout<<"Enter the data you want to insert = "<<endl;
	cin>>num;
	cout<<"Enter the position at which u want to insert = "<<endl;
	cin>>pos;
	 
	 if(pos<=0 || pos > size+1)
	 {
	 	cout<<"Invalid Insertion"<<endl;
	 }
	 else{
	 	for(i=size;i>=pos-1;i--){
	 		array[i+1]=array[i];
		 }
		 array[pos-1] = num;
		 size++;
	 	cout<<"Your Elements are = "<<endl;
	for(i=0;i<size;i++)
	cout<<array[i]<<" ";
	 }
}

void delete_array(){
	cout<<"Enter the position you want to delete = ";
	cin>>del;
	if(del<=0||del>size) 
	{
		cout<<"Invalid Input"<<endl;
	}
	else{
		for(i=del-1;i<size-1;i++){
			array[i] = array[i+1];
			
		}
		size--;
		cout<<"Array is = ";
		for(i=0;i<size;i++)
		{
		cout<<array[i]<<" ";	
		}
	}
	
}


void linear_search_array(){
	cout<<"Enter the element which u want to search = ";
	cin>>search;
	bool flag = false;
	for(i=0;i<size;i++){
		if(array[i]==search){
			flag= true;
			break;
		}
		
	}
	if(flag){
			cout<<"Element found at position"<<i+1<<endl;
	}
	else{cout<<"Not found";
	}
}
int main(){
	/*create_array();
	display_array();
	insert_array();
	delete_array();
	linear_search_array();*/
do{	
	cout<<"MENU \n1.CREATE \n2.DISPLAY \n3.INSERT \n4.DELET \n5.LINEAR SEARCH \n6.EXIT\n Select number on basis of this menu :-";
	cin>>choice;
	

	switch(choice) {
    case 1:
        create_array();
        break;
    case 2:
        display_array();
        break;
    case 3:
        insert_array();
        break;
    case 4:
        delete_array();
        break;
    case 5:
        linear_search_array();
        break;
    case 6:
        cout << "Visit Again";
        return 0;
    default:
        cout << "Invalid Input";
}
}while(choice < 6);

}
