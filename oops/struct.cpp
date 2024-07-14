#include <iostream>

struct Point{
    int x;
    int y;
};

void DrawPoint(Point p){
    std::cout << "Drawing point at " << p.x << ", " << p.y << std::endl;
}

int main(){
    Point p1 = {1, 2};
    DrawPoint(p1);
    return 0;
}