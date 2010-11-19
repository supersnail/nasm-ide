/* 
 * File:   QEditorChild.cpp
 * Author: supersnail
 * 
 * Created on 10 novembre 2010, 19:01
 */

#include "QEditorChild.h"
#include "QSciLexerAsm.h"

QEditorChild::QEditorChild(QWidget *parent = NULL) : QMdiSubWindow(parent, NULL) {
    this->buildInterface();
}

QEditorChild::QEditorChild(QString filename, QWidget *parent = NULL) : QMdiSubWindow(parent, NULL) {
    m_filename = filename;
    if(filename != "")
    {
        QFile *myfile = new QFile(m_filename);
        
        QFileInfo info (*myfile);
        m_basename = info.fileName();
        this->setWindowTitle(m_basename);
        myfile->open(QIODevice::ReadOnly);
        QTextStream fichier (myfile);

        m_editor.setText(fichier.readAll());

        myfile->close();
        delete myfile;
        this->buildInterface();

    }
    
    else
        delete this;
}

void QEditorChild::buildInterface()
{
    this->setWidget(&m_editor);
    m_editor.setLexer(new QSciLexerAsm());
    m_editor.setMarginLineNumbers(1,true);
    m_editor.setUtf8(true);
    m_editor.setMarginWidth(1,30);
    m_editor.setFolding(QsciScintilla::BoxedFoldStyle,2);
    //m_editor.SendScintilla(QsciScintillaBase::SCI_SETLEXER,QsciScintillaBase::SCLEX_ASM);
    m_editor.setVisible(true);

    this->show();
}

void QEditorChild::saveFile()
{
    if(m_filename == "")
    {
        this->saveAs();
    }
    else
    {
        QFile *myfile = new QFile(m_filename);
        QTextStream fichier (myfile);
        myfile->open(QIODevice::Truncate | QIODevice::WriteOnly);
        fichier << m_editor.text();
        myfile->close();
        delete myfile;

    }
}

void QEditorChild::saveAs()
{
    QString filename = QFileDialog::getSaveFileName(this,"Enregister sous",QString(),"Tous les fichiers (*.*)");
    if(filename != "")
    {

        QFile *myfile = new QFile(filename);
        myfile->open(QIODevice::WriteOnly);
        m_filename = filename;
        QFileInfo info (*myfile);
        m_basename = info.fileName();
        this->setWindowTitle(m_basename);
        QTextStream fichier (myfile);


        fichier << m_editor.text();
        myfile->close();
        delete myfile;
        
    }
}

QEditorChild::QEditorChild(const QEditorChild& orig) {
}

QEditorChild::~QEditorChild() {
}

