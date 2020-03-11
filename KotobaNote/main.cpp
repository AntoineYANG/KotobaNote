#include "KotobaNote.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	KotobaNote w;
	w.show();
	return a.exec();
}
