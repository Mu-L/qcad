// Auto generated by Testing Dashboard
// File        : scripts/Edit/Delete/Tests/DeleteTest00.js
// Timestamp   : 2015-04-23 15:31:47
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function DeleteTest00() {
    TdbTest.call(this, 'scripts/Edit/Delete/Tests/DeleteTest00.js');
}

DeleteTest00.prototype = new TdbTest();

DeleteTest00.prototype.test00 = function() {
    qDebug('running DeleteTest00.test00()...');
    this.setUp();
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::LineToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::LineToolsPanel::Line2PButton');
    this.setZoom(37.75609756097561, new RVector(-27.9415, -9.21286, 0, true));
    var p = new RVector(30.060401, 19.913114);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(-27.9415, -9.21286, 0, true));
    var p = new RVector(29.927972, 9.875);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(-27.9415, -9.21286, 0, true));
    var p = new RVector(39.966085, 9.927972);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(-27.9415, -9.21286, 0, true));
    var p = new RVector(40.125, 19.886628);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(-27.9415, -9.21286, 0, true));
    var p = new RVector(29.980943, 20.125);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(37.079134, 16.628876);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(36.681848, 16.893734);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(37.75609756097561, new RVector(-27.9415, -9.21286, 0, true));
    var p = new RVector(35.41053, 19.966085);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.triggerCommand('delete');
    this.verifyDrawing('DeleteTest00_000.dxf');
    this.tearDown();
    qDebug('finished DeleteTest00.test00()');
};

