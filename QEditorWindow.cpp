/*
 * File:   monEditeur.cpp
 * Author: supersnail
 *
 * Created on 10 novembre 2010, 18:09
 */

#include "QEditorWindow.h"
#include "QEditorChild.h"
QEditorWindow::QEditorWindow() {
    widget.setupUi(this);
    widget.explorer->setWidget(widget.explorerTree);
    widget.project->setWidget(widget.projectTree);
    QTreeWidget *prj = widget.projectTree;
    QStringList list = QStringList();
    list.append("Monprojet");
    prj->setColumnCount(1);
    prj->setHeaderLabel("Fichiers du projet");
    prj->insertTopLevelItem(0,new QTreeWidgetItem(list,0));
    QWidget::connect(widget.action_Nouveau,SIGNAL(triggered()),this,SLOT(new_clicked()));
    QWidget::connect(widget.action_Ouvrir,SIGNAL(triggered()),this,SLOT(open_clicked()));
    QWidget::connect(widget.action_Enregistrer,SIGNAL(triggered()),this,SLOT(save_clicked()));
}

QEditorWindow::~QEditorWindow() {
}

void QEditorWindow::new_clicked()
{
    
    QEditorChild *editor = new QEditorChild(NULL);
    widget.centralwidget->addSubWindow(editor);
    editor->show();
}

void QEditorWindow::open_clicked()
{
    QString f_name = QFileDialog::getOpenFileName(this,"Ouvrir un fichier",QString(),"Tous les fichiers (*)");
    QList<QMdiSubWindow*> childs = widget.centralwidget->subWindowList();
    for(int i=0;i<childs.count();i++)
    {
        QEditorChild *child = (QEditorChild*)childs[i];
        if(child->getFilePath() == f_name)
        {
            widget.centralwidget->setActiveSubWindow(child);
            return;
        }
    }
    QEditorChild *editor = new QEditorChild(f_name, widget.centralwidget);
    
}

void QEditorWindow::save_clicked()
{
    QEditorChild *current = (QEditorChild*)widget.centralwidget->currentSubWindow();
    if(current)
    {
        current->saveFile();
    }
}
