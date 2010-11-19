/* 
 * File:   monEditeur.h
 * Author: supersnail
 *
 * Created on 10 novembre 2010, 18:09
 */

#ifndef _MONEDITEUR_H
#define	_MONEDITEUR_H

#include <QtGui/QtGui>
#include "ui_QEditorWindow.h"

class QEditorWindow : public QMainWindow {
    Q_OBJECT
public:
    QEditorWindow();
    virtual ~QEditorWindow();

public slots:
    void new_clicked();
    void open_clicked();
    void save_clicked();
private:
    Ui::QEditorWindow widget;
};

#endif	/* _MONEDITEUR_H */
