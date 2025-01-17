#include<iostream>
using namespace std;
int* Dif(int arr[40],int n)
{   
    static int arr1[40];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    return arr1;
}
//Inserting the first element
void InsertBig(int arr[40],int n)
{
    int *ptr,num,arr1[40];
    ptr=Dif(arr,n);
    cout<<"Enter the number to be added ";
    cin>>num;
    for(int i=0;i<n;i++)
    {
      arr1[i+1]=ptr[i];
    }
   arr1[0]=num;
    for(int i=0;i<n+1;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
}
//Inserting the last element
void InsertEnd(int arr[40],int n)
{
     int *ptr,num,arr1[40];
    ptr=Dif(arr,n);
    cout<<"Enter the number to added:";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        arr1[i]=ptr[i];
    }
    arr1[n]=num;
     for(int i=0;i<n+1;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
}
//Sorting of array
void Sort(int arr[40],int n)
{
    int *ptr,num;
    ptr=Dif(arr,n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {cout<<ptr[i]<<" ";}
    cout<<endl;
}
//Shifting to left
void ShiftLeft(int arr[40],int n)
{
     int *ptr,ind;
    ptr=Dif(arr,n);
    cout<<"Enter the index till to be shifted:";
    cin>>ind;
    while(ind)
    {
        int temp=ptr[0];
        for(int i=0;i<n-1;i++)
        ptr[i]=ptr[i+1];
        ptr[n-1]=temp;
        ind--;
    }
    for(int i=0;i<n;i++)
    {cout<<ptr[i]<<" ";}
    cout<<endl;
}
//Inserting in any index of array
void InsertIndex(int arr[40],int n)
{
     int *ptr,num,ind,arr1[40],i;
    ptr=Dif(arr,n);
    cout<<"Enter the index and number where :";
    cin>>ind>>num;
     for(int i=n;i>=ind;i--)
     {
        ptr[i]=ptr[i-1];
     }
     ptr[ind-1]=num;
     n++;
     for(int i=0;i<n;i++)
    {cout<<ptr[i]<<" ";}
    cout<<endl;
}
//Deleting element of any index
void  Deletein(int arr[40], int n)
{
     int *ptr,num;
    ptr=Dif(arr,n);
    
    cout<<"Enter the index where :";
    cin>>num;
    for(int i=0;i<n-1;i++)
    {
        if(i>=num)
        {
        int temp=ptr[i];
        ptr[i]=ptr[i+1];
        ptr[i+1]=temp;
        }
    }
     for(int i=0;i<n-1;i++)
    cout<<ptr[i]<<" ";
    cout<<endl;
}
//Reverse of the array
void Reverse(int arr[40], int n)
{
     int *ptr;
    ptr=Dif(arr,n);
    for(int i=0;i<n/2;i++)
    {
         int temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    cout<<ptr[i]<<" ";
    cout<<endl;
}
//Display the array
void Display(int arr[40],int n)
{  
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
//Deleting the beginning element of array
void DeleteBig(int arr[40],int n)
{   int *ptr;
    ptr=Dif(arr,n);
    
   for(int i=0;i<n-1;i++)
    {
        int temp=ptr[i];
        ptr[i]=ptr[i+1];
        ptr[i+1]=temp;
    }
    for(int i=0;i<n-1;i++)
    cout<<ptr[i]<<" ";
    cout<<endl;
}
//Deleting the end element of array
void DeleteEnd(int arr[40],int n)
{ int *ptr;
   ptr=Dif(arr,n);
  for(int i=0;i<n-1;i++)
  cout<<ptr[i]<<" ";
  cout<<endl;
}
//Sorting of even elements of array
void SortEven(int arr[40],int n)
{
   int *ptr,min;
   ptr=Dif(arr,n);
            for(int i=0;i<n-1;i++)
    {
        if(ptr[i]%2==0)
        {
            min=i;
            for(int j=i+1;j<n;j++)
        {
            if(ptr[j]%2==0)
          {
             if(ptr[j]<ptr[min])
              min=j;
        }
        }
        if(min!=i)
        {
            int temp=ptr[i];
            ptr[i]=ptr[min];
            ptr[min]=temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<ptr[i]<<" ";
}
}
//Sorting of odd elements of array
void SortOdd(int arr[40],int n)
{
   int *ptr,min;
   ptr=Dif(arr,n);
            for(int i=0;i<n-1;i++)
    {
        if(arr[i]%2!=0)
        {
            min=i;
            for(int j=i+1;j<n;j++)
        {
            if(arr[j]%2!=0)
          {
              min=j;
        }
        }
        if(min!=i)
        {
            int temp=ptr[i];
            ptr[i]=ptr[min];
            ptr[min]=temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<ptr[i]<<" ";

}
}
//Shifting to the right
void ShiftRight(int arr[40],int n)
{
   int *ptr,ind;
   ptr=Dif(arr,n);
   cout<<"Enter the index till to be shifted:";
    cin>>ind;
   while(ind)
    {
        int temp=ptr[n-1];
        for(int i=n-1;i>=0;i--)
        ptr[i+1]=ptr[i];
        ptr[0]=temp;
        ind--;
    }
   for(int i=0;i<n;i++)
  cout<<ptr[i]<<" ";
  cout<<endl;
}
int main()
{
    int n,arr[40];
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Displaying the array:";
    cout<<endl;
    Display(arr,n);
    cout<<"Deleteing the first element:";
    cout<<endl;
    DeleteBig(arr,n);
    cout<<"Deleting the first elements:";
    cout<<endl;
    DeleteEnd(arr,n);
    cout<<"Deleting element in any index:";
    cout<<endl;
    Deletein(arr,n);
    cout<<"Reversing the array:";
    cout<<endl;
    Reverse(arr,n);
    cout<<"Inserting in first element of array:";
    cout<<endl;
    InsertBig(arr,n);
    cout<<"Inserting in last element of array:";
    cout<<endl;
    InsertEnd(arr,n);
    cout<<"Inserting in any element of array:";
    cout<<endl;
    InsertIndex(arr,n);
    cout<<"Sorting Array:";
    cout<<endl;
    Sort(arr,n);
    cout<<"Shifting array to desired left:";
    cout<<endl;
    ShiftLeft(arr,n);
     cout<<"Shifting array to desired right:";
    cout<<endl;
    ShiftRight(arr,n);
    cout<<"Sorting the even elements of array:";
    cout<<endl;
    SortEven(arr,n);
    cout<<"Sorting the even elements of array:";
    cout<<endl;
    SortOdd(arr,n);
    return 0;
}
