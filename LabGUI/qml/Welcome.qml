import QtQuick 2.9
import QtQuick.Window 2.0
import QtGraphicalEffects.private 1.0
import QtQuick.Controls.Universal 2.0
import QtQuick.Controls.Material 2.0
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2
import Qt.labs.settings 1.0
import "dialogs"


Item {
    id:welcome
    visible: true
    property bool visi: true
    FontLoader { id: textFont;    source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: numericFont; source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: fontSystem;  source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: localFont;   source: "qrc:/ReFormation Sans Regular.ttf" }

    Image {
        id:imagef
        width: Screen.width
        height: Screen.height
        z: -1
        opacity: 1.0
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
                    x: 125
                    y: 7
                    width: 133
                    height: 79
                    z: 3
                    fillMode: Image.PreserveAspectFit
                    source: "qrc:/img/ni.jpg"
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
             }   //Rectangle Banner



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
            id:rowR
            anchors.right: parent.right
            anchors.rightMargin: 260
            anchors.top: banner.bottom
            anchors.topMargin: 70
            anchors.bottom: rowM.bottom
            anchors.bottomMargin: 5
            anchors.left: parent.left
            anchors.leftMargin: 180
           // anchors.centerIn: parent

            Material.foreground: "white"
            radius: 25
            border.width: 3
            border.color: "#da300e"
            opacity: 0.1
                  } //Rectangle RowLayout

        Text {
            anchors.top: rowR.top
            anchors.topMargin: 5
            anchors.left: parent.left
            anchors.right: parent.right
            width: parent.width
            wrapMode: Label.Wrap
            horizontalAlignment: Text.AlignHCenter
            color: "#ffffff"
            text: "Funcionalidades del Laboratorio Virtual Robótica Industrial."
            font.pointSize: 15
             }// Text RowLayout



        RowLayout {
            id:rowM //Row Master
            spacing: 20
            anchors.top: banner.bottom
            anchors.topMargin: 100
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 300
            anchors.left: parent.left
            anchors.leftMargin: 200
            anchors.right: parent.right
            anchors.rightMargin: 280

            Button {
                id: biblio
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredWidth: 100
                Layout.maximumHeight: 150
                Layout.maximumWidth: 150
                Layout.preferredHeight: 100

                ColumnLayout {
                    spacing: 2
                    anchors.centerIn: parent

                    Image {
                        source: "qrc:/img/bookPc.png"
                        sourceSize.width: 75
                        sourceSize.height: 75
                        fillMode: Image.PreserveAspectCrop
                        anchors.horizontalCenter: parent.horizontalCenter
                          }

                    Text {
                        color: "#ffffff"
                        text: "Recursos\nBibliograficos"
                        width: 75
                        height: 75
                        font.pointSize: 12
                        horizontalAlignment: Text.AlignHCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                          }

                             }//column

                onClicked: biblioMenu.open()

                Menu {
                    id: biblioMenu
                    x: parent.width - width
                    y: parent.height - height
                    transformOrigin: Menu.TopLeft

                    MenuItem {
                        text: "Manual de uso del LAB"
                        onTriggered: dialogRGoU.open()
                             }
                    MenuItem {
                        text: "Libros de Robótica"
                        onTriggered: dialogRBook.open()
                             }
                    MenuItem {
                        text: "Teoria de Robots"
                        onTriggered: dialogRToR.open()

                             }
                     }

                   } //Button biblio

            ToolButton {
                ToolTip.timeout: 3000
                ToolTip.delay : 150
                ToolTip.visible: hovered
                ToolTip.text: "Si Lees la documentación\nTe sera mas Facil\nModelar tu Robot :)."
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: 80
                Layout.maximumWidth: 80

                Image {
                    source: "qrc:/img/step1.png"
                    sourceSize.width: 50
                    sourceSize.height: 50
                    fillMode: Image.PreserveAspectCrop
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                      }
                        }

            Button {
                id:model
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredWidth: 100
                Layout.maximumHeight: 150
                Layout.maximumWidth: 150
                Layout.preferredHeight: 100

                ColumnLayout {
                    spacing: 2
                    anchors.centerIn: parent

                    Image {
                        source: "qrc:/img/modelURDF.png"
                        sourceSize.width: 75
                        sourceSize.height: 75
                        fillMode: Image.PreserveAspectCrop
                        anchors.horizontalCenter: parent.horizontalCenter

                          }

                    Text {
                        color: "#ffffff"
                        text: "Modelacion \nde Robots"
                        width: 75
                        height: 75
                        font.pointSize: 11
                        horizontalAlignment: Text.AlignHCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                         }

                             }//column

                onClicked: modelMenu.open()

                Menu {
                    id: modelMenu
                    x: parent.width - width
                    y: parent.height - height
                    transformOrigin: Menu.TopLeft

                    MenuItem {
                        text: "Teoria de Modelación"
                        onTriggered: dialogMToR.open()
                             }
                    MenuItem {
                        text: "Languaje URDF"
                        onTriggered: dialogMLU.open()
                             }
                    MenuItem {
                        text: "Modela tu Robot"
                        onTriggered: dialogMRb.open()
                             }
                     }

                    } //Button model

            ToolButton {
                ToolTip.timeout: 3000
                ToolTip.delay : 150
                ToolTip.visible: hovered
                ToolTip.text: "Al modelar tu propio Robot\naprenderas a calcular\ny verificar sus movimientos :)."
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: 80
                Layout.maximumWidth: 80

                Image {
                    source: "qrc:/img/step2.png"
                    sourceSize.width: 50
                    sourceSize.height: 50
                    fillMode: Image.PreserveAspectCrop
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                      }
                        }

            Button {
                id:kinema
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredWidth: 100
                Layout.maximumHeight: 150
                Layout.maximumWidth: 150
                Layout.preferredHeight: 100

                ColumnLayout {
                    spacing: 2
                    anchors.centerIn: parent
                    Image {
                        source: "qrc:/img/Kinema.png"
                        sourceSize.width: 75
                        sourceSize.height: 75
                        fillMode: Image.PreserveAspectCrop
                        anchors.horizontalCenter: parent.horizontalCenter
                          }

                    Text {
                        color: "#ffffff"
                        text: "Cinematica\n de Robots"
                        width: 75
                        height: 75
                        font.pointSize: 12
                        horizontalAlignment: Text.AlignHCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                         }

                              }//column

                onClicked: kinemaMenu.open()

                Menu {
                    id: kinemaMenu
                    x: parent.width - width
                    y: parent.height - height
                    transformOrigin: Menu.TopLeft

                    MenuItem {
                        text: "Teoria de Cinemática"
                        onTriggered: dialogKToR.open()
                             }
                    MenuItem {
                        text: "URDF y Cinematica"
                        onTriggered: dialogKLU.open()
                             }
                    MenuItem {
                        text: "Calcula la Cinematica"
                        onTriggered: dialogKRcal.open()
                             }
                     }

                   } //Button

            ToolButton {
                ToolTip.timeout: 2500
                ToolTip.delay : 150
                ToolTip.visible: hovered
                ToolTip.text: "Ahora que sabes de Cinematica\nTe sera facil programar\nuna rutina para un Robot :)."
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: 80
                Layout.maximumWidth: 80

                Image {
                    source: "qrc:/img/step3.png"
                    sourceSize.width: 50
                    sourceSize.height: 50
                    fillMode: Image.PreserveAspectCrop
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                      }
                        }

            Button {
                id:simul
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.preferredWidth: 100
                Layout.maximumHeight: 150
                Layout.maximumWidth: 150
                Layout.preferredHeight: 100

                ColumnLayout {
                    spacing: 2
                    anchors.centerIn: parent
                    Image {
                        source: "qrc:/img/Simu100x.png"
                        sourceSize.width: 75
                        sourceSize.height: 75
                        fillMode: Image.PreserveAspectCrop
                        anchors.horizontalCenter: parent.horizontalCenter

                          }

                    Text {
                        color: "#ffffff"
                        text: "Simulación\nde Robots "
                        width: 75
                        height: 75
                        font.pointSize: 12
                        horizontalAlignment: Text.AlignHCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                         }

                               }//columnsimulation

                onClicked: simulMenu.open()

                Menu {
                    id: simulMenu
                    x: parent.width - width
                    y: parent.height - height
                    transformOrigin: Menu.TopLeft

                    MenuItem {
                        text: "Teoria en la Simulación"
                        onTriggered: dialogSToR.open()
                             }
                    MenuItem {
                        text: "SDF y Simulación"
                        onTriggered: dialogSsdf.open()
                             }
                    MenuItem {
                        text: "Aprende con tu Robot Virtual"
                        onTriggered: dialogSRo.open()
                             }
                     }

                    } //Buttonsimulation

            }//RowLayout

        Button {
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 30
        width: 100
        height: 100

        ColumnLayout {
            id: aboutC
            spacing: 2
            anchors.centerIn: parent

            Image {
                source: "qrc:/img/about.png"
                sourceSize.width: 65
                sourceSize.height: 65
                fillMode: Image.PreserveAspectCrop
                anchors.horizontalCenter: parent.horizontalCenter
                  }

            Text {
                text: "ABOUT"
                font.pointSize: 10
                font.bold: true
                color: "#FFFFFF"
                anchors.horizontalCenter: parent.horizontalCenter
                wrapMode: Label.Wrap
                  }
             }
        onClicked: dialogLV.open()

             }//Button About

}//image

// Dialogos con los textos

    DialogRBook{
        id:dialogRBook
               }
    DialogWel{
        id:dialogRB1
             }
    DialogGuide{
        id:dialogguide
               }
    DialogLV{
        id:dialogLV
            }
    DialogRToR{
        id:dialogRToR
              }
    DialogRGoU{
        id:dialogRGoU
              }
    DialogKLU{
        id:dialogKLU
             }
    DialogKRcal{
        id:dialogKRcal
               }
    DialogKToR{
        id:dialogKToR
              }

    DialogMLU {
        id: dialogMLU
           }
    DialogMRb {
        id: dialogMRb
           }
    DialogMToR {
        id: dialogMToR
           }
    DialogSRo {
        id: dialogSRo
              }

    DialogSsdf {
        id: dialogSsdf
               }
    DialogSToR {
        id: dialogSToR
               }
} //Item Window welcome
