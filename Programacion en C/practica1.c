#include<stdio.h>

int main() {

    float fHorasTrabajadas=0;
    float fPagoHora=0;
    float fSalarioBruto=0;
    float fImpuestos=0;
    float fSalarioNeto=0;
    

    // Entrada de datos
    printf("Ingrese las horas trabajadas en la semana: ");
    scanf("%f", &fHorasTrabajadas);

    printf("Ingrese el pago por hora: ");
    scanf("%f", &fPagoHora);

    // Proceso de calculo

    fSalarioBruto = fHorasTrabajadas * fPagoHora;
    fImpuestos = fSalarioBruto * 0.10f; // 10% retencion
    fSalarioNeto = fSalarioBruto - fImpuestos;

    // Salida de resultados
    printf("\nSalario neto a pagar: $%2.f\n", fSalarioNeto);


    return 0;
}