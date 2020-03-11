#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_KotobaNote.h"

class KotobaNote : public QMainWindow {
	Q_OBJECT

public:
	KotobaNote(QWidget *parent = Q_NULLPTR);

private:
	Ui::KotobaNoteClass ui;
};
