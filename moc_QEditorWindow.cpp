/****************************************************************************
** Meta object code from reading C++ file 'QEditorWindow.h'
**
** Created: Fri Nov 19 18:59:48 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QEditorWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEditorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QEditorWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      29,   14,   14,   14, 0x0a,
      44,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QEditorWindow[] = {
    "QEditorWindow\0\0new_clicked()\0"
    "open_clicked()\0save_clicked()\0"
};

const QMetaObject QEditorWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QEditorWindow,
      qt_meta_data_QEditorWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QEditorWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QEditorWindow))
        return static_cast<void*>(const_cast< QEditorWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: new_clicked(); break;
        case 1: open_clicked(); break;
        case 2: save_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
