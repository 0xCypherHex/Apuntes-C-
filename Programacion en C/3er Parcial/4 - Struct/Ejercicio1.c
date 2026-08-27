#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y, z;
} Vec3;


double magnitud(Vec3 v){
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}


double dot(Vec3 a, Vec3 b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}



int main(){

    Vec3 u = {2.5, 4.6, 3.6};
    Vec3 v = {1.0, 0.0, 1.0};
    
    printf("Magnitud de u: %f\n", magnitud(u));
    printf("Magnitud de v: %f\n", magnitud(v));

    printf("La raiz cuadrada del producto punto: %f\n", sqrt(dot(u, v)));

    return 0;
}