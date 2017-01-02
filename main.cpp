#include <QApplication>
#include "mainframe.h"
#include "generic_raw_decoder.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainFrame w;
    w.show();

    return application.exec();
}
