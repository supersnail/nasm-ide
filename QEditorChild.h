/* 
 * File:   QEditorChild.h
 * Author: supersnail
 *
 * Created on 10 novembre 2010, 19:01
 */

#ifndef QEDITORCHILD_H
#define	QEDITORCHILD_H

#include <QtGui/QtGui>
#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>
class QEditorChild : public QMdiSubWindow {
    Q_OBJECT
public:
    QEditorChild(QWidget *parent);
    QEditorChild(QString filename, QWidget *parent);
    QEditorChild(const QEditorChild& orig);
    void buildInterface();

    void saveFile();
    void saveAs();
    QString getFilePath()
    {
        return m_filename;
    }
    
    virtual ~QEditorChild();
private:
    QString m_filename, m_basename;
    /*QTextEdit m_editor;*/
    QsciScintilla m_editor;

};

#endif	/* QEDITORCHILD_H */

