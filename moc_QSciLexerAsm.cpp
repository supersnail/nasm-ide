/****************************************************************************
** Meta object code from reading C++ file 'QSciLexerAsm.h'
**
** Created: Fri Nov 19 19:38:22 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QSciLexerAsm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSciLexerAsm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSciLexerAsm[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QSciLexerAsm[] = {
    "QSciLexerAsm\0"
};

const QMetaObject QSciLexerAsm::staticMetaObject = {
    { &QsciLexer::staticMetaObject, qt_meta_stringdata_QSciLexerAsm,
      qt_meta_data_QSciLexerAsm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSciLexerAsm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSciLexerAsm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSciLexerAsm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSciLexerAsm))
        return static_cast<void*>(const_cast< QSciLexerAsm*>(this));
    return QsciLexer::qt_metacast(_clname);
}

int QSciLexerAsm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciLexer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
