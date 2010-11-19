/* 
 * File:   QSciLexerAsm.h
 * Author: supersnail
 *
 * Created on 17 novembre 2010, 17:20
 */

#ifndef QSCILEXERASM_H
#define	QSCILEXERASM_H

#include <Qsci/qscistyle.h>
#include <Qsci/qscilexercustom.h>



class QSCINTILLA_EXPORT QSciLexerAsm : public QsciLexer {
    Q_OBJECT
public:
    enum
    {
        Default = 0,
        Comment = 1,
        Number = 2,
        String = 3,
        Operator = 4,
        Identifier = 5,
        Keyword = 6,
        FPUKeyword = 7,
        Register = 8,
        Directive = 9,
        Operand = 10
    };
    QSciLexerAsm();
    QSciLexerAsm(const QSciLexerAsm& orig);
    const char* wordCharacters() const;
    const char *language() const;
    const char *lexer() const;
    const char *blockStartKeyword(int *style) const;
    const char *blockStart(int *style) const;
    const char *blockEnd(int *style) const;
    bool defaultEolFill(int style) const;
    QString description(int) const;
    QColor defaultColor(int) const;
    QFont  defaultFont(int) const;
    QColor defaultPaper(int) const;
    const char* keywords(int set) const;
    virtual ~QSciLexerAsm();
private:

};

#endif	/* QSCILEXERASM_H */

