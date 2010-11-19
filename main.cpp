/*
 * File:   main.cpp
 * Author: supersnail
 *
 * Created on 10 novembre 2010, 18:09
 */

#include <QtGui/QApplication>
#include <QtGui/qwidget.h>
#include "QEditorWindow.h"

int main(int argc, char *argv[]) {
   
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    QEditorWindow *wnd = new QEditorWindow();
    wnd->show();
    return app.exec();
}
