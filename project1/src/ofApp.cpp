#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    gui.setup();
    
//    gui.add(floatSlider1.setup("sky", 180,120,180));
    gui.add(floatSlider4.setup("time of day", 200,140,200));
    gui.add(floatSlider2.setup("sunset", 500,500,900));
    gui.add(floatSlider3.setup("cloud position", -500, -500, 500));

    
    clouds.load("clouds.png");
    
    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //draws sunset background
    ofSetColor(242,floatSlider4,63);
    ofDrawRectangle(0, 0, 1000, 710);
    
    //draws sun
    ofSetColor(242,120,63, 80);
    ofSetCircleResolution(100);
    ofDrawCircle(500, floatSlider2, 400);
    
    ofSetColor(242,130,63, 80);
    ofDrawCircle(500, floatSlider2, 350);
    
    ofSetColor(242,110,63);
    ofDrawCircle(500, floatSlider2, 300);
    
    ofSetColor(242,100,63);
    ofDrawCircle(500, floatSlider2, 250);
    
    //draws island
    ofSetColor(70,108,88);
    ofDrawCircle(640, 870, 210);
    
    //draws blue ocean
    ofSetColor(46,floatSlider4,206);
    ofDrawRectangle(0, 700, 1000, 300);
    
    //draws clouds (image)
    ofSetColor(255, 255, 255, 99);
    clouds.draw(floatSlider3, 40, 1200, 600);
    
    //draws mountain range
    ofSetColor(75, 121, 96);
    ofDrawTriangle(100, 700, 220, 350, 340, 700);
    
    ofSetColor(70, 116, 91);
    ofDrawTriangle(390, 700, 460, 510, 530, 700);
    
    ofSetColor(80, 126, 101);
    ofDrawTriangle(300, 700, 380, 440, 460, 700);
    
    ofSetColor(85, 131, 106);
    ofDrawTriangle(250, 700, 330, 480, 410, 700);
    
    ofSetColor(85, 131, 106);
    ofDrawTriangle(710, 700, 750, 560, 790, 700);
    
    float time = ofGetElapsedTimef();
//    for (int x = 1; x <10; x ++){
        
        for (int i=0; i < 1000; i+=5){
    //ofDrawCircle(i, 800, 100);
    ofSetColor(46,floatSlider4,206);
    ofDrawCircle(i, 780 + 70 * sin(i * 0.015 + time),40 + 30 * sin(i * 0.003 +time));
//    ofDrawCircle(i, 795 + 70 * sin(i * 0.01 + time),40 + 30 * sin(i * 0.003 +time));
        
//        ofDrawCircle(i, 600 * x + 100 * sin ( i * 0.01 + time), 40 + 30 * sin(i * 0.005 +time));
//        }
    }
    
    gui.draw();
    
    if (isSavingScreen){
        cout << "saving screen image" << endl;
        screenImage.grabScreen(0,0,ofGetWidth(),ofGetHeight());
        screenImage.save("screen.png");
        isSavingScreen = false;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 's'){
        cout << "saving screen" <<endl;
        isSavingScreen = true;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
