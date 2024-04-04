/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.25
 */

#include "sipAPIlibqt_gui_cpp_sip.h"

#line 7 "plugin_descriptor.sip"
#include <qt_gui_cpp/plugin_descriptor.h>
#line 12 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppPluginDescriptor.cpp"

#line 27 "/home/arjan/.local/lib/python3.10/site-packages/PyQt5/bindings/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppPluginDescriptor.cpp"
#line 27 "/home/arjan/.local/lib/python3.10/site-packages/PyQt5/bindings/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 19 "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/qt_gui_core/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppPluginDescriptor.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_qt_gui_cpp_PluginDescriptor(void *, int);}
static void release_qt_gui_cpp_PluginDescriptor(void *sipCppV, int)
{
    delete reinterpret_cast< ::qt_gui_cpp::PluginDescriptor *>(sipCppV);
}


extern "C" {static void assign_qt_gui_cpp_PluginDescriptor(void *, SIP_SSIZE_T, void *);}
static void assign_qt_gui_cpp_PluginDescriptor(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::qt_gui_cpp::PluginDescriptor *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::qt_gui_cpp::PluginDescriptor *>(sipSrc);
}


extern "C" {static void *copy_qt_gui_cpp_PluginDescriptor(const void *, SIP_SSIZE_T);}
static void *copy_qt_gui_cpp_PluginDescriptor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::qt_gui_cpp::PluginDescriptor(reinterpret_cast<const  ::qt_gui_cpp::PluginDescriptor *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_qt_gui_cpp_PluginDescriptor(sipSimpleWrapper *);}
static void dealloc_qt_gui_cpp_PluginDescriptor(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_qt_gui_cpp_PluginDescriptor(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_qt_gui_cpp_PluginDescriptor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_qt_gui_cpp_PluginDescriptor(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::qt_gui_cpp::PluginDescriptor *sipCpp = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const QMap< ::QString, ::QString>& a1def = QMap<QString,QString>();
        const QMap< ::QString, ::QString>* a1 = &a1def;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1|J1", sipType_QString,&a0, &a0State, sipType_QMap_0100QString_0100QString,&a1, &a1State))
        {
            sipCpp = new  ::qt_gui_cpp::PluginDescriptor(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QMap< ::QString, ::QString> *>(a1),sipType_QMap_0100QString_0100QString,a1State);

            return sipCpp;
        }
    }

    {
        const  ::qt_gui_cpp::PluginDescriptor* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_qt_gui_cpp_PluginDescriptor, &a0))
        {
            sipCpp = new  ::qt_gui_cpp::PluginDescriptor(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static pyqt5ClassPluginDef plugin_qt_gui_cpp_PluginDescriptor = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_PluginDescriptor = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_qt_gui_cpp__PluginDescriptor,
        {SIP_NULLPTR},
        &plugin_qt_gui_cpp_PluginDescriptor
    },
    {
        sipNameNr_PluginDescriptor,
        {3, 255, 0},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_qt_gui_cpp_PluginDescriptor,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_qt_gui_cpp_PluginDescriptor,
    assign_qt_gui_cpp_PluginDescriptor,
    SIP_NULLPTR,
    copy_qt_gui_cpp_PluginDescriptor,
    release_qt_gui_cpp_PluginDescriptor,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
