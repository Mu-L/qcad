// Auto generated by Testing Dashboard
// File        : scripts/Edit/Esc/Tests/EActionTest00.js
// Timestamp   : 2018-04-23 13:27:47
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function EActionTest00() {
    TdbTest.call(this, 'scripts/Edit/Esc/Tests/EActionTest00.js');
}

EActionTest00.prototype = new TdbTest();

EActionTest00.prototype.test00 = function() {
    qDebug('running EActionTest00.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::LineToolsPanel::Line2PButton');
    this.setZoom(10, new RVector(5, 5, 0, true));
    var p = new RVector(10, 9.9);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(10, 20.3);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(19.2, 23.6);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(17.6, 23.5);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(13.1, 17.7);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);

    var p = new RVector(10.1, 17.8);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);

    var p = new RVector(10, 20);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    var p = new RVector(20, 20);
    //this.sendMouseEventModelPos(QEvent.MouseMove, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);

    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.verifyDrawing('EActionTest00_000.dxf');
    this.tearDown();
    qDebug('finished EActionTest00.test00()');
};

