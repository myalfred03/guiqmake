import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Window 2.1

Window {
    id: mainWindow
    visible: true
    width: 1200
    height: 720
    property alias navBarColor: navBar.color

    property string firstState: appController.firstState.objectName
    property string secondState: appController.secondState.objectName
    property string thirdState: appController.thirdState.objectName
    FontLoader { id: textFont;    source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: numericFont; source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: fontSystem;  source: "qrc:/ReFormation Sans Regular.ttf" }
    FontLoader { id: localFont;   source: "qrc:/ReFormation Sans Regular.ttf" }


    property Item firstStatePage: StatePage {
        objectName: firstState
        titleText: qsTr("I'm the first state")
        pageColor: "#eee"
        //z: 1
        Image{
            width: 1400
            height: 718
            z: 1
            //        width: 1336
            //        height: 869
            //        anchors.horizontalCenterOffset: 68
            //        anchors.topMargin: 0
            opacity: 1.0
            //        anchors.top: parent.top
            //        anchors.horizontalCenter: parent.horizontalCenter
            //        anchors.margins: 0.001
            sourceSize.width: 1400
            sourceSize.height: 920

            source: "background02.png"
            smooth: true
}//image
        Item{
                   id:welcome
                   x: 141
                   y: 8
                   width: 888
                   height: 99
                   z: 3

                   Text {
                       id: welcome2
                       x: 176
                       y: 0
                       width: 629
                       height: 38
                       color: Qt.hsla(0.57,0.0,1,0.8)
                       text: "Bienvenidos al laboratorio Virtual \n de Robótica Industrial"
                       horizontalAlignment: Text.AlignHCenter
                      // anchors.centerIn: parent
                       font.family: textFont.name
                       font.pixelSize: 50
                       //anchors.horizontalCenterOffset: -185
                       font.bold: false
                       //anchors.verticalCenterOffset: -2
                   }
        }



    Item{
               id:item_missontime
               x: 647
               y: 548
               width: 484
               height: 99
               z: 3

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


    Item {
        id: logoUNI
        x: 17
        y: 547
        width: 500
        height: 100
        transformOrigin: Item.Center
        z:3

        Image {
            id: image2
            x: 0
            y: 10
            width: 180
            height: 100
            source: "UNI-LOGO.png"
            z:3
        }

        Text {
            id: txtSystem15
            x: 200
            y: 10
            width: 240
            height: 35
            color: "#ffffff"
            text: qsTr("Universidad Nacional \nde Ingeniería")
            font.family: textFont.name
            horizontalAlignment: Text.AlignHCenter
            z: 2
            font.pointSize: 22
            font.bold: true
        }

        Text {
            id: txtSystem2
            x: 212
            y: 76
            width: 236
            height: 34
            color: "#ffffff"
            text: qsTr("Ingeniería Electrónica\nFacultad de electrotecnia y computación")
            horizontalAlignment: Text.AlignHCenter
            z: 3
            font.pointSize: 13
            font.family: textFont.name
            font.bold: true
        }
    }


    }
    property Item secondStatePage: StatePage {
        objectName: secondState
        titleText: qsTr("I'm the second state")
        pageColor: "#ddd"
    }
    property Item thirdStatePage: StatePage {
        objectName: thirdState
        titleText: qsTr("I'm the third state")
        pageColor: "#aaa"
    }

    function nav(item) {
        if (appController.pop) {
            stackView.pop()
        } else {
            stackView.push(item)
        }
    }

    Rectangle {
        id: navBar
        width: parent.width
        height: 60
        color: "#2f2f30"
        z: 1

//        Item {
//            id: nav
//            width: 700
//            height: 100
//            transformOrigin: Item.Center
//            z:1

//            Image {
//                id: image
//                width: parent.width
//                height: 60
//                source: "background.jpg"
//                z:3
//            }

//}
        Button {
            id: prevButton
            width: 100
            height: 40
            text: qsTr("<< Previous")
            visible: stackView.state !== firstState
            anchors {
                verticalCenter: parent.verticalCenter
                left: parent.left
                leftMargin: 10
            }
            onClicked: {
                appController.navPrevious()
            }
        }

        Button {
            id: nextButton
            width: 100
            height: 40
            text: qsTr("Next >>")
            visible: stackView.state !== thirdState
            anchors {
                verticalCenter: parent.verticalCenter
                right: parent.right
                rightMargin: 10
            }
            onClicked: {
                appController.navNext()
            }
        }
    }

    StackView {
        id: stackView
        x: 0
        y: 60
        width: parent.width
        height: parent.height - navBar.height
        z: -1
        anchors.bottomMargin: 0
        anchors.bottom: parent.bottom


        states: [
            State {
                name: firstState
                StateChangeScript {
                    script: nav(firstStatePage)

                }
            },
            State {
                name: secondState
                StateChangeScript {
                    script: nav(secondStatePage)
                }
            },
            State {
                name: thirdState
                StateChangeScript {
                    script: nav(thirdStatePage)
                }
            }
        ]

        Connections {
            target: appController
            onStateChanged: {
                stackView.state = objectName
                console.log("State Changed To: " + objectName)
            }
        }

        Component.onCompleted: {
            stackView.push(firstStatePage)
        }


    }

    Component.onCompleted: {
    }
}
