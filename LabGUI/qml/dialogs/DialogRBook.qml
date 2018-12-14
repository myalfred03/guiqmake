import QtQuick 2.9
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.2  //Dialogs, Scroll, Label, lib
import QtQml.Models 2.3


Dialog {
    id: dialogRBook
    x: (parent.width - width) / 2
    y: (parent.height - height) / 2
    width: 500
    height: 500
    //contentHeight: logo.height * 2
    parent: ApplicationWindow.overlay
    modal: true
    title: "Libros de Robótica Recomendados"
    standardButtons: Dialog.Close

    Flickable {
        id: flickable
        clip: true
        anchors.fill: parent
        contentHeight: column.height
        Shortcut {
            sequence: "Up"
            onActivated: scrollBar.decrease()
               }
        Shortcut {
            sequence: "Down"
            onActivated: scrollBar.increase()
               }

        Column {
            id: column
            spacing: 20
            width: parent.width

            Image {
                id: logo4
                //width: parent.width / 2
                anchors.horizontalCenter: parent.horizontalCenter
                source: "qrc:/img/dialogsWel/books.png"
                sourceSize.width: 50
                sourceSize.height: 50
                fillMode: Image.PreserveAspectCrop
                  }

            RowLayout{
                spacing: 10
                anchors.left:dialogRBook.left
                anchors.right: dialogRBook.right
                anchors.horizontalCenter: parent.horizontalCenter
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.maximumHeight: 100
                Layout.maximumWidth: 100

                Image {
                    id: logo
                    //width: parent.width / 2
                    //anchors.horizontalCenter: parent.horizontalCenter
                    source: "qrc:/img/dialogsWel/Barrientos.png"
                    sourceSize.width: 90
                    sourceSize.height: 90
                    fillMode: Image.PreserveAspectCrop
                    }
                Image {
                    id: logo2
                    // width: parent.width / 2
                    //anchors.horizontalCenter: parent.horizontalCenter
                    source: "qrc:/img/dialogsWel/Craig.png"
                    sourceSize.width: 100
                    sourceSize.height: 100
                    fillMode: Image.PreserveAspectCrop
                    }
                      }
            Label {
                width: parent.width
                text: "<p>Dentro del laboratorio se acceder&aacute;n a recursos bibliogr&aacute;ficos de importancia para el desarrollo y consolidaci&oacute;n de los conceptos b&aacute;sicos de la rob&oacute;tica industrial.</p>"
                wrapMode: Label.Wrap
                textFormat: Text.RichText
                }

            Image {
                id: logo1
                width: parent.width / 2
                anchors.horizontalCenter: parent.horizontalCenter
                fillMode: Image.PreserveAspectFit
                source: "qrc:/img/dialogsWel/Barrientos.png"
                }
            Label {
                width: parent.width
                text: "<p>Es un libro que va dirigido tanto para los alumnos de ingenier&iacute;a y ciencias como para todo profesional que necesite conocer qu&eacute; es un robot, c&oacute;mo funciona y c&oacute;mo debe utilizarlo, retomando dentro de este libro parte de las cuatro secciones que compone el laboratorio virtaual de Rob&oacute;tica industrial, Morfolog&iacute;a del robot, Herramientas matem&aacute;ticas del Robot, Cinem&aacute;tica del robot, Programaci&oacute;n del robot.</p>"
                wrapMode: Label.Wrap
                textFormat: Text.RichText

                }

                     }

        ScrollBar.vertical: ScrollBar {
            id:scrollBar
            pressed: true
            active: true
            parent: dialogRBook.contentItem
            anchors.top: flickable.top
            anchors.bottom: flickable.bottom
            anchors.right: parent.right
            anchors.rightMargin: -dialogRBook.rightPadding + 1
            }
        }
}//Dialog1
