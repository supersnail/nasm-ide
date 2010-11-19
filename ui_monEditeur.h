/********************************************************************************
** Form generated from reading UI file 'monEditeur.ui'
**
** Created: Wed Nov 10 18:10:00 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEDITEUR_H
#define UI_MONEDITEUR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_monEditeur
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *monEditeur)
    {
        if (monEditeur->objectName().isEmpty())
            monEditeur->setObjectName(QString::fromUtf8("monEditeur"));
        monEditeur->resize(800, 600);
        centralwidget = new QWidget(monEditeur);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        monEditeur->setCentralWidget(centralwidget);
        menubar = new QMenuBar(monEditeur);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        monEditeur->setMenuBar(menubar);
        statusbar = new QStatusBar(monEditeur);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        monEditeur->setStatusBar(statusbar);

        retranslateUi(monEditeur);

        QMetaObject::connectSlotsByName(monEditeur);
    } // setupUi

    void retranslateUi(QMainWindow *monEditeur)
    {
        monEditeur->setWindowTitle(QApplication::translate("monEditeur", "monEditeur", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class monEditeur: public Ui_monEditeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEDITEUR_H
