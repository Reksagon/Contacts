import QtQuick 2.12
import QtQuick.Window 2.12
import StyleSettings 1.0
import ContactsModule.Impl 1.0
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Contacts")


    ContactsView {
    anchors.fill: parent
    }



    Rectangle{
         id: _backgroud
         z: - 100
         anchors.fill: parent
         color: Style.backgroundColor
         opacity: Style.emphasisOpacity

    }


}
