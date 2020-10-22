pragma Singleton
import QtQuick 2.0

QtObject {
    property bool DarkTheme: true
    readonly property color  primaryColor: DarkTheme ? "#BB86FC" : "#6200EE"
    readonly property color  primaryVariantColor: "#3700B3"
    readonly property color  seconadryColor: "#03DAC6"
    readonly property color  secondaryVariant: DarkTheme ? "018786" : seconadryColor
    readonly property color  backgroundColor: DarkTheme ? "121212" : "#FFFFFF"
    readonly property color  errorColor: DarkTheme ? "CF6679" : "#B00020"
    readonly property color  backgroundColor: DarkTheme ? "121212" : "#FFFFFF"
    readonly property color  textColor: DarkTheme ? "FFFFFF" : "#000000"
    readonly property color  themeDefaultColor: DarkTheme ? "000000" : "#FFFFFF"
    readonly property color  themeInvertedColor: DarkTheme ? "FFFFFF" : "#000000"

    readonly property real defaultOpacity: 1
    readonly property real emphasisOpacity: 0.87
    readonly property real secondatyOpacity: 0.6
    readonly property real disabledOpacity: 1

    readonly property int defaultOffset: 15
    readonly property int mediumOffset: 10
    readonly property int tinyOffset: 5

    readonly property int bigSpacing: 20
    readonly property int mediumSpacing: 10
    readonly property int smallSpacing: 10
}
