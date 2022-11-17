#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    bool reset1 = 1;
    int enter;
    while (reset1 = 1){
        system("cls");
        int func;
        cout<<"Choose the function that you want to use:\n 1 - comparator\n 2 - swapper\n 3 - mocnitel\n 4 - swapper w/o 3rd variable\n 5 - delitelnost 2 a 5 \n 6 - close app\n ";
        cin>>func;
        switch(func){
            case 1:{
                //Zadání èíslo 1.://

                int x, y, z;
                cout<<" Enter x\n ";
                cin>>x;
                cout<<" Enter y\n ";
                cin>>y;
                cout<<" Enter z\n ";
                cin>>z;
                if(x>y && x>z){
                    cout<<x;
                }else if (y>x && y>z){
                    cout<<y;
                }else if (z>x && z>y) {
                    cout<<z;
                }
                cout<<"\n Type in any number to continue.\n ";
                cin>>enter;
            }break;

            case 2:{
                //Zadání èíslo 2.://
                int a,b,c;
                cout<<" Enter a\n ";
                cin>>a;
                cout<<" Enter b\n ";
                cin>>b;
                c=a;
                a=b;
                b=c;
                cout<<"\n a=" <<a;
                cout<<"\n b=" <<b;
                cout<<"\n Type in any number to continue.\n ";
                cin>>enter;
            }break;

            case 3:{
                int e, f, g;
                cout<<" Enter e\n ";
                cin>>e;
                g=e;
                cout<<" Enter mocnitel f\n ";
                cin>>f;
                for(int nic=1; nic<=f-1; nic++){
                    e = e * g;
                };
                cout<<e;
                cout<<"\n Type in any number to continue.\n ";
                cin>>enter;
            }break;

            case 4:{
                int o, p;
                cout<<" Enter o\n ";
                cin>>o;
                cout<<" Enter p\n ";
                cin>>p;
                swap(o, p);
                cout<<"\n o = "<<o<<"\n p = "<<p;
                cout<<"\n Type in any number to continue.\n ";
                cin>>enter;
            }break;

            case 5:{
                float delenec;
                cout<<" Enter the number that you want to check\n ";
                cin>>delenec;
                int delitel1 = 2, delitel2 = 5, mezi1=delenec/delitel1, mezi2=delenec/delitel2;
                if(((delenec/delitel1)-mezi1)!=0){
                    cout<<" This number cannot be divided by 2 to get a whole number.\n";
                } else{
                    cout<<" This number can be divided by 2 to get a whole number.\n";
                }
                if(((delenec/delitel2)-mezi2)!=0){
                    cout<<" This number cannot be divided by 5 to get a whole number.\n";
                } else{
                    cout<<" This number can be divided by 5 to get a whole number.\n";
                }
                cout<<"\n Type in any number to continue.\n ";
                cin>>enter;
            }break;

            case 6:{
                return 0;
            }break;

            default:{
                system("cls");
                cout<<"\n Bruh really? You cant even type a displayed number?";
                cout<<"\n Type in any number to continue.\n ";
                cin>>enter;
            }
        }
    }
}
