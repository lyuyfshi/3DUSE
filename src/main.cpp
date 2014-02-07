////////////////////////////////////////////////////////////////////////////////
#include "gui/moc/mainWindow.hpp"
#include <QApplication>
////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
#ifdef Q_WS_X11
    QCoreApplication::setAttribute(Qt::AA_X11InitThreads);
#endif
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}
////////////////////////////////////////////////////////////////////////////////
