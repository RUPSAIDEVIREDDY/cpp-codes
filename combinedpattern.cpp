#include<iostream>
using namespace std;

void printLetter(char letter) {
     if (letter == 'R'){
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i==1)
            {
                cout<<"* ";
            }
            else if(i==2)
            {
                if(j==1||j==4)
                cout<<"* ";
            
             else
            
                cout<<"  ";
            }
            else if(i==3)
            {
                cout<<"* ";
            }
            else if(i==4)
            {
                if(j==1||j==3)
                cout<<"* ";
                else
                cout<<"  ";
            }
            else if(i==5)
            {
                if(j==1||j==4)
                
                    cout<<"* ";
                else
                 cout<<"  ";

            }
             



        }
          cout<<endl;
    }
}

    else if (letter == 'E')
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i==1)
            {
                cout<<"* ";
            }
            else if(i==2)
            {
                if(j==1)
                cout<<"* ";
            
             else
            
                cout<<"  ";
            }
            else if(i==3)
            {
                if(j==1||j==2||j==3)
                cout<<"* ";
                else
                cout<<"  ";
            }
            else if(i==4)
            {
                if(j==1)
                cout<<"* ";
                else
                cout<<"  ";
            }
            else if(i==5)
            {
                
                    cout<<"* ";
                

            }
             



        }
        cout<<endl;
    }
}
}

int main() {
    printLetter('R');  
    cout << endl;
    printLetter('E'); 
    return 0;
}