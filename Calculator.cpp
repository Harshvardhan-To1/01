#include <iostream>
using namespace std;
int factorial(int n){
    int x;
    x = 1;
    for(int i = 1;i<=n;i++){
        x = x*i;
    }
    
    return x;
    }
int power( float m,int n){
    int y = 1;
    for(int i = 0;i<n;i++){
        y = m*y;
    
    }
    return y;
}

int main() {
    int n;
    cout<<"Enter the Number to perform a Particular Function:"<<endl;
    cout<<"Enter 1 to perform Addition:"<<endl;
    cout<<"Enter 2 to perform Substraction:"<<endl;
    cout<<"Enter 3 to perform Multiplication:"<<endl;
    cout<<"Enter 4 to perform Division:"<<endl;
    cout<<"Enter 5 to perform sine Function:"<<endl;
    cout<<"Enter 6 to perform Cosine Function:"<<endl;
    cout<<"Enter 7 to perform Tangent Function:"<<endl;
    cout<<"Enter 8 to perform Cotangent Function:"<<endl;
    cout<<"Enter 9 to perform Secant Function:"<<endl;
    cout<<"Enter 0 to perform Cosecant Function:"<<endl;
    cout<<"Enter anything to perform Exponential Function:"<<endl;
    cin>>n;
    
    if(n == 1 || 2 || 3 || 4){
        cout<<"Enter 2 Numbers:";
        int a,b;
        cin>>a>>b;
    
        if(n == 1){
            float sum = a + b;
            cout<<"Sum:";
            cout<<sum;
        }
        else if(n == 2){
            float sub = a - b;
            cout<<"Sub:";
            cout<<sub;
        }
        else if(n == 3){
            float sum = a * b;
            cout<<"Mul:";
            cout<<sum;
        }
        else if(n == 4){
            float sum = a/b;
            cout<<"Div:";
            cout<<sum;
        }
    else if(n == 5 || 6 || 7 || 8 || 9 || 0){
        int degree;
        cout<<"Enter the number in Degrees to calculate its trignometric Value:";
        cin>>degree;
        float r = (3.14/180)*degree;
        if(n == 5){
            float sine = r - (power(r,3)/factorial(3)) + (power(r,5)/factorial(5)) - (power(r,7)/factorial(7)) +(power(r,9)/factorial(9))-(power(r,11)/factorial(11));
            cout<<"sine";
            cout<<"of";
            cout<<r;
            cout<<" =";
            cout<<sine;
        }
        else if(n == 6){
            float sine = 1 - (power(r,2)/factorial(2)) + (power(r,4)/factorial(4)) - (power(r,6)/factorial(6)) +(power(r,8)/factorial(8))-(power(r,10)/factorial(10));
            cout<<"cosine";
            cout<<"of";
            cout<<r;
            cout<<" =";
            cout<<sine;
        }
        else if(n == 7){
            float sine = r + (power(r,3)/3) + ((2*power(r,5))/15) + ((17*power(r,7))/315);
            cout<<"Tangent";
            cout<<"of";
            cout<<r;
            cout<<" =";
            cout<<sine;
        }
        else if(n == 8){
            float sine = r + (power(r,3)/3) + ((2*power(r,5))/15) + ((17*power(r,7))/315);
            cout<<"CoTangent";
            cout<<"of";
            cout<<r;
            cout<<" =";
            cout<<1/sine;
        }
        else if(n == 9){
            float sine = 1 - (power(r,2)/factorial(2)) + (power(r,4)/factorial(4)) - (power(r,6)/factorial(6)) +(power(r,8)/factorial(8))-(power(r,10)/factorial(10));
            cout<<"secant";
            cout<<"of";
            cout<<r;
            cout<<" =";
            cout<<1/sine;
        }
        else if(n == 0){
            float sine = r - (power(r,3)/factorial(3)) + (power(r,5)/factorial(5)) - (power(r,7)/factorial(7)) +(power(r,9)/factorial(9))-(power(r,11)/factorial(11));
            cout<<"cosecant";
            cout<<"of";
            cout<<r;
            cout<<" =";
            cout<<1/sine;
        }
        else{
            float exponent;
            cout<<"Enter x in e^x:";
            int n;
            float e = 2.7;
            cin>>n;
            exponent = power(e,n);
            cout<<exponent;
        }
    }
    }
    
    return 0;
}
