#include<iostream>

using namespace std;

class announcement {
private:
int x,y,z, grade;
string shout;
public:
void display(string advisory){
shout = advisory;
cout<<shout;
  }
};
int main() {
  announcement classEvent;
  classEvent.display("I have conference@Laog");

    }

