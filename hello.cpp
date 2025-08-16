# include <iostream>
using namespace std;
int main(){
    
    int x;
    cout<<"enter no of rows: ";
    cin>>x;

    for (int i = 0;i< x ; i++){
        for(int k =x;k>x-i;k--){
            cout<<" ";
        }
        for(int j =1;j<=x-i;j++){
        
            cout<<"* ";
        }
    
        cout<<endl;

    }

    for (int i = 2;i<= x ; i++){
        for(int k =x-i;k>0;k--){
            cout<<" ";
        }
        for(int j =0;j<i;j++){
        
            cout<<"* ";
        }
        cout<<endl;

    }


    cout<<endl;
    cout<<endl;

     for (int i = 1;i<= x ; i++){
        for(int k =x-i;k>0;k--){
            cout<<" ";
        }
        for(int j =0;j<i;j++){
        
            cout<<"* ";
        }
        cout<<endl;

    }

    for (int i = 1;i< x ; i++){
        for(int k =x;k>x-i;k--){
            cout<<" ";
        }
        for(int j =1;j<=x-i;j++){
        
            cout<<"* ";
        }
    
        cout<<endl;

    }

    return 0;
}
