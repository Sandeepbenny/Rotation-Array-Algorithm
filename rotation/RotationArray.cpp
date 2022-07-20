
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
void rotateArr(int arr[], int d, int n)
{
        int temp[n];
        int k=0;
        std::cout<<"\nThe array before rotation:\n"<<std::endl;
            for (int j = 0; j < n; j++) 
              {
                std::cout << arr[j];
               }  
        for(int i=d;i<n;i++)
            {
                temp[k]=arr[i];
                k++;
            }
        for(int i=0;i<d;i++)
            {
                temp[k]=arr[i];
                k++;
            }
        
       for(int i=0;i<n;i++)
            {
               arr[i]=temp[i];
            }   
    }
    
    void PrintTheArray(int arr[], int n)
    {
        
        std::cout<<"\nThe rotated array:"<<std::endl;
    for (int i = 0; i < n; i++) 
        {
         std::cout << arr[i];
        }
    }
int main()
    {
        int arr[9],c[9];
        int n,d;
        system("cls");
        std::cout<<"\n   "<<std::endl;
        std::cout<<"\n  "<<std::endl;
        std::cout<<"\t ** ROTATION RIGHT ALGORITHM BY SANDEEP*** \n"<<std::endl;
        std::cout<<"Enter the size of array \n";
        std::cin>>n;
        std::cout<<" \n Size = \n"<<n<<std::endl;
        std::cout<<"Enter the array \n";
        for (int i = 0; i < n; i++)
          {
          std::cin>>arr[i];
          }
        std::cout<<" the element from which it should rotate ?\n";
        std::cin>>d;
        std::cout<<"array display before rotation \n";
        for (int i = 0; i < n; i++)
         {
          std::cout << arr[i]<<std::endl;
         }
         rotateArr(arr,d,n);
         PrintTheArray(arr,n);
         getch();
    }
