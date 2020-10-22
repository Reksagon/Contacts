import QtQuick 2.0
import ContactsModule.Base 1.0
import StyleSettings 1.0
import RecourcesProvide 1.0

BaseListDelegate {
id: root


ImageB{
    id: _imagecontact
    anchors.left: root.left
    anchors.leftMargin: Style.defaultOffset
    anchors.verticalCenter: root.verticalCenter
    width: root.height - 10
    height: root.height - 10
image.source: Resources.contacts.defaultContactIcon
}

    Column{
    anchors.verticalCenter: root.verticalCenter
    anchors.left: _imagecontact.right
    anchors.leftMargin: Style.defaultOffset

    Row{
        spacing: Style.smallSpacing
        BaseText {
            text: name
        }
        BaseText{
            text: surname
        }

    }
        BaseText{
            text: "+" + phone
            color: Style.primaryColor
        }
    }
}

