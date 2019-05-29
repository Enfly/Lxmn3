#include "zjm.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	zjm w;
	w.show();
	return a.exec();
}
