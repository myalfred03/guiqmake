import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.1
import QtQuick.Controls.Material 2.0


Flickable {
    id: flickable
    clip: true
    contentHeight: pane.height

    Shortcut {
        sequence: "Up"
        onActivated: scrollBar.decrease()
           }

    Shortcut {
        sequence: "Down"
        onActivated: scrollBar.increase()
           }

    Pane {
        id:pane
        anchors.right: parent.right
        anchors.rightMargin: 8
        anchors.left: parent.left
        anchors.leftMargin: 5

        Column {
            id: column
            anchors.fill: parent
            spacing: 10

            Text{
                width: parent.width
                text: "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "So GnarNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "So GnarNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "and two different GUI options, Octopi or Pamac."
                wrapMode: Text.Wrap
                font.pointSize: 24
                color: "white"
                horizontalAlignment: Text.AlignJustify
                }

            Text{
                width: parent.width
                text: "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "So GnarNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "So GnarNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "and two different GUI options, Octopi or Pamac."
                wrapMode: Text.Wrap
                font.pointSize: 24
                color: "white"
                horizontalAlignment: Text.AlignJustify
                }

            Text{
                width: parent.width
                text: "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "So GnarNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "So GnarNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "Sonar GNU/Linux has three different options for managing "+
                   "packages. The original command line option, Pacman "+
                   "and two different GUI options, Octopi or Pamac."

                wrapMode: Text.Wrap
                font.pointSize: 24
                color: "white"
                horizontalAlignment: Text.AlignJustify
                }

            CheckBox {
                text: qsTr("E-mail")
                     }

            CheckBox {
                text: qsTr("Calendar")
                     }

            CheckBox {
            text: qsTr("Contacts")
                     }

            Image {
                id: image2
                width: 133
                height: 88
                fillMode: Image.PreserveAspectFit
                source: "qrc:/img/welcome.png"
                  }

               }

         }//pane

    ScrollBar.vertical: ScrollBar {
        id:scrollBar
        pressed: true
        active: true
        anchors.top: flickable.top
        anchors.bottom: flickable.bottom
        anchors.right: flickable.right
        anchors.rightMargin: -flickable.rightPadding + 2
                                 }

    } //flickable