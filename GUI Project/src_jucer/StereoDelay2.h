/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  11 Mar 2012 8:53:37pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_STEREODELAY_STEREODELAY_74C95015__
#define __JUCER_HEADER_STEREODELAY_STEREODELAY_74C95015__

//[Headers]     -- You can add your own extra header files here --
#include "juce.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class StereoDelay2  : public Component,
                      public SliderListener,
                      public ButtonListener
{
public:
    //==============================================================================
    StereoDelay2 ();
    ~StereoDelay2();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* img1_lacznik_260_21_jpg;
    static const int img1_lacznik_260_21_jpgSize;
    static const char* link_off_60_24_jpg;
    static const int link_off_60_24_jpgSize;
    static const char* link_on_60_24_jpg;
    static const int link_on_60_24_jpgSize;
    static const char* bypass_off_24_23_jpg;
    static const int bypass_off_24_23_jpgSize;
    static const char* baypass_on_24_23_jpg;
    static const int baypass_on_24_23_jpgSize;
    static const char* meter_green_jpg;
    static const int meter_green_jpgSize;
    static const char* meter_blue_jpg;
    static const int meter_blue_jpgSize;
    static const char* background_meter_jpg;
    static const int background_meter_jpgSize;


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    Label* titleLabel;
    GroupComponent* leftChannelGroup;
    Slider* ldelaySlider;
    Label* delaytextLabel;
    Label* ldelayLabel;
    Label* mstextLabel;
    Slider* lfeedbackSlider;
    Label* mintextLabel;
    Label* maxtextLabel;
    Label* feedbacktextLabel;
    Slider* lfilterSlider;
    Label* mintextLabel2;
    Label* maxtextLabel2;
    Label* hicuttextLabel;
    Slider* lpanSlider;
    Label* ltextLabel;
    Label* rtextLabel;
    Label* panorametextLabel;
    GroupComponent* rightChannelGroup;
    Slider* rdelaySlider;
    Label* delaytextLabel2;
    Label* rdelayLabel;
    Label* mstextLabel2;
    Slider* rfeedbackSlider;
    Label* mintextLabel3;
    Label* maxtextLabel3;
    Label* feedbacktextLabel2;
    Slider* rfilterSlider;
    Label* mintextLabel4;
    Label* maxtextLabel4;
    Label* hicuttextLabel2;
    Slider* rpanSlider;
    Label* ltextLabel2;
    Label* rtextLabel2;
    Label* panorametextLabel2;
    ImageButton* linkButton;
    GroupComponent* overallGorup;
    Slider* mixSlider;
    Label* drytextLabel;
    Label* maxtextLabel5;
    Label* outputmixtextLabel;
    Slider* outputSlider;
    Label* inftextLabel;
    Label* _6dbtextLabel;
    Label* outputtextLabel;
    Slider* monostereoSlider;
    Label* monotextLabel;
    Label* stereotextLabel;
    Label* delaymonostereotextLabel;
    Label* fiftytextLabel;
    Label* _0dbtextLabel;
    ImageButton* bypassButton;
    Label* bypassLabel;
    ImageButton* rlevelmeter;
    ImageButton* llevelmeter;
    Image cachedImage_img1_lacznik_260_21_jpg;
    Image cachedImage_background_meter_jpg;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    StereoDelay2 (const StereoDelay2&);
    const StereoDelay2& operator= (const StereoDelay2&);
};


#endif   // __JUCER_HEADER_STEREODELAY_STEREODELAY_74C95015__
