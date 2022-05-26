#include <iostream>
using namespace std;

void nhapMaTran(int a[3][3])
{
    for(int i = 0;i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            cin>>a[i][j];
        }
    }
}
// Tất yêu Hà rất nhiều 456 789
void XuatMaTran(int a[3][3])
{
    for(int i = 0;i<3; i++)
    {
        cout<<endl;
        for(int j = 0;j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}
int TinhTong(int a[3][3])
{
    int tong = 0;
    for(int i = 0;i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            tong = tong + a[i][j];
        }
    }
return tong;
}

int Dem(int a[3][3])
{
    int dem = 0;
    for(int i = 0;i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            if(a[i][j] >= 5)
            {
                dem++;
            }
        }
    }
return dem;
}
void Tich(int a[3][3])
{
    int dong1 = 1; 
    int dong2= 1;
    int dong3= 1;
    
        for(int j = 0;j<3; j++)
        {
            dong1 = dong1 * a[0][j];
            dong2 = dong2 * a[1][j];
            dong3 = dong3 * a[2][j];
        }
    cout<<dong1<<" "<<dong2<<" "<<dong3<<endl;
}
void Tong(int a[3][3])
{
    int cot1 = 0; 
    int cot2= 0;
    int cot3= 0;
    
        for(int i = 0;i<3; i++)
        {
            cot1 = cot1 + a[i][0];
            cot2 = cot2 + a[i][1];
            cot3 = cot3 + a[i][2];
        }
    cout<<cot1<<" "<<cot2<<" "<<cot3<<endl;
}
int tongduongcheo(int a[3][3])
{
    int tong = 0;
    int i = 2;
    
        for(int j = 0;j<3; j++)
        {
            tong = tong + a[i][j];
            i--;
        }
    
return tong;
}
int main()
{
    int a[3][3];
    nhapMaTran(a);
    //XuatMaTran(a);
    cout<<TinhTong(a)<<endl;
    cout<<Dem(a)<<endl;
    Tich(a);
    Tong(a);
    cout<<tongduongcheo(a)<<endl;
}
