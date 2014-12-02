#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    myfont.loadFont("verdana.ttf", 32);
    str = "";
    fontSize = 12;
    ofSetVerticalSync(false);
    ofSetFrameRate(60);
    charPerLine = ofGetScreenWidth()/(fontSize-0.65);
    myfont.loadFont("amiga4ever pro2.ttf", fontSize);
    myfont_.loadFont("amiga4ever pro2.ttf", fontSize);
}

//--------------------------------------------------------------
void ofApp::update(){
    nbChar++;
    if(ofRandomuf() > 0.5){
        str = str + "/";
    }else{
        str = str + "\\";
    }

//    ofLog(OF_LOG_NOTICE, "nbChar: %d ", nbChar);
//    ofLog(OF_LOG_NOTICE, "charPerLine: %d ", charPerLine);
    
    
    //if (str.length()%80 == 79){
    if( nbChar > charPerLine){
        nbChar=0;
        str = str + "\n";
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    myfont_.drawString("10 PRINT CHR$(205.5+RND(1);: GOTO 10 tribute by @targz", 0,fontSize+2);
    myfont.drawString(str, 0,30);
    myfont.setLetterSpacing(0.65);
    myfont.setLineHeight(fontSize);
    ofDrawBitmapString(ofToString(ofGetFrameRate())+"fps",ofGetScreenWidth()-100, 15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
