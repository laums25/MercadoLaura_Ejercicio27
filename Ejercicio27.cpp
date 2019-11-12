#include <iostream>
#include <cmath>

void euler(float delta);
void implicit(float implicit);


int main(){
    euler(0.1);
	std::cout<<" "<<std::endl;
    euler(0.01);
	std::cout<<" "<<std::endl;
    euler(1.0);
	std::cout<<" "<<std::endl;
    implicit(0.1);
	std::cout<<" "<<std::endl;
    implicit(0.01);
	std::cout<<" "<<std::endl;
    implicit(1.0);
	std::cout<<" "<<std::endl;
    return 0; 
}

void euler(float delta){
    float yn=1.0;
    float tini=0.0;
    float omega=0.1;
    
    for(float tini=0.0; tini<=4/omega; delta){
        yn=yn - (delta * omega * yn);
        tini+=delta;
        std::cout<<tini<<" "<<yn<<std::endl;
    }       
}

void implicit(float delta){
    float yplus=1.0;
    float ti=0.0;
    float ome=0.1;
    
    for(float ti=0.0; ti<=4/ome; delta){
        yplus=yplus/(1 + delta * ome);
        ti+=delta;
        std::cout<<ti<<" "<<yplus<<std::endl;
    }       
}