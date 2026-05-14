

struct punto3D{

    //atributos:
    double x;
    double y;
    double z;
    unsigned char color[3];


};

int main(){
    punto3D p1;
    punto3D *p2 = new punto3D;
    p1.x = 7;
    p1.y = 3.0;
    p1.z = -1.0;
    p1.color[0]= 7;
    p1.color[1]=9;
    p1.color[2]=5;
    //para dinamicos(punteros):
    p2->y=-2.1; // o (*p2).x=7.0;
    punto3D *puntos = new punto3D[8];
    puntos[2].color[1]=200;

    delete puntos;
};


/*
MEMORIA DINAMICA:
new= malloc
delete = free
*/