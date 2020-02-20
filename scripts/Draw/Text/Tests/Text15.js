// Auto generated by Testing Dashboard
// File        : scripts/Draw/Text/Tests/Text15.js
// Timestamp   : 2015-10-05 16:34:35
// Description : 

include('scripts/Pro/Developer/TestingDashboard/TdbTest.js');

function Text15() {
    TdbTest.call(this, 'scripts/Draw/Text/Tests/Text15.js');
}

Text15.prototype = new TdbTest();

Text15.prototype.test00 = function() {
    qDebug('running Text15.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Text/Tests/data/text15.dxf');
    this.selectAll();
    this.triggerCommand('explode');
    this.verifyDrawing('Text15_000.dxf');
    this.triggerCommand('explode');
    this.deselectAll();
    this.verifyDrawing('Text15_001.dxf');
    this.tearDown();
    qDebug('finished Text15.test00()');
};

