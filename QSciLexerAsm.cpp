/* 
 * File:   QSciLexerAsm.cpp
 * Author: supersnail
 * 
 * Created on 17 novembre 2010, 17:20
 */

#include "QSciLexerAsm.h"
#include <iostream>
#include <Qsci/qsciscintilla.h>
#include <Qsci/qsciabstractapis.h>
QSciLexerAsm::QSciLexerAsm() : QsciLexer() {
}

QSciLexerAsm::QSciLexerAsm(const QSciLexerAsm& orig) {
}

QSciLexerAsm::~QSciLexerAsm() {
}




const char *QSciLexerAsm::wordCharacters() const
{
    return "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-;";
}

const char *QSciLexerAsm::lexer() const
{
    return "asm";
}

const char* QSciLexerAsm::language() const
{
     return "Asm";
}

const char* QSciLexerAsm::keywords(int set) const
{
    if(set == 1)
    {
        return "mov lea cmp call inc dec add sub mul div imul idiv push leave ret dword xor shr shl or not and " //instructions diverses
               "jmp jne ja jae jnb jnc jb jc jbe je jge jg jl jle jz jnz " //sauts
                "test db nop lds les lfs lgs lss lodsb lodsw lodsd movsb movsw movsd movzx stosb stosw stosd "
                "extern section global import use32"; //Lexique spécifique à NASM
    }
    if(set == 3)
    {
        return "eax ax al ah ebx bx bl bh ecx cx cl ch edx dx dl dh eip esp sp ebp bp sp esi edi cs ds ss es fs gs";
    }
    return 0;
}


QString QSciLexerAsm::description(int style) const
{
        switch(style){
        case Keyword:
            return tr("CPU instructions");
        case Register:
            return tr("Registers");
        default:
            return tr("Comment");
        }

        return QString();
}

bool QSciLexerAsm::defaultEolFill(int style) const
{
    //std::cout << __FUNCTION__ << "\n";
    return true;

    return QsciLexer::defaultEolFill(style);
}

QColor QSciLexerAsm::defaultColor(int style) const
{
        switch(style)
        {
            
            case Keyword:
                return QColor(0x0, 0x0, 0xff);
            case Comment:
                return QColor(0x99, 0x99, 0x99);
            case String:
                return QColor(0x00, 0x00, 0xaa);
            case Number:
                return QColor(0xff,0x00,0x00);
            case Register:
                return QColor(0xaa,0x00,0x00);
            case Operator:
                return QColor(0x00,0x70,0x00);
            case Directive:
                return QColor(0xa0,0x00,0xa0);
            
        }
        return QsciLexer::defaultColor(style);
}

QFont  QSciLexerAsm::defaultFont(int style) const
{
        QFont *lol = new QFont("Courier New", 10);
        if(style == Keyword || style == Directive)
            lol->setBold(true);
        return *lol;
}

QColor QSciLexerAsm::defaultPaper(int style) const
{
        return QsciLexer::defaultPaper(style);
}


