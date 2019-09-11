#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(StoptButton()) );
	connect(button_start, SIGNAL(clicked()), this, SLOT(StartTimer()) );
	
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::StartButton()
{   
	int cont=0;
	qDebug() << "click on button";
	lcdNumber->display(cont++);
}
void ejemplo1::StopButton(){
	timer->stop();
}
void ejemplo1::StartTimer(){
	connect(timer, SIGNAL(timeout()), this, SLOT(StartButton()));
	timer->start(1000);
}






