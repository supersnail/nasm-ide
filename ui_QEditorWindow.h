/********************************************************************************
** Form generated from reading UI file 'QEditorWindow.ui'
**
** Created: Sat Nov 20 09:55:27 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEDITORWINDOW_H
#define UI_QEDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEditorWindow
{
public:
    QAction *action_Nouveau;
    QAction *action_Ouvrir;
    QAction *action_Quitter;
    QAction *action_Enregistrer;
    QAction *action_Enregistrer_sous;
    QMdiArea *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QToolBar *toolBar;
    QDockWidget *project;
    QWidget *dockWidgetContents;
    QTreeWidget *projectTree;
    QDockWidget *explorer;
    QWidget *dockWidgetContents_2;
    QTreeWidget *explorerTree;

    void setupUi(QMainWindow *QEditorWindow)
    {
        if (QEditorWindow->objectName().isEmpty())
            QEditorWindow->setObjectName(QString::fromUtf8("QEditorWindow"));
        QEditorWindow->resize(773, 539);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../.designer/backup/pixmap/centrejust.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QEditorWindow->setWindowIcon(icon);
        action_Nouveau = new QAction(QEditorWindow);
        action_Nouveau->setObjectName(QString::fromUtf8("action_Nouveau"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("pixmap/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Nouveau->setIcon(icon1);
        action_Ouvrir = new QAction(QEditorWindow);
        action_Ouvrir->setObjectName(QString::fromUtf8("action_Ouvrir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("pixmap/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Ouvrir->setIcon(icon2);
        action_Quitter = new QAction(QEditorWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("pixmap/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quitter->setIcon(icon3);
        action_Quitter->setMenuRole(QAction::QuitRole);
        action_Enregistrer = new QAction(QEditorWindow);
        action_Enregistrer->setObjectName(QString::fromUtf8("action_Enregistrer"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("pixmap/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Enregistrer->setIcon(icon4);
        action_Enregistrer_sous = new QAction(QEditorWindow);
        action_Enregistrer_sous->setObjectName(QString::fromUtf8("action_Enregistrer_sous"));
        centralwidget = new QMdiArea(QEditorWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setViewMode(QMdiArea::SubWindowView);
        centralwidget->setTabShape(QTabWidget::Rounded);
        QEditorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QEditorWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 773, 27));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        QEditorWindow->setMenuBar(menubar);
        toolBar = new QToolBar(QEditorWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QEditorWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        project = new QDockWidget(QEditorWindow);
        project->setObjectName(QString::fromUtf8("project"));
        project->setMinimumSize(QSize(160, 200));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        projectTree = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        projectTree->setHeaderItem(__qtreewidgetitem);
        projectTree->setObjectName(QString::fromUtf8("projectTree"));
        projectTree->setGeometry(QRect(10, 10, 131, 192));
        project->setWidget(dockWidgetContents);
        QEditorWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), project);
        explorer = new QDockWidget(QEditorWindow);
        explorer->setObjectName(QString::fromUtf8("explorer"));
        explorer->setMinimumSize(QSize(100, 200));
        explorer->setFloating(false);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        explorerTree = new QTreeWidget(dockWidgetContents_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        explorerTree->setHeaderItem(__qtreewidgetitem1);
        explorerTree->setObjectName(QString::fromUtf8("explorerTree"));
        explorerTree->setGeometry(QRect(10, 30, 131, 151));
        explorer->setWidget(dockWidgetContents_2);
        QEditorWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), explorer);

        menubar->addAction(menu_Fichier->menuAction());
        menu_Fichier->addAction(action_Nouveau);
        menu_Fichier->addAction(action_Ouvrir);
        menu_Fichier->addAction(action_Enregistrer);
        menu_Fichier->addAction(action_Enregistrer_sous);
        menu_Fichier->addSeparator();
        menu_Fichier->addAction(action_Quitter);
        toolBar->addAction(action_Nouveau);
        toolBar->addAction(action_Ouvrir);
        toolBar->addAction(action_Enregistrer);
        toolBar->addSeparator();
        toolBar->addAction(action_Quitter);

        retranslateUi(QEditorWindow);

        QMetaObject::connectSlotsByName(QEditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QEditorWindow)
    {
        QEditorWindow->setWindowTitle(QApplication::translate("QEditorWindow", "monEditeur", 0, QApplication::UnicodeUTF8));
        action_Nouveau->setText(QApplication::translate("QEditorWindow", "&Nouveau", 0, QApplication::UnicodeUTF8));
        action_Nouveau->setShortcut(QApplication::translate("QEditorWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        action_Ouvrir->setText(QApplication::translate("QEditorWindow", "&Ouvrir", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("QEditorWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Enregistrer->setText(QApplication::translate("QEditorWindow", "&Enregistrer", 0, QApplication::UnicodeUTF8));
        action_Enregistrer->setShortcut(QApplication::translate("QEditorWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_Enregistrer_sous->setText(QApplication::translate("QEditorWindow", "&Enregistrer sous", 0, QApplication::UnicodeUTF8));
        menu_Fichier->setTitle(QApplication::translate("QEditorWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("QEditorWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        project->setWindowTitle(QApplication::translate("QEditorWindow", "Projet", 0, QApplication::UnicodeUTF8));
        explorer->setWindowTitle(QApplication::translate("QEditorWindow", "Explorateur de code", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QEditorWindow: public Ui_QEditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEDITORWINDOW_H
