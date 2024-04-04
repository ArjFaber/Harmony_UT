/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.25
 */

#include "sipAPIlibqt_gui_cpp_sip.h"

#line 27 "/home/arjan/.local/lib/python3.10/site-packages/PyQt5/bindings/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 12 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipQMap0100QString0100QString.cpp"

#line 27 "/home/arjan/.local/lib/python3.10/site-packages/PyQt5/bindings/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipQMap0100QString0100QString.cpp"


extern "C" {static void assign_QMap_0100QString_0100QString(void *, SIP_SSIZE_T, void *);}
static void assign_QMap_0100QString_0100QString(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QMap< ::QString, ::QString> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QMap< ::QString, ::QString> *>(sipSrc);
}


extern "C" {static void *array_QMap_0100QString_0100QString(SIP_SSIZE_T);}
static void *array_QMap_0100QString_0100QString(SIP_SSIZE_T sipNrElem)
{
    return new QMap< ::QString, ::QString>[sipNrElem];
}


extern "C" {static void *copy_QMap_0100QString_0100QString(const void *, SIP_SSIZE_T);}
static void *copy_QMap_0100QString_0100QString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMap< ::QString, ::QString>(reinterpret_cast<const QMap< ::QString, ::QString> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QMap_0100QString_0100QString(void *, int);}
static void release_QMap_0100QString_0100QString(void *ptr, int)
{
    delete reinterpret_cast<QMap< ::QString, ::QString> *>(ptr);
}



extern "C" {static int convertTo_QMap_0100QString_0100QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMap_0100QString_0100QString(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMap< ::QString, ::QString> **sipCppPtr = reinterpret_cast<QMap< ::QString, ::QString> **>(sipCppPtrV);

#line 85 "/home/arjan/.local/lib/python3.10/site-packages/PyQt5/bindings/QtCore/qpycore_qmap.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QMap<QString, QString> *qm = new QMap<QString, QString>;

    Py_ssize_t pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int kstate;
        QString *k = reinterpret_cast<QString *>(
                sipForceConvertToType(kobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &kstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict key has type '%s' but 'QString' is expected",
                    sipPyTypeName(Py_TYPE(kobj)));

            delete qm;

            return 0;
        }

        int vstate;
        QString *v = reinterpret_cast<QString *>(
                sipForceConvertToType(vobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &vstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a dict value has type '%s' but 'QString' is expected",
                    sipPyTypeName(Py_TYPE(vobj)));

            sipReleaseType(k, sipType_QString, kstate);
            delete qm;

            return 0;
        }

        qm->insert(*k, *v);

        sipReleaseType(v, sipType_QString, vstate);
        sipReleaseType(k, sipType_QString, kstate);
    }
 
    *sipCppPtr = qm;
 
    return sipGetState(sipTransferObj);
#line 107 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipQMap0100QString0100QString.cpp"
}


extern "C" {static PyObject *convertFrom_QMap_0100QString_0100QString(void *, PyObject *);}
static PyObject *convertFrom_QMap_0100QString_0100QString(void *sipCppV, PyObject *sipTransferObj)
{
   QMap< ::QString, ::QString> *sipCpp = reinterpret_cast<QMap< ::QString, ::QString> *>(sipCppV);

#line 31 "/home/arjan/.local/lib/python3.10/site-packages/PyQt5/bindings/QtCore/qpycore_qmap.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QMap<QString, QString>::const_iterator it = sipCpp->constBegin();
    QMap<QString, QString>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        QString *k = new QString(it.key());
        PyObject *kobj = sipConvertFromNewType(k, sipType_QString,
                sipTransferObj);

        if (!kobj)
        {
            delete k;
            Py_DECREF(d);

            return 0;
        }

        QString *v = new QString(it.value());
        PyObject *vobj = sipConvertFromNewType(v, sipType_QString,
                sipTransferObj);

        if (!vobj)
        {
            delete v;
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }

        ++it;
    }

    return d;
#line 168 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipQMap0100QString0100QString.cpp"
}


sipMappedTypeDef sipTypeDef_libqt_gui_cpp_sip_QMap_0100QString_0100QString = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_384,     /* QMap<QString,QString> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QMap_0100QString_0100QString,
    array_QMap_0100QString_0100QString,
    copy_QMap_0100QString_0100QString,
    release_QMap_0100QString_0100QString,
    convertTo_QMap_0100QString_0100QString,
    convertFrom_QMap_0100QString_0100QString
};
