#include <QApplication>
#include <QWidget>

int main(int argc, char** argv[])
{
	QApplication app(argc, argv);

	QWidget window;
	
	window.resize(250, 150);
	window.setWindow("look at dis");
	window.show();

	return app.exec();
}
