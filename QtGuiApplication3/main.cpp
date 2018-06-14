/********************************************************************************
**
** 18-03-2018
** Autor: Irena Cabanach Dresden
** Universidad Central de Venezuela
** TESIS: "Implementaci�n y evaluaci�n de resultados del algoritmo de Desaturaci�n Espectral"
** Basado en el paper:
** Implementado con OpenCV 2.4.13.4 (compilaci�n vc14)
** Qt Versi�n 5.10.0
** Visuaal Studio 2017
** Windows SDK 10.0.16299.0
** Windows 7
********************************************************************************/

#include "QtGuiApplication3.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication3 w;
	w.show();
	return a.exec();
}
