import QtQuick 2.0
import QtQuick.Window 2.2
import QtGraphicalEffects.private 1.0
import QtQuick.Controls.Universal 2.0
import QtQuick.Controls.Material 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2


Item {
    id:welcome
    visible: true
 property bool visi: true
    FontLoader { id: textFont;    source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: numericFont; source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: fontSystem;  source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: localFont;   source: "qrc:/ReFormation Sans Regular.ttf" }

    Image {

//        width: 1400
//        height: 718
        width: Screen.width
        height: Screen.height
        z: -1
        //        width: 1336
        //        height: 869
        //        anchors.horizontalCenterOffset: 68
        //        anchors.topMargin: 0
        opacity: 1.0
        //        anchors.top: parent.top
        //        anchors.horizontalCenter: parent.horizontalCenter
        //        anchors.margins: 0.001
//        sourceSize.width: 1400
//        sourceSize.height: 920

        source: "qrc:/img/background02.png"
        smooth: true
        //}//image


        Rectangle{
            id:banner
            x: 0
            y: 0
            width: Screen.width
            height: 95
            anchors.top: parent.top
            color: "#00000000"
            opacity: 1
            anchors.topMargin: 8
            z: 1

            Rectangle{
                id:welcom
                anchors.right: logoNIC.left
                anchors.rightMargin: 0
               anchors.top: parent.top
               anchors.topMargin: 0
               anchors.bottom: parent.bottom
               anchors.bottomMargin: 0
               anchors.left: logoUNI.right
               anchors.leftMargin: 0
//               width: 613
//               height: 99
               color: "#191c28"
               radius: 25
               border.width: 3
               border.color: "#da300e"
               opacity: 0.3
            }
            Rectangle{
                id:rlogoUNI
                anchors.right:welcom.left
                anchors.rightMargin: 0
                anchors.left: parent.left
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 0
//               width: 613
//               height: 99
               color: "#191c28"
               radius: 25
               border.width: 3
               border.color: "#409fe3"
               opacity: 0.1
            }
            Rectangle{
                id:rlogoNIC
                anchors.right: parent.right
                anchors.rightMargin: 46
                anchors.left: welcom.right
                anchors.leftMargin: 0
                anchors.bottom: parent.bottom
                anchors.bottomMargin: 0
                anchors.top: parent.top
                anchors.topMargin: 0
//               width: 613
//               height: 99
               color: "#191c28"
               radius: 25
               border.width: 3
               border.color: "#409fe3"
               opacity: 0.1
            }


               Text {
                   id: welcome2
                   anchors.right: logoNIC.left
                   anchors.rightMargin: 0
                  anchors.top: parent.top
                  anchors.topMargin: 0
                  anchors.bottom: parent.bottom
                  anchors.bottomMargin: 0
                  anchors.left: logoUNI.right
                  anchors.leftMargin: 0
                   width: 629
                   height: 91
                   color: "#fbfbfb"
                   text: "Bienvenidos al laboratorio Virtual \n de Robótica Industrial"
                   opacity: 1
                   horizontalAlignment: Text.AlignHCenter
                   font.family: textFont.name
                   font.pixelSize: 37
                   font.bold: false
               }



Item {
    id: logoUNI
//    x: 0
//    y: 14
    width: 394
    height: 101
    anchors.left: parent.left
    anchors.leftMargin: 9
    anchors.bottom: parent.bottom
    anchors.bottomMargin: 0
    anchors.top: parent.top
    anchors.topMargin: 3
    clip: false
    transformOrigin: Item.Center


    Image {
        id: image2
        anchors.left: parent.left
        anchors.leftMargin: 6
        width: 133
        height: 88
        fillMode: Image.PreserveAspectFit
        source: "qrc:/img/UNI-LOGOa.png"

    }

    Text {
        id: txtSystem15
        x: 147
        y: 8
        width: 240
        height: 35
        color: "#ffffff"
        text: qsTr("Universidad Nacional \nde Ingeniería")
        font.family: textFont.name
        horizontalAlignment: Text.AlignHCenter
        z: 2
        font.pointSize: 18
        font.bold: true
    }

    Text {
        id: txtSystem2
        x: 151
        y: 59
        width: 236
        height: 34
        color: "#ffffff"
        text: qsTr("Ingeniería Electrónica\nFacultad de electrotecnia y computación")
        horizontalAlignment: Text.AlignHCenter
        z: 3
        font.pointSize: 10
        font.family: textFont.name
        font.bold: true
    }
}

Item {
    id: logoNIC
//    x: 1035
//    y: 8
    anchors.right: parent.right
    anchors.rightMargin: 15
    anchors.bottom: parent.bottom
    anchors.bottomMargin: 0
    anchors.top: parent.top
    anchors.topMargin: 0
    width: 307
    height: 101
    transformOrigin: Item.Center
    z: 1
    Image {
        id: image3
        x: 145
        y: 5
        width: 133
        height: 88
        z: 3
        fillMode: Image.PreserveAspectFit
        source: "qrc:/img/NIC.jpg"
    }

    Text {
        id: txtSystem16
        x: 3
        y: 27
        width: 136
        height: 35
        color: "#ffffff"
        text: qsTr("Nicaragua")
        font.family: textFont.name
        font.pointSize: 18
        z: 2
        horizontalAlignment: Text.AlignHCenter
        font.bold: true
    }

    Text {
        id: txtSystem3
        x: 5
        y: 60
        width: 134
        height: 34
        color: "#ffffff"
        text: qsTr("Managua")
        font.family: textFont.name
        font.pointSize: 10
        z: 3
        horizontalAlignment: Text.AlignHCenter
        font.bold: true
    }


    }
} //Rectangle



Item{
           id:item_missontime
           x: 647
           y: 548
           width: 484
           height: 99
           z: 1

           Text {
               id: lblMIssionTime
               x: 0
               y: 52
               width: 225
               height: 38
               color: Qt.hsla(0.57,0.0,1,0.8)
               text: "Tiempo usando \n LAB :"
               anchors.centerIn: parent
               font.family: textFont.name
               font.pixelSize: 30
               anchors.horizontalCenterOffset: -127
               font.bold: false
               anchors.verticalCenterOffset: 18
           }


          // Item Hour

              Text {
              id: lblhour
              x: 347
              y: 71

              width: 39
              height: 20
              color: Qt.hsla(0.57,0.0,1,0.8)
              text: "HR"
              verticalAlignment: Text.AlignTop
              anchors.centerIn: parent
              font.family: textFont.name
              font.pixelSize: 20
              anchors.horizontalCenterOffset: 37
              font.bold: false
              anchors.verticalCenterOffset: 23
              }
              // Item Minute

              Text {
              id: lblmin
              x: 501
              y: 70

              width: 37
              height: 20
              color: Qt.hsla(0.57,0.0,1,0.8)
              text: "MIN"
              anchors.centerIn: parent
              font.family: textFont.name
              font.pixelSize: 20
              anchors.horizontalCenterOffset: 102
              font.bold: false
              anchors.verticalCenterOffset: 23
              }

          Text {
              id: lblsec
              x: 652
              y: 70

              width: 39
              height: 20
              color: Qt.hsla(0.57,0.0,1,0.8)
              text: "SEC"
              anchors.centerIn: parent
              font.family: textFont.name
              font.pixelSize: 20
              anchors.horizontalCenterOffset: 186
              font.bold: false
              anchors.verticalCenterOffset: 23
          }
} // item_mission_time


Rectangle{
    id:columnR
    anchors.right: columnM.right
    anchors.rightMargin: 5
    anchors.top: banner.bottom
    anchors.topMargin: 30
    anchors.bottom: columnM.bottom
    anchors.bottomMargin: 5
    anchors.left: columnM.left
    anchors.leftMargin: 5
//               width: 613
//               height: 99
   color: "#191c28"
   radius: 25
   z: 3
   border.width: 3
   border.color: "#da300e"
   opacity: 0.3

}
    Column {
       id:columnM //Column Master
        property int buttonWidth: 200
        spacing: 20
        anchors.top: banner.bottom
        anchors.topMargin: 30

        anchors.centerIn: parent
//        x: 559
//        y: 134
        width: 381
        height: 314



            Label {
                width: parent.width
                wrapMode: Label.Wrap
                horizontalAlignment: Qt.AlignHCenter
                color: "#ffffff"
                text: "Funcionalidades del Laboratorio Virtual de  "
                    + "Robótica Industrial."
                font.pointSize: 15
            }

            Button {
                text: "Message"
                anchors.horizontalCenter: parent.horizontalCenter
                width: 200
                onClicked: messageDialog.open()

                Dialog {
                    id: messageDialog

                    x: (parent.width - width) / 2
                    y: (parent.height - height) / 2

                    title: "Message"

                    Label {
                        text: "Lorem ipsum dolor sit amet..."
                    }
                }
            }

            Button {
                id: button
                text: "Confirmation"
                anchors.horizontalCenter: parent.horizontalCenter
                width: 200
                onClicked: confirmationDialog.open()

                Dialog {
                    id: confirmationDialog

                    x: (parent.width - width) / 2
                    y: (parent.height - height) / 2
                    parent: ApplicationWindow.overlay

                    modal: true
                    title: "Confirmation"
                    standardButtons: Dialog.Yes | Dialog.No

                    Column {
                        spacing: 20
                        anchors.fill: parent
                        Label {
                            text: "The document has been modified.\nDo you want to save your changes?"
                        }
                        CheckBox {
                            text: "Do not ask again"
                            anchors.right: parent.right
                        }
                    }
                }
            }

            Button {
                text: "Content"
                anchors.horizontalCenter: parent.horizontalCenter
                width: 200
                onClicked: contentDialog.open()

                Dialog {
                    id: contentDialog

                    x: (parent.width - width) / 2
                    y: (parent.height - height) / 2
                    width: 500
                    height: 500
                    contentHeight: logo.height * 2
                    parent: ApplicationWindow.overlay

                    modal: true
                    title: "Content"
                    standardButtons: Dialog.Close

                    Flickable {
                        id: flickable
                        clip: true
                        anchors.fill: parent
                        contentHeight: column.height

                        Column {
                            id: column
                            spacing: 20
                            width: parent.width

                            Image {
                                id: logo
                                width: parent.width / 2
                                anchors.horizontalCenter: parent.horizontalCenter
                                fillMode: Image.PreserveAspectFit
                                source: "qrc:/img/UNI-LOGOa.png"
                            }

                            Label {
                                width: parent.width
                                text: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc finibus "
                                    + "in est quis laoreet. Interdum et malesuada fames ac ante ipsum primis "
                                    + "in faucibus. Curabitur eget justo sollicitudin enim faucibus bibendum. "
                                    + "Suspendisse potenti. Vestibulum cursus consequat mauris id sollicitudin. "
                                    + "Duis facilisis hendrerit consectetur. Curabitur sapien tortor, efficitur "
                                    + "id auctor nec, efficitur et nisl. Ut venenatis eros in nunc placerat, "
                                    + "eu aliquam enim suscipit."
                                wrapMode: Label.Wrap
                            }
                        }

                        ScrollIndicator.vertical: ScrollIndicator {
                            parent: contentDialog.contentItem
                            anchors.top: flickable.top
                            anchors.bottom: flickable.bottom
                            anchors.right: parent.right
                            anchors.rightMargin: -contentDialog.rightPadding + 1
                        }
                    }
                }
            }

            Button {
                text: "Input"
                anchors.horizontalCenter: parent.horizontalCenter
                width: 200
                onClicked: inputDialog.open()

                Dialog {
                    id: inputDialog

                    x: (parent.width - width) / 2
                    y: (parent.height - height) / 2
                    parent: ApplicationWindow.overlay

                    focus: true
                    modal: true
                    title: "Input"
                    standardButtons: Dialog.Ok | Dialog.Cancel

                    ColumnLayout {
                        spacing: 20
                        anchors.fill: parent
                        Label {
                            elide: Label.ElideRight
                            text: "Please enter the credentials:"
                            Layout.fillWidth: true
                        }
                        TextField {
                            focus: true
                            placeholderText: "Username"
                            Layout.fillWidth: true
                        }
                        TextField {
                            placeholderText: "Password"
                            echoMode: TextField.PasswordEchoOnEdit
                            Layout.fillWidth: true
                        }
                    }
                }
            }
}//colum

}//image
}
