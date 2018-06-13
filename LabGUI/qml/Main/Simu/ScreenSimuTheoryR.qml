import QtQuick 2.9
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import QtQuick.Controls.Material 2.0
Pane {
    ColumnLayout {
             anchors.fill: parent
             CheckBox { text: qsTr("E-mail") }
             CheckBox { text: qsTr("Calendar") }
             CheckBox { text: qsTr("Contacts") }
             Image {
                 id: image2
                 anchors.left: parent.left
                 anchors.leftMargin: 6
                 width: 133
                 height: 88
                 fillMode: Image.PreserveAspectFit
                 source: "qrc:/img/bookPc.png"

                   }

}
}
