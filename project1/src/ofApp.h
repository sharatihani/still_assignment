#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#define MAXPOINTS 100

class ofApp : public ofBaseApp{
    
    bool isSaving = false;
    
    
    // to screen grab
    bool isSavingScreen = false;
    
    ofImage screenImage;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        ofxPanel gui;
    
    ofxToggle toggle; 
    ofxButton button;
    ofxLabel label;
        
        ofxFloatSlider floatSlider1;
        ofxFloatSlider floatSlider2;
        ofxFloatSlider floatSlider3;
        ofxFloatSlider floatSlider4; 
    
    ofImage clouds;
    
    float xPosition;
    
    ofPoint pts[MAXPOINTS];
    int nPts = 0;
};
