import QtQuick 2.9
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import QtQuick.Controls.Material 2.0

Pane {
    width: Math.min(imagef.width, imagef.height) / 3
    height: imagef.height //- toolBar.height
    property bool vis: true
    visible: vis

    function showSubMenu(url) {
        if (stackView.depth > 1)
            stackView.pop()
        stackView.push(url)
    }

//    function showMainMenu() {
//        if (stackView.depth > 1)
//            stackView.pop()
//    }

    Component {
        id: menuButton
        Button {
            Material.background: "#41cd52"
            focusPolicy: Qt.NoFocus
//            checkable: true
            Keys.onReturnPressed: clicked()

        }
    }

    ColumnLayout {
        spacing: 30
        anchors.fill: parent

        Loader {
            id: learning
            sourceComponent:  menuButton
            anchors.top: parent.top
            Layout.fillWidth: true
            onLoaded: {
                item.text = qsTr("Guia de Uso de LAB")
            }
        }

        Connections {
            target: learning.item
            onClicked: {
                showSubMenu("qrc:/qml/Main/Biblio/ScreenbiblioGuideLAB.qml")
            }
        }

        Loader {
            id: editWords
            anchors.top: learning.bottom
            Layout.fillWidth: true
            sourceComponent: menuButton
            onLoaded: {
                item.text = qsTr("Libros de Robotica")
            }
        }

        Connections {
            target: editWords.item
            onClicked: {
                showSubMenu("qrc:/qml/Main/Biblio/ScreenbiblioBookR.qml")
            }
        }

        Loader {
            id: addNewVocabulary
            anchors.top: editWords.bottom
            Layout.fillWidth: true
            sourceComponent: menuButton
            onLoaded: {
                item.text = qsTr("Teoria de Robots")
            }
        }

        Connections {
            target: addNewVocabulary.item
//            onClicked: {
//                showSubMenu("qrc:/screens/EditVocabulariesScreen.qml")
//            }
        }

        Loader {
            id: statistics
            anchors.top: addNewVocabulary.bottom
            Layout.fillWidth: true
            sourceComponent: menuButton
            onLoaded: {
                item.text = qsTr("Articulos academicos")
            }
        }

        Connections {
            target: statistics.item
//            onClicked: {
//                showSubMenu("qrc:/screens/StatisticScreen.qml")
//            }
        }

        Loader {
            id: translate
            anchors.top: statistics.bottom
            Layout.fillWidth: true
            sourceComponent: menuButton
            onLoaded: {
                item.text = qsTr("Libros ROS")
            }
        }

        Connections {
            target: translate.item
//            onClicked: {
//                showSubMenu("qrc:/screens/TranslateScreen.qml")
//            }
        }
        ToolButton {
            id:bwelcome
            anchors.left: parent.left
            anchors.leftMargin: 10
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 200
            width: 100
            height: 100
            ToolTip.timeout: 3000
            ToolTip.delay : 150
            ToolTip.visible: hovered
            ToolTip.text: "Ir a Bienvenida."

            ColumnLayout {
                id: aboutC
                spacing: 2
                anchors.centerIn: parent

                Image {
                    source: "qrc:/img/welcome.png"
                    sourceSize.width: 65
                    sourceSize.height: 65
                    fillMode: Image.PreserveAspectCrop
                    anchors.horizontalCenter: parent.horizontalCenter
                      }

                Text {
                    text: "Welcome"
                    font.pointSize: 10
                    font.bold: true
                    color: "#FFFFFF"
                    anchors.horizontalCenter: parent.horizontalCenter
                    wrapMode: Label.Wrap
                      }
                 }
                onClicked: {
                           mainLab.vis = false
                           welcome.vis = true

                       }

                 }//Button Welcome
    }
}
