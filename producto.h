#ifndef COCACOLA_H_INCLUDED
#define COCACOLA_H_INCLUDED
typedef struct
{
    int cantidad;
    char nombre[40];
    char descripcion[128];
    float precio;
    char categoria;
    int id;
}EProducto;