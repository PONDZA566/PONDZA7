#include<iostream>
#include<cmath>

using namespace std;

int adiff(int angle1,int angle2){
    int result;
    if(angle1 == angle2){
        result = 0;
    }
    if(angle1>=180){
        angle1 = angle1%360;
    }
    if(angle2>=180){
        angle2 = angle2%360;
    }
    if(angle1>angle2){
        result = angle1 - angle2;
    }else{
        result = angle2 - angle1;
    }
    if(angle1<0 and angle2<0){
        result = (abs(abs(angle1) - abs(angle2)))%360;
    }

    if(result>180){
      result = abs(result-360);
    }

    return result;


}


int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
  cout << adiff(-350,-50)<<endl;
  cout << adiff(0,0)<<endl;
  cout << adiff(-359,-3600)<<endl;

}
