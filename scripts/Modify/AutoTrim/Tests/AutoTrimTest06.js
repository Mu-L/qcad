// Auto generated by Testing Dashboard
// File        : scripts/Modify/AutoTrim/Tests/AutoTrimTest06.js
// Timestamp   : 2015-11-09 16:05:31
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function AutoTrimTest06() {
    TdbTest.call(this, 'scripts/Modify/AutoTrim/Tests/AutoTrimTest06.js');
}

AutoTrimTest06.prototype = new TdbTest();

AutoTrimTest06.prototype.test00 = function() {
    qDebug('running AutoTrimTest06.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/AutoTrim/Tests/data/splines.dxf');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::MainToolsPanel::ModifyToolsPanelButton');
    TdbTest.clickOnWidget('MainWindow::CadToolBar::ModifyToolsPanel::AutoTrimButton');
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(17.634919, 46.407526);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(17.250353, 42.177296);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(17.250353, 36.921556);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(16.609409, 28.973852);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(17.50673, 19.74426);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(17.250353, 9.873724);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(7.800995024875622, new RVector(17.4888, 3.32972, 0, true));
    var p = new RVector(17.50673, 1.413265);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(40.324332, 30.383929);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    var p = new RVector(39.939766, 30.25574);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('AutoTrimTest06_000.dxf');
    this.tearDown();
    qDebug('finished AutoTrimTest06.test00()');
};

