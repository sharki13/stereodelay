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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "StereoDelay2.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
StereoDelay2::StereoDelay2 ()
    : titleLabel (0),
      leftChannelGroup (0),
      ldelaySlider (0),
      delaytextLabel (0),
      ldelayLabel (0),
      mstextLabel (0),
      lfeedbackSlider (0),
      mintextLabel (0),
      maxtextLabel (0),
      feedbacktextLabel (0),
      lfilterSlider (0),
      mintextLabel2 (0),
      maxtextLabel2 (0),
      hicuttextLabel (0),
      lpanSlider (0),
      ltextLabel (0),
      rtextLabel (0),
      panorametextLabel (0),
      rightChannelGroup (0),
      rdelaySlider (0),
      delaytextLabel2 (0),
      rdelayLabel (0),
      mstextLabel2 (0),
      rfeedbackSlider (0),
      mintextLabel3 (0),
      maxtextLabel3 (0),
      feedbacktextLabel2 (0),
      rfilterSlider (0),
      mintextLabel4 (0),
      maxtextLabel4 (0),
      hicuttextLabel2 (0),
      rpanSlider (0),
      ltextLabel2 (0),
      rtextLabel2 (0),
      panorametextLabel2 (0),
      linkButton (0),
      overallGorup (0),
      mixSlider (0),
      drytextLabel (0),
      maxtextLabel5 (0),
      outputmixtextLabel (0),
      outputSlider (0),
      inftextLabel (0),
      _6dbtextLabel (0),
      outputtextLabel (0),
      monostereoSlider (0),
      monotextLabel (0),
      stereotextLabel (0),
      delaymonostereotextLabel (0),
      fiftytextLabel (0),
      _0dbtextLabel (0),
      bypassButton (0),
      bypassLabel (0),
      rlevelmeter (0),
      llevelmeter (0),
      cachedImage_img1_lacznik_260_21_jpg (0),
      cachedImage_background_meter_jpg (0)
{
    addAndMakeVisible (titleLabel = new Label (L"new label",
                                               L"Stereo Delay"));
    titleLabel->setFont (Font (26.3000f, Font::bold));
    titleLabel->setJustificationType (Justification::centredLeft);
    titleLabel->setEditable (false, false, false);
    titleLabel->setColour (Label::textColourId, Colour (0xff0090ff));
    titleLabel->setColour (TextEditor::textColourId, Colours::black);
    titleLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (leftChannelGroup = new GroupComponent (L"new group",
                                                              L"Left Channel"));
    leftChannelGroup->setColour (GroupComponent::outlineColourId, Colour (0x66ffffff));
    leftChannelGroup->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (ldelaySlider = new Slider (L"new slider"));
    ldelaySlider->setRange (0, 10, 0);
    ldelaySlider->setSliderStyle (Slider::LinearHorizontal);
    ldelaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    ldelaySlider->addListener (this);

    addAndMakeVisible (delaytextLabel = new Label (L"new label",
                                                   L"Delay:"));
    delaytextLabel->setFont (Font (15.0000f, Font::bold));
    delaytextLabel->setJustificationType (Justification::centredLeft);
    delaytextLabel->setEditable (false, false, false);
    delaytextLabel->setColour (Label::textColourId, Colours::white);
    delaytextLabel->setColour (TextEditor::textColourId, Colours::black);
    delaytextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (ldelayLabel = new Label (L"new label",
                                                L"1000"));
    ldelayLabel->setFont (Font (15.0000f, Font::plain));
    ldelayLabel->setJustificationType (Justification::centredRight);
    ldelayLabel->setEditable (false, false, false);
    ldelayLabel->setColour (Label::textColourId, Colours::white);
    ldelayLabel->setColour (TextEditor::textColourId, Colours::black);
    ldelayLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (mstextLabel = new Label (L"new label",
                                                L"ms"));
    mstextLabel->setFont (Font (15.0000f, Font::plain));
    mstextLabel->setJustificationType (Justification::centredLeft);
    mstextLabel->setEditable (false, false, false);
    mstextLabel->setColour (Label::textColourId, Colours::white);
    mstextLabel->setColour (TextEditor::textColourId, Colours::black);
    mstextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lfeedbackSlider = new Slider (L"new slider"));
    lfeedbackSlider->setRange (0, 10, 0);
    lfeedbackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lfeedbackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfeedbackSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    lfeedbackSlider->addListener (this);

    addAndMakeVisible (mintextLabel = new Label (L"new label",
                                                 L"min"));
    mintextLabel->setFont (Font (15.0000f, Font::plain));
    mintextLabel->setJustificationType (Justification::centredLeft);
    mintextLabel->setEditable (false, false, false);
    mintextLabel->setColour (Label::textColourId, Colours::white);
    mintextLabel->setColour (TextEditor::textColourId, Colours::black);
    mintextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (maxtextLabel = new Label (L"new label",
                                                 L"max"));
    maxtextLabel->setFont (Font (15.0000f, Font::plain));
    maxtextLabel->setJustificationType (Justification::centredLeft);
    maxtextLabel->setEditable (false, false, false);
    maxtextLabel->setColour (Label::textColourId, Colours::white);
    maxtextLabel->setColour (TextEditor::textColourId, Colours::black);
    maxtextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (feedbacktextLabel = new Label (L"new label",
                                                      L"Feedback"));
    feedbacktextLabel->setFont (Font (15.0000f, Font::bold));
    feedbacktextLabel->setJustificationType (Justification::centred);
    feedbacktextLabel->setEditable (false, false, false);
    feedbacktextLabel->setColour (Label::textColourId, Colours::white);
    feedbacktextLabel->setColour (TextEditor::textColourId, Colours::black);
    feedbacktextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lfilterSlider = new Slider (L"new slider"));
    lfilterSlider->setRange (0, 10, 0);
    lfilterSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lfilterSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfilterSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    lfilterSlider->addListener (this);

    addAndMakeVisible (mintextLabel2 = new Label (L"new label",
                                                  L"min"));
    mintextLabel2->setFont (Font (15.0000f, Font::plain));
    mintextLabel2->setJustificationType (Justification::centredLeft);
    mintextLabel2->setEditable (false, false, false);
    mintextLabel2->setColour (Label::textColourId, Colours::white);
    mintextLabel2->setColour (TextEditor::textColourId, Colours::black);
    mintextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (maxtextLabel2 = new Label (L"new label",
                                                  L"max"));
    maxtextLabel2->setFont (Font (15.0000f, Font::plain));
    maxtextLabel2->setJustificationType (Justification::centredLeft);
    maxtextLabel2->setEditable (false, false, false);
    maxtextLabel2->setColour (Label::textColourId, Colours::white);
    maxtextLabel2->setColour (TextEditor::textColourId, Colours::black);
    maxtextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (hicuttextLabel = new Label (L"new label",
                                                   L"LPF"));
    hicuttextLabel->setFont (Font (15.0000f, Font::bold));
    hicuttextLabel->setJustificationType (Justification::centred);
    hicuttextLabel->setEditable (false, false, false);
    hicuttextLabel->setColour (Label::textColourId, Colours::white);
    hicuttextLabel->setColour (TextEditor::textColourId, Colours::black);
    hicuttextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lpanSlider = new Slider (L"new slider"));
    lpanSlider->setRange (0, 10, 0);
    lpanSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    lpanSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lpanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    lpanSlider->addListener (this);

    addAndMakeVisible (ltextLabel = new Label (L"new label",
                                               L"L"));
    ltextLabel->setFont (Font (15.0000f, Font::plain));
    ltextLabel->setJustificationType (Justification::centredRight);
    ltextLabel->setEditable (false, false, false);
    ltextLabel->setColour (Label::textColourId, Colours::white);
    ltextLabel->setColour (TextEditor::textColourId, Colours::black);
    ltextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rtextLabel = new Label (L"new label",
                                               L"R"));
    rtextLabel->setFont (Font (15.0000f, Font::plain));
    rtextLabel->setJustificationType (Justification::centredLeft);
    rtextLabel->setEditable (false, false, false);
    rtextLabel->setColour (Label::textColourId, Colours::white);
    rtextLabel->setColour (TextEditor::textColourId, Colours::black);
    rtextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (panorametextLabel = new Label (L"new label",
                                                      L"Pan"));
    panorametextLabel->setFont (Font (15.0000f, Font::bold));
    panorametextLabel->setJustificationType (Justification::centred);
    panorametextLabel->setEditable (false, false, false);
    panorametextLabel->setColour (Label::textColourId, Colours::white);
    panorametextLabel->setColour (TextEditor::textColourId, Colours::black);
    panorametextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rightChannelGroup = new GroupComponent (L"new group",
                                                               L"Right Channel"));
    rightChannelGroup->setColour (GroupComponent::outlineColourId, Colour (0x66ffffff));
    rightChannelGroup->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (rdelaySlider = new Slider (L"new slider"));
    rdelaySlider->setRange (0, 10, 0);
    rdelaySlider->setSliderStyle (Slider::LinearHorizontal);
    rdelaySlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    rdelaySlider->addListener (this);

    addAndMakeVisible (delaytextLabel2 = new Label (L"new label",
                                                    L"Delay:"));
    delaytextLabel2->setFont (Font (15.0000f, Font::bold));
    delaytextLabel2->setJustificationType (Justification::centredLeft);
    delaytextLabel2->setEditable (false, false, false);
    delaytextLabel2->setColour (Label::textColourId, Colours::white);
    delaytextLabel2->setColour (TextEditor::textColourId, Colours::black);
    delaytextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rdelayLabel = new Label (L"new label",
                                                L"1000"));
    rdelayLabel->setFont (Font (15.0000f, Font::plain));
    rdelayLabel->setJustificationType (Justification::centredRight);
    rdelayLabel->setEditable (false, false, false);
    rdelayLabel->setColour (Label::textColourId, Colours::white);
    rdelayLabel->setColour (TextEditor::textColourId, Colours::black);
    rdelayLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (mstextLabel2 = new Label (L"new label",
                                                 L"ms"));
    mstextLabel2->setFont (Font (15.0000f, Font::plain));
    mstextLabel2->setJustificationType (Justification::centredLeft);
    mstextLabel2->setEditable (false, false, false);
    mstextLabel2->setColour (Label::textColourId, Colours::white);
    mstextLabel2->setColour (TextEditor::textColourId, Colours::black);
    mstextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rfeedbackSlider = new Slider (L"new slider"));
    rfeedbackSlider->setRange (0, 10, 0);
    rfeedbackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    rfeedbackSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    rfeedbackSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    rfeedbackSlider->addListener (this);

    addAndMakeVisible (mintextLabel3 = new Label (L"new label",
                                                  L"min"));
    mintextLabel3->setFont (Font (15.0000f, Font::plain));
    mintextLabel3->setJustificationType (Justification::centredLeft);
    mintextLabel3->setEditable (false, false, false);
    mintextLabel3->setColour (Label::textColourId, Colours::white);
    mintextLabel3->setColour (TextEditor::textColourId, Colours::black);
    mintextLabel3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (maxtextLabel3 = new Label (L"new label",
                                                  L"max"));
    maxtextLabel3->setFont (Font (15.0000f, Font::plain));
    maxtextLabel3->setJustificationType (Justification::centredLeft);
    maxtextLabel3->setEditable (false, false, false);
    maxtextLabel3->setColour (Label::textColourId, Colours::white);
    maxtextLabel3->setColour (TextEditor::textColourId, Colours::black);
    maxtextLabel3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (feedbacktextLabel2 = new Label (L"new label",
                                                       L"Feedback"));
    feedbacktextLabel2->setFont (Font (15.0000f, Font::bold));
    feedbacktextLabel2->setJustificationType (Justification::centred);
    feedbacktextLabel2->setEditable (false, false, false);
    feedbacktextLabel2->setColour (Label::textColourId, Colours::white);
    feedbacktextLabel2->setColour (TextEditor::textColourId, Colours::black);
    feedbacktextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rfilterSlider = new Slider (L"new slider"));
    rfilterSlider->setRange (0, 10, 0);
    rfilterSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    rfilterSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    rfilterSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    rfilterSlider->addListener (this);

    addAndMakeVisible (mintextLabel4 = new Label (L"new label",
                                                  L"min"));
    mintextLabel4->setFont (Font (15.0000f, Font::plain));
    mintextLabel4->setJustificationType (Justification::centredLeft);
    mintextLabel4->setEditable (false, false, false);
    mintextLabel4->setColour (Label::textColourId, Colours::white);
    mintextLabel4->setColour (TextEditor::textColourId, Colours::black);
    mintextLabel4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (maxtextLabel4 = new Label (L"new label",
                                                  L"max"));
    maxtextLabel4->setFont (Font (15.0000f, Font::plain));
    maxtextLabel4->setJustificationType (Justification::centredLeft);
    maxtextLabel4->setEditable (false, false, false);
    maxtextLabel4->setColour (Label::textColourId, Colours::white);
    maxtextLabel4->setColour (TextEditor::textColourId, Colours::black);
    maxtextLabel4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (hicuttextLabel2 = new Label (L"new label",
                                                    L"LPF"));
    hicuttextLabel2->setFont (Font (15.0000f, Font::bold));
    hicuttextLabel2->setJustificationType (Justification::centred);
    hicuttextLabel2->setEditable (false, false, false);
    hicuttextLabel2->setColour (Label::textColourId, Colours::white);
    hicuttextLabel2->setColour (TextEditor::textColourId, Colours::black);
    hicuttextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rpanSlider = new Slider (L"new slider"));
    rpanSlider->setRange (0, 10, 0);
    rpanSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    rpanSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    rpanSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    rpanSlider->addListener (this);

    addAndMakeVisible (ltextLabel2 = new Label (L"new label",
                                                L"L"));
    ltextLabel2->setFont (Font (15.0000f, Font::plain));
    ltextLabel2->setJustificationType (Justification::centredRight);
    ltextLabel2->setEditable (false, false, false);
    ltextLabel2->setColour (Label::textColourId, Colours::white);
    ltextLabel2->setColour (TextEditor::textColourId, Colours::black);
    ltextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rtextLabel2 = new Label (L"new label",
                                                L"R"));
    rtextLabel2->setFont (Font (15.0000f, Font::plain));
    rtextLabel2->setJustificationType (Justification::centredLeft);
    rtextLabel2->setEditable (false, false, false);
    rtextLabel2->setColour (Label::textColourId, Colours::white);
    rtextLabel2->setColour (TextEditor::textColourId, Colours::black);
    rtextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (panorametextLabel2 = new Label (L"new label",
                                                       L"Pan"));
    panorametextLabel2->setFont (Font (15.0000f, Font::bold));
    panorametextLabel2->setJustificationType (Justification::centred);
    panorametextLabel2->setEditable (false, false, false);
    panorametextLabel2->setColour (Label::textColourId, Colours::white);
    panorametextLabel2->setColour (TextEditor::textColourId, Colours::black);
    panorametextLabel2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (linkButton = new ImageButton (L"new button"));
    linkButton->addListener (this);

    linkButton->setImages (false, true, true,
                           ImageCache::getFromMemory (link_off_60_24_jpg, link_off_60_24_jpgSize), 1.0000f, Colour (0x0),
                           Image(), 1.0000f, Colour (0x0),
                           ImageCache::getFromMemory (link_on_60_24_jpg, link_on_60_24_jpgSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (overallGorup = new GroupComponent (L"new group",
                                                          L"Main"));
    overallGorup->setColour (GroupComponent::outlineColourId, Colour (0x66ffffff));
    overallGorup->setColour (GroupComponent::textColourId, Colours::white);

    addAndMakeVisible (mixSlider = new Slider (L"new slider"));
    mixSlider->setRange (0, 10, 0);
    mixSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    mixSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    mixSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    mixSlider->addListener (this);

    addAndMakeVisible (drytextLabel = new Label (L"new label",
                                                 L"DRY"));
    drytextLabel->setFont (Font (15.0000f, Font::plain));
    drytextLabel->setJustificationType (Justification::centredLeft);
    drytextLabel->setEditable (false, false, false);
    drytextLabel->setColour (Label::textColourId, Colours::white);
    drytextLabel->setColour (TextEditor::textColourId, Colours::black);
    drytextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (maxtextLabel5 = new Label (L"new label",
                                                  L"WET"));
    maxtextLabel5->setFont (Font (15.0000f, Font::plain));
    maxtextLabel5->setJustificationType (Justification::centredLeft);
    maxtextLabel5->setEditable (false, false, false);
    maxtextLabel5->setColour (Label::textColourId, Colours::white);
    maxtextLabel5->setColour (TextEditor::textColourId, Colours::black);
    maxtextLabel5->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (outputmixtextLabel = new Label (L"new label",
                                                       L"MIX"));
    outputmixtextLabel->setFont (Font (15.0000f, Font::bold));
    outputmixtextLabel->setJustificationType (Justification::centred);
    outputmixtextLabel->setEditable (false, false, false);
    outputmixtextLabel->setColour (Label::textColourId, Colours::white);
    outputmixtextLabel->setColour (TextEditor::textColourId, Colours::black);
    outputmixtextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (outputSlider = new Slider (L"new slider"));
    outputSlider->setRange (0, 10, 0);
    outputSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    outputSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    outputSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    outputSlider->addListener (this);

    addAndMakeVisible (inftextLabel = new Label (L"new label",
                                                 L"-inf dB"));
    inftextLabel->setFont (Font (15.0000f, Font::plain));
    inftextLabel->setJustificationType (Justification::centredLeft);
    inftextLabel->setEditable (false, false, false);
    inftextLabel->setColour (Label::textColourId, Colours::white);
    inftextLabel->setColour (TextEditor::textColourId, Colours::black);
    inftextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (_6dbtextLabel = new Label (L"new label",
                                                  L"+6 dB"));
    _6dbtextLabel->setFont (Font (15.0000f, Font::plain));
    _6dbtextLabel->setJustificationType (Justification::centredLeft);
    _6dbtextLabel->setEditable (false, false, false);
    _6dbtextLabel->setColour (Label::textColourId, Colours::white);
    _6dbtextLabel->setColour (TextEditor::textColourId, Colours::black);
    _6dbtextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (outputtextLabel = new Label (L"new label",
                                                    L"Output"));
    outputtextLabel->setFont (Font (15.0000f, Font::bold));
    outputtextLabel->setJustificationType (Justification::centred);
    outputtextLabel->setEditable (false, false, false);
    outputtextLabel->setColour (Label::textColourId, Colours::white);
    outputtextLabel->setColour (TextEditor::textColourId, Colours::black);
    outputtextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (monostereoSlider = new Slider (L"new slider"));
    monostereoSlider->setRange (0, 10, 0);
    monostereoSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    monostereoSlider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    monostereoSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff0090ff));
    monostereoSlider->addListener (this);

    addAndMakeVisible (monotextLabel = new Label (L"new label",
                                                  L"mono"));
    monotextLabel->setFont (Font (15.0000f, Font::plain));
    monotextLabel->setJustificationType (Justification::centredRight);
    monotextLabel->setEditable (false, false, false);
    monotextLabel->setColour (Label::textColourId, Colours::white);
    monotextLabel->setColour (TextEditor::textColourId, Colours::black);
    monotextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (stereotextLabel = new Label (L"new label",
                                                    L"stereo"));
    stereotextLabel->setFont (Font (15.0000f, Font::plain));
    stereotextLabel->setJustificationType (Justification::centredLeft);
    stereotextLabel->setEditable (false, false, false);
    stereotextLabel->setColour (Label::textColourId, Colours::white);
    stereotextLabel->setColour (TextEditor::textColourId, Colours::black);
    stereotextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (delaymonostereotextLabel = new Label (L"new label",
                                                             L"Width"));
    delaymonostereotextLabel->setFont (Font (15.0000f, Font::bold));
    delaymonostereotextLabel->setJustificationType (Justification::centred);
    delaymonostereotextLabel->setEditable (false, false, false);
    delaymonostereotextLabel->setColour (Label::textColourId, Colours::white);
    delaymonostereotextLabel->setColour (TextEditor::textColourId, Colours::black);
    delaymonostereotextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (fiftytextLabel = new Label (L"new label",
                                                   L"50/50"));
    fiftytextLabel->setFont (Font (15.0000f, Font::plain));
    fiftytextLabel->setJustificationType (Justification::centredLeft);
    fiftytextLabel->setEditable (false, false, false);
    fiftytextLabel->setColour (Label::textColourId, Colours::white);
    fiftytextLabel->setColour (TextEditor::textColourId, Colours::black);
    fiftytextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (_0dbtextLabel = new Label (L"new label",
                                                  L"0 dB"));
    _0dbtextLabel->setFont (Font (15.0000f, Font::plain));
    _0dbtextLabel->setJustificationType (Justification::centredLeft);
    _0dbtextLabel->setEditable (false, false, false);
    _0dbtextLabel->setColour (Label::textColourId, Colours::white);
    _0dbtextLabel->setColour (TextEditor::textColourId, Colours::black);
    _0dbtextLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (bypassButton = new ImageButton (L"new button"));
    bypassButton->addListener (this);

    bypassButton->setImages (false, true, true,
                             ImageCache::getFromMemory (bypass_off_24_23_jpg, bypass_off_24_23_jpgSize), 1.0000f, Colour (0x0),
                             Image(), 0.8945f, Colour (0x0),
                             ImageCache::getFromMemory (baypass_on_24_23_jpg, baypass_on_24_23_jpgSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (bypassLabel = new Label (L"new label",
                                                L"BYPASS"));
    bypassLabel->setFont (Font (15.0000f, Font::bold));
    bypassLabel->setJustificationType (Justification::centredLeft);
    bypassLabel->setEditable (false, false, false);
    bypassLabel->setColour (Label::textColourId, Colours::white);
    bypassLabel->setColour (TextEditor::textColourId, Colours::black);
    bypassLabel->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (rlevelmeter = new ImageButton (L"new button"));
    rlevelmeter->addListener (this);

    rlevelmeter->setImages (false, true, true,
                            ImageCache::getFromMemory (meter_blue_jpg, meter_blue_jpgSize), 1.0000f, Colour (0x0),
                            Image(), 1.0000f, Colour (0x0),
                            ImageCache::getFromMemory (meter_blue_jpg, meter_blue_jpgSize), 1.0000f, Colour (0x0));
    addAndMakeVisible (llevelmeter = new ImageButton (L"new button"));
    llevelmeter->addListener (this);

    llevelmeter->setImages (false, true, false,
                            ImageCache::getFromMemory (meter_blue_jpg, meter_blue_jpgSize), 1.0000f, Colour (0x0),
                            Image(), 1.0000f, Colour (0x0),
                            ImageCache::getFromMemory (meter_blue_jpg, meter_blue_jpgSize), 1.0000f, Colour (0x0));
    cachedImage_img1_lacznik_260_21_jpg = ImageCache::getFromMemory (img1_lacznik_260_21_jpg, img1_lacznik_260_21_jpgSize);
    cachedImage_background_meter_jpg = ImageCache::getFromMemory (background_meter_jpg, background_meter_jpgSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (680, 450);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

StereoDelay2::~StereoDelay2()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (titleLabel);
    deleteAndZero (leftChannelGroup);
    deleteAndZero (ldelaySlider);
    deleteAndZero (delaytextLabel);
    deleteAndZero (ldelayLabel);
    deleteAndZero (mstextLabel);
    deleteAndZero (lfeedbackSlider);
    deleteAndZero (mintextLabel);
    deleteAndZero (maxtextLabel);
    deleteAndZero (feedbacktextLabel);
    deleteAndZero (lfilterSlider);
    deleteAndZero (mintextLabel2);
    deleteAndZero (maxtextLabel2);
    deleteAndZero (hicuttextLabel);
    deleteAndZero (lpanSlider);
    deleteAndZero (ltextLabel);
    deleteAndZero (rtextLabel);
    deleteAndZero (panorametextLabel);
    deleteAndZero (rightChannelGroup);
    deleteAndZero (rdelaySlider);
    deleteAndZero (delaytextLabel2);
    deleteAndZero (rdelayLabel);
    deleteAndZero (mstextLabel2);
    deleteAndZero (rfeedbackSlider);
    deleteAndZero (mintextLabel3);
    deleteAndZero (maxtextLabel3);
    deleteAndZero (feedbacktextLabel2);
    deleteAndZero (rfilterSlider);
    deleteAndZero (mintextLabel4);
    deleteAndZero (maxtextLabel4);
    deleteAndZero (hicuttextLabel2);
    deleteAndZero (rpanSlider);
    deleteAndZero (ltextLabel2);
    deleteAndZero (rtextLabel2);
    deleteAndZero (panorametextLabel2);
    deleteAndZero (linkButton);
    deleteAndZero (overallGorup);
    deleteAndZero (mixSlider);
    deleteAndZero (drytextLabel);
    deleteAndZero (maxtextLabel5);
    deleteAndZero (outputmixtextLabel);
    deleteAndZero (outputSlider);
    deleteAndZero (inftextLabel);
    deleteAndZero (_6dbtextLabel);
    deleteAndZero (outputtextLabel);
    deleteAndZero (monostereoSlider);
    deleteAndZero (monotextLabel);
    deleteAndZero (stereotextLabel);
    deleteAndZero (delaymonostereotextLabel);
    deleteAndZero (fiftytextLabel);
    deleteAndZero (_0dbtextLabel);
    deleteAndZero (bypassButton);
    deleteAndZero (bypassLabel);
    deleteAndZero (rlevelmeter);
    deleteAndZero (llevelmeter);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void StereoDelay2::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff454545));

    g.setColour (Colours::black);
    g.drawImage (cachedImage_img1_lacznik_260_21_jpg,
                 210, 238, 260, 21,
                 0, 0, cachedImage_img1_lacznik_260_21_jpg.getWidth(), cachedImage_img1_lacznik_260_21_jpg.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_background_meter_jpg,
                 380, 308, 242, 94,
                 0, 0, cachedImage_background_meter_jpg.getWidth(), cachedImage_background_meter_jpg.getHeight());

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void StereoDelay2::resized()
{
    titleLabel->setBounds (12, 8, 167, 40);
    leftChannelGroup->setBounds (16, 48, 320, 192);
    ldelaySlider->setBounds (32, 96, 288, 24);
    delaytextLabel->setBounds (28, 72, 55, 24);
    ldelayLabel->setBounds (80, 72, 47, 24);
    mstextLabel->setBounds (128, 72, 31, 24);
    lfeedbackSlider->setBounds (41, 160, 63, 56);
    mintextLabel->setBounds (29, 204, 39, 24);
    maxtextLabel->setBounds (83, 204, 39, 24);
    feedbacktextLabel->setBounds (32, 129, 81, 24);
    lfilterSlider->setBounds (141, 160, 63, 56);
    mintextLabel2->setBounds (129, 204, 39, 24);
    maxtextLabel2->setBounds (183, 204, 39, 24);
    hicuttextLabel->setBounds (139, 129, 69, 24);
    lpanSlider->setBounds (245, 160, 63, 56);
    ltextLabel->setBounds (245, 204, 16, 24);
    rtextLabel->setBounds (290, 204, 25, 24);
    panorametextLabel->setBounds (235, 124, 85, 34);
    rightChannelGroup->setBounds (344, 48, 320, 192);
    rdelaySlider->setBounds (360, 96, 288, 24);
    delaytextLabel2->setBounds (356, 72, 55, 24);
    rdelayLabel->setBounds (408, 72, 47, 24);
    mstextLabel2->setBounds (456, 72, 31, 24);
    rfeedbackSlider->setBounds (369, 160, 63, 56);
    mintextLabel3->setBounds (357, 204, 39, 24);
    maxtextLabel3->setBounds (411, 204, 39, 24);
    feedbacktextLabel2->setBounds (360, 129, 81, 24);
    rfilterSlider->setBounds (469, 160, 63, 56);
    mintextLabel4->setBounds (457, 204, 39, 24);
    maxtextLabel4->setBounds (511, 204, 39, 24);
    hicuttextLabel2->setBounds (467, 129, 69, 24);
    rpanSlider->setBounds (573, 160, 63, 56);
    ltextLabel2->setBounds (573, 204, 16, 24);
    rtextLabel2->setBounds (618, 204, 25, 24);
    panorametextLabel2->setBounds (563, 124, 85, 34);
    linkButton->setBounds (309, 258, 60, 24);
    overallGorup->setBounds (16, 288, 648, 150);
    mixSlider->setBounds (41, 346, 63, 56);
    drytextLabel->setBounds (26, 390, 39, 24);
    maxtextLabel5->setBounds (85, 390, 39, 24);
    outputmixtextLabel->setBounds (32, 310, 81, 24);
    outputSlider->setBounds (155, 346, 63, 56);
    inftextLabel->setBounds (123, 390, 55, 24);
    _6dbtextLabel->setBounds (197, 390, 49, 24);
    outputtextLabel->setBounds (139, 310, 96, 24);
    monostereoSlider->setBounds (270, 346, 63, 56);
    monotextLabel->setBounds (244, 390, 48, 24);
    stereotextLabel->setBounds (312, 390, 52, 24);
    delaymonostereotextLabel->setBounds (256, 310, 96, 34);
    fiftytextLabel->setBounds (49, 326, 48, 24);
    _0dbtextLabel->setBounds (179, 326, 49, 24);
    bypassButton->setBounds (632, 409, 16, 16);
    bypassLabel->setBounds (564, 404, 72, 24);
    rlevelmeter->setBounds (401, 382, 210, 8);
    llevelmeter->setBounds (401, 348, 210, 8);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void StereoDelay2::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == ldelaySlider)
    {
        //[UserSliderCode_ldelaySlider] -- add your slider handling code here..
        //[/UserSliderCode_ldelaySlider]
    }
    else if (sliderThatWasMoved == lfeedbackSlider)
    {
        //[UserSliderCode_lfeedbackSlider] -- add your slider handling code here..
        //[/UserSliderCode_lfeedbackSlider]
    }
    else if (sliderThatWasMoved == lfilterSlider)
    {
        //[UserSliderCode_lfilterSlider] -- add your slider handling code here..
        //[/UserSliderCode_lfilterSlider]
    }
    else if (sliderThatWasMoved == lpanSlider)
    {
        //[UserSliderCode_lpanSlider] -- add your slider handling code here..
        //[/UserSliderCode_lpanSlider]
    }
    else if (sliderThatWasMoved == rdelaySlider)
    {
        //[UserSliderCode_rdelaySlider] -- add your slider handling code here..
        //[/UserSliderCode_rdelaySlider]
    }
    else if (sliderThatWasMoved == rfeedbackSlider)
    {
        //[UserSliderCode_rfeedbackSlider] -- add your slider handling code here..
        //[/UserSliderCode_rfeedbackSlider]
    }
    else if (sliderThatWasMoved == rfilterSlider)
    {
        //[UserSliderCode_rfilterSlider] -- add your slider handling code here..
        //[/UserSliderCode_rfilterSlider]
    }
    else if (sliderThatWasMoved == rpanSlider)
    {
        //[UserSliderCode_rpanSlider] -- add your slider handling code here..
        //[/UserSliderCode_rpanSlider]
    }
    else if (sliderThatWasMoved == mixSlider)
    {
        //[UserSliderCode_mixSlider] -- add your slider handling code here..
        //[/UserSliderCode_mixSlider]
    }
    else if (sliderThatWasMoved == outputSlider)
    {
        //[UserSliderCode_outputSlider] -- add your slider handling code here..
        //[/UserSliderCode_outputSlider]
    }
    else if (sliderThatWasMoved == monostereoSlider)
    {
        //[UserSliderCode_monostereoSlider] -- add your slider handling code here..
        //[/UserSliderCode_monostereoSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void StereoDelay2::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == linkButton)
    {
        //[UserButtonCode_linkButton] -- add your button handler code here..
        //[/UserButtonCode_linkButton]
    }
    else if (buttonThatWasClicked == bypassButton)
    {
        //[UserButtonCode_bypassButton] -- add your button handler code here..
        //[/UserButtonCode_bypassButton]
    }
    else if (buttonThatWasClicked == rlevelmeter)
    {
        //[UserButtonCode_rlevelmeter] -- add your button handler code here..
        //[/UserButtonCode_rlevelmeter]
    }
    else if (buttonThatWasClicked == llevelmeter)
    {
        //[UserButtonCode_llevelmeter] -- add your button handler code here..
        //[/UserButtonCode_llevelmeter]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="StereoDelay2" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="680" initialHeight="450">
  <BACKGROUND backgroundColour="ff454545">
    <IMAGE pos="210 238 260 21" resource="img1_lacznik_260_21_jpg" opacity="1"
           mode="0"/>
    <IMAGE pos="380 308 242 94" resource="background_meter_jpg" opacity="1"
           mode="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="5d0e5741ea079038" memberName="titleLabel"
         virtualName="" explicitFocusOrder="0" pos="12 8 167 40" textCol="ff0090ff"
         edTextCol="ff000000" edBkgCol="0" labelText="Stereo Delay" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="26.3" bold="1" italic="0" justification="33"/>
  <GROUPCOMPONENT name="new group" id="de1227ac4842da43" memberName="leftChannelGroup"
                  virtualName="" explicitFocusOrder="0" pos="16 48 320 192" outlinecol="66ffffff"
                  textcol="ffffffff" title="Left Channel"/>
  <SLIDER name="new slider" id="b8e0590fa0d8c87f" memberName="ldelaySlider"
          virtualName="" explicitFocusOrder="0" pos="32 96 288 24" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="545f6f0b4a0637e0" memberName="delaytextLabel"
         virtualName="" explicitFocusOrder="0" pos="28 72 55 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="3775261cb308e07e" memberName="ldelayLabel"
         virtualName="" explicitFocusOrder="0" pos="80 72 47 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="1000" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="4d000e5a3a72334a" memberName="mstextLabel"
         virtualName="" explicitFocusOrder="0" pos="128 72 31 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="623577fef6b86229" memberName="lfeedbackSlider"
          virtualName="" explicitFocusOrder="0" pos="41 160 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="23ca148b7477571c" memberName="mintextLabel"
         virtualName="" explicitFocusOrder="0" pos="29 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="min" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3c21e50f077bb799" memberName="maxtextLabel"
         virtualName="" explicitFocusOrder="0" pos="83 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="max" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da4d0ca053f8e518" memberName="feedbacktextLabel"
         virtualName="" explicitFocusOrder="0" pos="32 129 81 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Feedback" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="9087b90767feed58" memberName="lfilterSlider"
          virtualName="" explicitFocusOrder="0" pos="141 160 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="8bbe08677b4a095a" memberName="mintextLabel2"
         virtualName="" explicitFocusOrder="0" pos="129 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="min" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="69463b4028fe831b" memberName="maxtextLabel2"
         virtualName="" explicitFocusOrder="0" pos="183 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="max" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="dcb4c1e20ffead52" memberName="hicuttextLabel"
         virtualName="" explicitFocusOrder="0" pos="139 129 69 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="LPF" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="272b0344e8d4bb0a" memberName="lpanSlider"
          virtualName="" explicitFocusOrder="0" pos="245 160 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="7d2e11322f9c3074" memberName="ltextLabel"
         virtualName="" explicitFocusOrder="0" pos="245 204 16 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="L" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="d4dbbb38ba9946f2" memberName="rtextLabel"
         virtualName="" explicitFocusOrder="0" pos="290 204 25 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="41ead215cb4c72e8" memberName="panorametextLabel"
         virtualName="" explicitFocusOrder="0" pos="235 124 85 34" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pan" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="67e56b44b54a3b89" memberName="rightChannelGroup"
                  virtualName="" explicitFocusOrder="0" pos="344 48 320 192" outlinecol="66ffffff"
                  textcol="ffffffff" title="Right Channel"/>
  <SLIDER name="new slider" id="6dfe894b0a0d8996" memberName="rdelaySlider"
          virtualName="" explicitFocusOrder="0" pos="360 96 288 24" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="182478a78a6ce622" memberName="delaytextLabel2"
         virtualName="" explicitFocusOrder="0" pos="356 72 55 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Delay:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <LABEL name="new label" id="252abc150bb05e4a" memberName="rdelayLabel"
         virtualName="" explicitFocusOrder="0" pos="408 72 47 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="1000" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="1e60c1c96daf2811" memberName="mstextLabel2"
         virtualName="" explicitFocusOrder="0" pos="456 72 31 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="ms" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="new slider" id="8a61bb0db028a7cc" memberName="rfeedbackSlider"
          virtualName="" explicitFocusOrder="0" pos="369 160 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="ddfc29bb0f0a0c62" memberName="mintextLabel3"
         virtualName="" explicitFocusOrder="0" pos="357 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="min" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ba4dd107e481c79c" memberName="maxtextLabel3"
         virtualName="" explicitFocusOrder="0" pos="411 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="max" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="709d393702fb1d19" memberName="feedbacktextLabel2"
         virtualName="" explicitFocusOrder="0" pos="360 129 81 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Feedback" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="1711e22f2d0d199b" memberName="rfilterSlider"
          virtualName="" explicitFocusOrder="0" pos="469 160 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="e0f6a70782334dce" memberName="mintextLabel4"
         virtualName="" explicitFocusOrder="0" pos="457 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="min" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a4f4450520c9f2bc" memberName="maxtextLabel4"
         virtualName="" explicitFocusOrder="0" pos="511 204 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="max" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ad482a72ab17b7f" memberName="hicuttextLabel2"
         virtualName="" explicitFocusOrder="0" pos="467 129 69 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="LPF" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="c0efa7a9a5c256fb" memberName="rpanSlider"
          virtualName="" explicitFocusOrder="0" pos="573 160 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="eefee5292c6495a1" memberName="ltextLabel2"
         virtualName="" explicitFocusOrder="0" pos="573 204 16 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="L" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="91685580ca89a8d" memberName="rtextLabel2"
         virtualName="" explicitFocusOrder="0" pos="618 204 25 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="R" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c81c4c58c89ec478" memberName="panorametextLabel2"
         virtualName="" explicitFocusOrder="0" pos="563 124 85 34" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Pan" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <IMAGEBUTTON name="new button" id="f1e7a0b54d3f02ce" memberName="linkButton"
               virtualName="" explicitFocusOrder="0" pos="309 258 60 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="link_off_60_24_jpg" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="link_on_60_24_jpg"
               opacityDown="1" colourDown="0"/>
  <GROUPCOMPONENT name="new group" id="2ef348fa8262b840" memberName="overallGorup"
                  virtualName="" explicitFocusOrder="0" pos="16 288 648 150" outlinecol="66ffffff"
                  textcol="ffffffff" title="Main"/>
  <SLIDER name="new slider" id="b4050a9a78f0a9ea" memberName="mixSlider"
          virtualName="" explicitFocusOrder="0" pos="41 346 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="59393634d102d25" memberName="drytextLabel"
         virtualName="" explicitFocusOrder="0" pos="26 390 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="DRY" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="dab7ceb88d838686" memberName="maxtextLabel5"
         virtualName="" explicitFocusOrder="0" pos="85 390 39 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="WET" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ab018a6c52374197" memberName="outputmixtextLabel"
         virtualName="" explicitFocusOrder="0" pos="32 310 81 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="MIX" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="1131779235dc460b" memberName="outputSlider"
          virtualName="" explicitFocusOrder="0" pos="155 346 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="e9475301b1fa4013" memberName="inftextLabel"
         virtualName="" explicitFocusOrder="0" pos="123 390 55 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="-inf dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2a01e608667be82d" memberName="_6dbtextLabel"
         virtualName="" explicitFocusOrder="0" pos="197 390 49 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="+6 dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f5e249f1c8d283ee" memberName="outputtextLabel"
         virtualName="" explicitFocusOrder="0" pos="139 310 96 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Output" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <SLIDER name="new slider" id="9401bd417b39a895" memberName="monostereoSlider"
          virtualName="" explicitFocusOrder="0" pos="270 346 63 56" rotarysliderfill="ff0090ff"
          min="0" max="10" int="0" style="RotaryVerticalDrag" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="new label" id="715677d109a7a964" memberName="monotextLabel"
         virtualName="" explicitFocusOrder="0" pos="244 390 48 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="mono" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="new label" id="b5d3d338aa267f18" memberName="stereotextLabel"
         virtualName="" explicitFocusOrder="0" pos="312 390 52 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="stereo" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ff2adf20a3a12af1" memberName="delaymonostereotextLabel"
         virtualName="" explicitFocusOrder="0" pos="256 310 96 34" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Width" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="36"/>
  <LABEL name="new label" id="c0951a506e65692a" memberName="fiftytextLabel"
         virtualName="" explicitFocusOrder="0" pos="49 326 48 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="50/50" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="273fec87d2fba14e" memberName="_0dbtextLabel"
         virtualName="" explicitFocusOrder="0" pos="179 326 49 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="0 dB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="new button" id="6c44230e6caeab0a" memberName="bypassButton"
               virtualName="" explicitFocusOrder="0" pos="632 409 16 16" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="bypass_off_24_23_jpg" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="0.89453125" colourOver="0" resourceDown="baypass_on_24_23_jpg"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="c341b39aeed17df9" memberName="bypassLabel"
         virtualName="" explicitFocusOrder="0" pos="564 404 72 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="BYPASS" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <IMAGEBUTTON name="new button" id="9e6fbce04753763" memberName="rlevelmeter"
               virtualName="" explicitFocusOrder="0" pos="401 382 210 8" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="meter_blue_jpg" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="meter_blue_jpg"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="e7c1355c0bbda2a4" memberName="llevelmeter"
               virtualName="" explicitFocusOrder="0" pos="401 348 210 8" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="0"
               resourceNormal="meter_blue_jpg" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown="meter_blue_jpg"
               opacityDown="1" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: img1_lacznik_260_21_jpg, 1786, "../images/img1_lacznik_260_21.jpg"
static const unsigned char resource_StereoDelay2_img1_lacznik_260_21_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,
7,6,7,7,7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,21,1,4,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,
8,9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,
40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,
153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,
243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,
34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,
105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,
198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,248,92,99,131,146,164,17,200,199,29,
123,126,53,233,95,181,187,6,253,160,181,217,2,148,73,69,179,35,21,35,114,253,154,47,155,159,67,252,235,205,74,239,4,119,35,233,199,92,231,240,21,232,246,63,28,244,221,107,71,211,237,124,93,225,75,79,19,
75,165,70,32,182,188,23,146,88,220,24,151,59,82,70,64,76,128,19,211,233,142,69,0,121,208,37,65,36,16,7,94,115,131,70,236,100,242,86,189,28,252,76,248,118,118,143,248,86,24,199,253,76,119,57,255,0,208,
127,149,43,252,78,248,120,236,51,240,195,4,31,250,24,238,127,248,154,0,243,125,216,201,228,173,27,177,147,201,90,244,135,248,157,240,241,216,103,225,134,8,63,244,49,220,255,0,241,52,63,196,239,135,142,
195,63,12,48,65,255,0,161,142,231,255,0,137,160,15,55,221,140,158,74,209,187,25,60,149,175,72,127,137,223,15,29,134,126,24,96,131,255,0,67,29,207,255,0,19,67,252,78,248,120,236,51,240,195,4,31,250,24,
238,127,248,154,0,243,125,216,201,228,173,27,177,147,201,90,244,135,248,157,240,241,216,103,225,134,8,63,244,49,220,255,0,241,52,63,196,239,135,142,195,63,12,48,65,255,0,161,142,231,255,0,137,160,15,55,
221,140,158,74,209,187,25,60,149,175,72,127,137,223,15,29,134,126,24,96,131,255,0,67,29,207,255,0,19,67,252,78,248,120,236,51,240,195,4,31,250,24,238,127,248,154,0,243,125,216,201,228,173,27,177,147,201,
90,244,135,248,157,240,241,216,103,225,134,8,63,244,49,220,255,0,241,52,63,196,239,135,142,195,63,12,48,65,255,0,161,142,231,255,0,137,160,15,55,206,57,206,65,163,42,57,197,122,67,252,78,248,120,204,9,
248,96,65,7,254,134,59,156,127,232,52,141,241,59,225,239,152,15,252,42,240,128,48,235,226,43,146,15,7,175,203,211,158,253,251,208,7,156,110,43,140,243,158,104,220,122,145,197,123,247,199,189,39,225,231,
193,47,24,90,232,227,192,3,83,55,22,107,121,230,157,114,230,18,55,60,137,180,140,182,79,200,78,115,92,67,124,77,248,118,196,15,248,86,0,144,115,255,0,35,29,207,62,255,0,118,128,60,227,118,50,121,43,70,
236,100,242,86,189,33,254,39,124,60,118,25,248,97,130,15,253,12,119,63,252,77,15,241,59,225,227,176,207,195,12,16,127,232,99,185,255,0,226,104,3,205,247,99,39,146,180,110,198,79,37,107,210,31,226,119,
195,199,97,159,134,24,32,255,0,208,199,115,255,0,196,208,255,0,19,190,30,59,12,252,48,193,7,254,134,59,159,254,38,128,60,223,118,50,121,43,70,236,100,242,86,189,33,254,39,124,60,118,25,248,97,130,15,253,
12,119,63,252,77,15,241,59,225,227,176,207,195,12,16,127,232,99,185,255,0,226,104,3,205,247,99,39,146,180,110,198,79,37,107,210,31,226,119,195,199,97,159,134,24,32,255,0,208,199,115,255,0,196,208,255,
0,19,190,30,59,12,252,48,193,7,254,134,59,159,254,38,128,60,223,118,50,121,43,70,236,100,242,86,189,33,254,39,124,60,118,25,248,97,130,15,253,12,119,63,252,77,15,241,59,225,227,176,207,195,12,16,127,232,
99,185,255,0,226,104,3,205,247,99,39,146,180,103,25,57,200,60,87,164,63,196,239,135,142,195,63,12,48,65,255,0,161,142,231,255,0,137,161,254,39,124,59,102,25,248,96,67,41,255,0,161,142,235,31,202,128,60,
223,4,16,51,215,167,249,250,87,163,124,80,125,159,179,247,195,24,216,60,111,183,85,115,242,144,118,155,148,32,253,41,231,226,119,195,223,49,10,124,46,93,232,217,249,252,67,114,232,123,128,84,174,8,227,
161,198,125,125,121,143,136,223,18,181,15,137,218,220,55,87,73,111,105,111,105,10,219,218,90,218,167,151,13,156,67,37,85,1,3,190,73,239,235,252,42,64,57,188,99,142,56,162,143,195,30,222,148,80,3,147,165,
12,55,16,15,65,205,20,80,0,48,252,145,64,0,231,35,56,162,138,0,0,7,57,25,197,0,3,156,140,226,138,40,0,0,28,228,103,20,0,14,114,51,138,40,160,0,0,115,145,156,80,0,57,200,206,40,162,128,0,1,206,70,113,64,
0,231,35,56,162,138,0,0,7,57,25,197,0,3,156,140,226,138,40,0,10,15,90,34,30,108,150,235,128,12,207,140,99,42,184,43,219,241,245,162,138,0,246,207,219,213,200,248,187,164,182,88,23,210,225,143,25,224,126,
254,110,125,255,0,198,188,80,198,21,153,78,9,83,142,6,7,224,59,81,69,0,32,0,231,35,56,160,0,115,145,156,81,69,0,0,3,156,140,226,128,1,206,70,113,69,20,0,0,14,114,51,138,0,7,57,25,197,20,80,0,0,57,200,
206,40,0,28,228,103,20,81,64,0,0,231,35,56,160,0,115,145,156,81,69,0,0,3,156,140,226,128,160,231,35,145,69,20,0,141,144,113,184,226,148,41,192,193,35,52,81,64,13,61,77,20,81,64,31,255,217,0,0};

const char* StereoDelay2::img1_lacznik_260_21_jpg = (const char*) resource_StereoDelay2_img1_lacznik_260_21_jpg;
const int StereoDelay2::img1_lacznik_260_21_jpgSize = 1786;

// JUCER_RESOURCE: link_off_60_24_jpg, 1321, "../images/link_off_60_24.jpg"
static const unsigned char resource_StereoDelay2_link_off_60_24_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,6,
7,7,7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,24,0,60,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,
11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,
42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,
162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,
245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,
8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,
115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,
200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,155,246,14,253,132,60,13,251,70,124,14,147,196,
62,34,109,108,106,11,169,77,106,62,203,118,177,71,177,86,50,56,40,121,203,26,246,105,255,0,224,147,191,9,173,160,121,36,159,196,209,199,26,150,102,109,65,2,168,28,146,79,151,192,167,127,193,37,191,228,
213,165,255,0,176,229,207,254,129,13,125,21,227,156,255,0,194,21,172,127,215,148,223,250,1,169,147,209,142,42,238,199,205,176,255,0,193,43,126,15,92,233,98,246,59,239,16,73,100,201,230,11,133,212,227,
49,20,198,119,110,17,227,24,239,154,75,63,248,37,135,193,221,69,145,109,239,245,249,218,72,132,232,35,213,35,98,209,158,142,49,31,42,125,122,87,167,120,7,198,90,61,199,236,237,111,167,71,171,105,178,106,
41,162,72,166,213,110,144,204,8,137,178,54,103,118,71,210,185,111,15,233,122,149,239,138,60,33,62,143,114,208,234,22,94,18,183,158,36,39,17,220,224,243,27,123,17,198,123,28,26,26,247,172,102,155,113,185,
202,39,252,19,7,224,172,152,43,171,107,44,12,230,215,141,94,19,153,135,88,254,231,223,31,221,235,83,91,127,193,44,62,14,94,106,23,22,112,223,235,242,221,218,96,207,10,106,145,180,144,228,100,110,81,30,
87,61,179,87,44,239,181,27,223,2,199,61,173,178,193,169,205,227,57,89,32,159,129,12,140,128,237,127,161,60,253,43,213,255,0,103,187,152,83,67,212,172,174,97,120,60,73,105,118,199,88,243,14,100,154,86,
201,18,231,186,48,31,46,56,192,162,42,255,0,114,253,1,179,201,191,225,210,223,10,127,231,167,138,127,240,61,63,248,221,126,126,254,208,190,5,177,248,99,241,195,197,94,30,211,12,231,79,209,181,41,173,45,
252,230,15,38,197,108,13,196,1,147,143,106,253,159,175,199,175,219,39,254,78,171,226,7,253,134,238,127,244,51,77,14,44,250,3,246,15,253,187,124,13,251,57,252,15,127,15,120,137,117,179,168,54,165,53,216,
251,45,170,203,30,199,88,192,228,184,231,229,61,171,217,231,255,0,130,176,252,38,185,129,226,146,31,19,73,28,128,171,43,105,200,85,129,234,8,243,57,20,81,67,216,163,26,207,254,10,57,240,27,78,152,201,
111,225,203,203,121,25,74,22,143,65,129,78,8,193,25,13,208,138,189,107,255,0,5,69,248,53,99,115,20,208,105,218,228,18,193,16,130,54,143,73,137,90,56,199,68,4,63,11,237,210,138,41,108,137,176,75,255,0,
5,68,248,51,113,32,121,52,221,110,71,19,125,167,45,164,68,72,151,0,121,159,127,239,96,1,187,173,61,63,224,169,191,7,163,213,90,253,108,117,225,124,241,136,154,228,105,81,9,153,7,240,150,223,156,103,182,
113,69,20,45,144,53,173,139,67,254,10,207,240,164,0,54,120,163,143,250,135,167,255,0,28,175,207,223,218,23,199,86,63,19,190,56,248,171,196,58,96,156,105,250,206,165,53,221,191,156,155,36,216,205,145,184,
100,224,254,52,81,68,65,61,79,255,217,0,0};

const char* StereoDelay2::link_off_60_24_jpg = (const char*) resource_StereoDelay2_link_off_60_24_jpg;
const int StereoDelay2::link_off_60_24_jpgSize = 1321;

// JUCER_RESOURCE: link_on_60_24_jpg, 1458, "../images/link_on_60_24.jpg"
static const unsigned char resource_StereoDelay2_link_on_60_24_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,6,7,
7,7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,24,0,60,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,
11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,
42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,
162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,
245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,
8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,
115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,
200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,155,246,15,253,132,124,13,251,70,124,14,147,
196,94,34,125,109,117,5,212,166,180,31,101,187,88,163,216,139,25,28,20,60,229,143,53,236,242,255,0,193,39,62,19,197,19,59,205,226,116,69,25,36,234,40,0,30,167,247,116,127,193,37,255,0,228,213,102,255,
0,176,221,207,254,129,13,125,35,226,46,124,59,124,59,253,158,79,253,4,214,216,122,126,210,172,96,221,174,210,251,217,142,38,171,167,74,85,18,189,147,127,114,62,104,179,255,0,130,87,124,31,212,116,213,
189,183,190,241,12,246,110,165,214,120,245,72,218,50,163,169,220,35,198,6,15,52,203,47,248,37,183,193,189,77,226,91,109,71,94,184,105,226,251,68,98,61,86,39,50,71,156,111,24,78,87,56,25,28,87,166,252,
24,241,198,136,223,1,44,52,193,172,105,71,82,26,124,235,246,79,181,199,231,238,249,206,54,103,118,127,10,227,124,55,163,234,26,174,175,240,241,180,171,183,180,212,109,124,50,243,193,206,18,86,87,251,142,
59,171,12,143,110,181,245,148,56,81,74,117,161,86,110,28,141,164,218,181,210,78,205,249,63,35,243,220,71,29,74,20,240,243,163,77,84,246,137,54,147,189,155,148,98,210,243,73,223,94,199,62,127,224,152,159,
5,21,92,157,95,89,2,43,143,178,57,254,216,135,9,55,252,242,63,39,15,207,221,235,237,83,195,255,0,4,178,248,59,113,170,205,97,29,254,191,37,245,186,135,150,221,117,72,204,177,41,232,89,118,100,3,216,145,
83,255,0,104,234,87,223,15,181,187,165,177,251,46,171,55,142,150,79,178,202,112,35,144,164,120,86,246,205,122,175,236,239,114,182,240,107,150,26,140,102,15,22,193,118,101,213,204,141,151,185,45,254,174,
69,61,227,219,194,129,192,199,190,77,102,252,41,12,22,26,88,136,212,230,113,118,178,183,150,190,158,125,236,101,144,241,237,108,199,25,79,11,42,92,138,106,252,206,235,189,146,191,218,118,189,187,38,121,
103,252,58,95,225,78,8,18,120,167,255,0,6,9,255,0,198,235,243,247,246,133,240,45,143,195,31,142,62,42,240,246,152,103,58,126,141,169,77,105,111,231,54,249,54,43,96,110,56,25,63,133,126,207,142,131,140,
87,227,215,237,147,255,0,39,85,241,3,254,195,119,63,250,25,175,138,234,126,150,158,167,208,31,176,135,237,219,224,127,217,211,224,116,158,30,241,10,235,103,80,109,74,107,177,246,91,85,150,61,142,177,129,
201,113,207,202,123,87,179,63,252,21,135,225,68,177,178,60,94,39,116,113,181,129,211,144,130,59,130,60,202,40,169,83,107,84,54,147,209,152,182,95,240,81,159,128,186,117,216,184,183,240,221,229,188,227,
63,188,143,64,183,71,231,131,200,108,242,42,253,167,252,21,7,224,197,132,182,242,91,233,154,212,18,90,71,228,192,209,233,17,41,133,63,184,184,127,149,125,135,20,81,93,83,198,87,168,218,156,219,249,179,
138,150,93,133,165,252,58,81,93,116,73,107,112,185,255,0,130,161,252,25,188,46,102,211,117,185,75,204,46,73,125,38,38,38,80,160,9,14,95,150,0,1,187,175,2,164,255,0,135,166,124,29,254,216,254,209,251,6,
188,117,1,31,146,46,78,149,31,156,35,206,118,111,223,157,185,231,29,51,69,21,159,214,42,180,211,147,251,205,190,169,69,61,32,180,215,100,90,31,240,86,127,133,32,99,203,241,71,254,11,211,255,0,142,87,231,
239,237,11,227,171,31,137,223,28,124,85,226,29,48,78,52,253,103,82,154,238,223,206,77,146,108,102,200,220,50,112,127,26,40,172,147,55,142,199,255,217,0,0};

const char* StereoDelay2::link_on_60_24_jpg = (const char*) resource_StereoDelay2_link_on_60_24_jpg;
const int StereoDelay2::link_on_60_24_jpgSize = 1458;

// JUCER_RESOURCE: bypass_off_24_23_jpg, 772, "../images/bypass_off_24_23.jpg"
static const unsigned char resource_StereoDelay2_bypass_off_24_23_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,
6,7,7,7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,23,0,24,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,
9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,
40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,
153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,
243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,
34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,
105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,
198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,233,117,253,126,109,42,241,35,141,99,
96,200,27,230,4,158,167,223,218,168,255,0,194,101,117,253,200,63,239,147,254,52,120,203,254,66,145,255,0,215,33,252,205,100,84,183,169,148,164,238,116,186,6,191,54,171,120,241,200,177,128,168,91,229,4,
30,163,223,222,138,163,224,223,249,10,73,255,0,92,143,243,20,83,76,184,189,13,61,103,195,191,218,247,75,47,157,229,237,93,184,217,158,228,250,251,213,63,248,66,127,233,235,255,0,33,255,0,245,232,162,155,
67,113,69,205,27,195,191,217,23,77,47,157,230,110,93,184,217,142,224,250,251,81,69,20,15,99,255,217,0,0};

const char* StereoDelay2::bypass_off_24_23_jpg = (const char*) resource_StereoDelay2_bypass_off_24_23_jpg;
const int StereoDelay2::bypass_off_24_23_jpgSize = 772;

// JUCER_RESOURCE: baypass_on_24_23_jpg, 973, "../images/baypass_on_24_23.jpg"
static const unsigned char resource_StereoDelay2_baypass_on_24_23_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,
6,7,7,7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,23,0,24,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,
9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,
40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,
153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,
243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,
34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,
105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,
198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,131,226,215,197,173,75,192,126,35,130,
206,206,27,41,99,150,217,102,38,100,118,108,151,113,142,24,113,133,21,203,127,195,72,107,159,243,235,165,127,223,169,63,248,186,63,105,15,249,30,45,63,235,197,63,244,100,149,231,245,253,37,194,124,39,
147,226,114,140,61,122,248,120,202,82,141,219,125,89,252,215,197,188,91,156,97,179,140,69,10,24,137,70,49,149,146,91,36,123,79,194,95,139,90,151,143,60,71,61,157,228,54,81,199,21,179,76,12,40,234,217,
14,131,28,177,227,12,104,174,91,246,111,255,0,145,226,239,254,188,95,255,0,70,71,69,126,75,226,22,93,134,193,103,18,161,132,130,132,121,98,236,188,209,250,223,135,153,150,39,29,147,198,190,46,110,114,
230,146,187,222,200,237,254,36,124,30,255,0,133,131,174,69,123,253,163,246,79,42,1,6,207,179,249,153,195,51,103,59,135,247,186,123,87,61,255,0,12,199,255,0,81,207,252,147,255,0,236,232,162,185,48,92,117,
158,96,232,71,13,135,175,203,8,171,37,203,7,101,234,226,223,226,118,99,184,23,35,198,87,158,39,19,67,154,114,119,111,154,106,239,209,73,47,185,29,15,195,127,131,223,240,175,181,201,111,127,180,126,217,
230,192,96,217,246,127,47,25,101,108,231,113,254,239,79,122,40,162,188,60,215,54,197,230,53,222,39,25,62,105,180,149,236,150,139,109,18,75,240,61,204,175,41,194,101,180,22,27,5,14,88,38,221,174,222,175,
125,91,111,241,63,255,217,0,0};

const char* StereoDelay2::baypass_on_24_23_jpg = (const char*) resource_StereoDelay2_baypass_on_24_23_jpg;
const int StereoDelay2::baypass_on_24_23_jpgSize = 973;

// JUCER_RESOURCE: meter_green_jpg, 687, "../images/meter_green.jpg"
static const unsigned char resource_StereoDelay2_meter_green_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,6,7,7,
7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,9,0,210,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,
255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,
52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,
162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,
245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,
8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,
115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,
200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,250,34,138,40,175,243,220,254,27,10,40,162,128,
10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,10,40,162,128,63,255,217,0,0};

const char* StereoDelay2::meter_green_jpg = (const char*) resource_StereoDelay2_meter_green_jpg;
const int StereoDelay2::meter_green_jpgSize = 687;

// JUCER_RESOURCE: meter_blue_jpg, 634, "../images/meter_blue.jpg"
static const unsigned char resource_StereoDelay2_meter_blue_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,6,7,7,
7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,8,0,1,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,
255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,40,41,42,
52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,
162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,243,244,
245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,34,50,129,
8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,
115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,
200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,240,250,40,162,191,183,15,225,243,255,217,0,0};

const char* StereoDelay2::meter_blue_jpg = (const char*) resource_StereoDelay2_meter_blue_jpg;
const int StereoDelay2::meter_blue_jpgSize = 634;

// JUCER_RESOURCE: background_meter_jpg, 5467, "../images/background_meter.jpg"
static const unsigned char resource_StereoDelay2_background_meter_jpg[] = { 255,216,255,224,0,16,74,70,73,70,0,1,1,1,0,96,0,96,0,0,255,219,0,67,0,2,1,1,2,1,1,2,2,2,2,2,2,2,2,3,5,3,3,3,3,3,6,4,4,3,5,7,
6,7,7,7,6,7,7,8,9,11,9,8,8,10,8,7,7,10,13,10,10,11,12,12,12,12,7,9,14,15,13,12,14,11,12,12,12,255,219,0,67,1,2,2,2,3,3,3,6,3,3,6,12,8,7,8,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,255,192,0,17,8,0,94,0,242,3,1,34,0,2,17,1,3,17,1,255,196,0,31,0,0,1,5,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,
9,10,11,255,196,0,181,16,0,2,1,3,3,2,4,3,5,5,4,4,0,0,1,125,1,2,3,0,4,17,5,18,33,49,65,6,19,81,97,7,34,113,20,50,129,145,161,8,35,66,177,193,21,82,209,240,36,51,98,114,130,9,10,22,23,24,25,26,37,38,39,
40,41,42,52,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,105,106,115,116,117,118,119,120,121,122,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,
153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,198,199,200,201,202,210,211,212,213,214,215,216,217,218,225,226,227,228,229,230,231,232,233,234,241,242,
243,244,245,246,247,248,249,250,255,196,0,31,1,0,3,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,255,196,0,181,17,0,2,1,2,4,4,3,4,7,5,4,4,0,1,2,119,0,1,2,3,17,4,5,33,49,6,18,65,81,7,97,113,19,
34,50,129,8,20,66,145,161,177,193,9,35,51,82,240,21,98,114,209,10,22,36,52,225,37,241,23,24,25,26,38,39,40,41,42,53,54,55,56,57,58,67,68,69,70,71,72,73,74,83,84,85,86,87,88,89,90,99,100,101,102,103,104,
105,106,115,116,117,118,119,120,121,122,130,131,132,133,134,135,136,137,138,146,147,148,149,150,151,152,153,154,162,163,164,165,166,167,168,169,170,178,179,180,181,182,183,184,185,186,194,195,196,197,
198,199,200,201,202,210,211,212,213,214,215,216,217,218,226,227,228,229,230,231,232,233,234,242,243,244,245,246,247,248,249,250,255,218,0,12,3,1,0,2,17,3,17,0,63,0,248,78,138,40,160,2,138,40,160,2,138,
40,160,2,138,221,248,96,182,15,241,15,70,93,83,236,255,0,96,55,72,38,243,200,17,99,60,111,207,27,51,140,231,140,103,53,232,81,65,173,95,218,193,105,241,13,111,204,55,26,221,162,90,46,166,90,57,22,50,236,
46,60,146,112,203,14,205,160,236,194,3,179,190,41,219,111,63,248,31,230,75,149,175,126,135,144,81,94,177,224,223,135,3,194,183,90,66,107,30,26,73,181,45,70,125,74,21,180,191,73,67,200,169,109,25,135,17,
134,83,146,229,194,156,100,238,227,144,164,37,143,195,155,89,60,49,97,115,115,225,99,5,173,221,141,236,218,134,162,101,184,81,165,203,28,183,10,136,1,125,168,65,68,93,178,6,47,208,124,217,38,91,178,185,
163,142,182,254,183,177,229,20,87,163,207,240,222,11,13,26,255,0,91,58,67,201,164,67,162,89,92,218,205,43,72,45,231,185,102,182,19,40,96,192,177,201,152,50,169,249,121,251,184,24,131,199,218,21,185,248,
230,182,135,195,147,91,105,211,92,161,142,203,77,130,93,247,176,22,206,248,149,152,238,220,51,141,132,41,199,24,235,85,109,82,33,63,119,155,250,217,63,212,243,250,43,211,245,223,7,46,131,175,234,10,44,
35,210,34,159,64,184,184,142,218,17,119,105,56,0,156,121,241,77,35,178,177,199,42,25,163,32,12,22,228,214,182,167,240,195,71,211,127,225,21,180,151,65,194,106,250,141,132,45,120,35,190,66,241,58,41,149,
94,71,34,6,102,98,118,152,114,54,131,200,165,255,0,3,241,109,126,128,221,183,243,252,18,127,169,227,84,87,165,104,158,24,210,124,91,115,162,93,219,104,182,54,137,53,229,237,172,150,106,215,55,2,233,97,
134,57,23,11,230,171,188,199,204,32,42,58,43,48,81,128,51,87,252,69,225,59,47,10,120,138,240,89,88,220,233,171,125,225,139,139,137,45,103,133,224,120,95,115,161,30,91,203,43,39,8,14,26,70,57,39,167,64,
75,72,243,121,63,193,55,250,20,163,173,188,255,0,91,30,77,69,118,63,13,44,116,166,210,238,46,117,29,38,13,85,206,167,101,102,139,52,242,198,136,146,137,183,159,221,178,146,126,65,140,158,8,239,200,61,
53,175,129,252,57,172,120,131,77,143,251,53,172,160,143,82,212,108,12,80,203,36,207,127,246,120,163,120,65,13,34,230,71,102,218,66,52,97,178,2,237,36,26,109,89,219,250,217,63,213,18,158,255,0,215,127,
242,103,148,81,94,192,254,26,210,236,245,141,86,210,211,193,119,134,250,77,17,167,75,45,75,78,185,182,115,34,206,163,124,17,253,162,73,49,179,57,59,201,204,103,24,27,129,171,173,120,15,64,211,254,30,193,
60,58,38,183,114,101,179,182,149,117,104,108,37,107,111,57,246,23,87,184,251,65,139,104,98,233,180,66,172,8,3,36,130,73,21,127,235,205,175,208,111,250,251,147,253,79,41,162,187,185,173,236,180,239,218,
10,206,203,78,176,139,79,181,211,181,168,237,81,82,73,36,105,2,92,96,59,23,99,243,17,233,129,199,78,185,233,62,16,104,237,170,235,154,62,183,38,145,47,136,111,46,117,227,246,251,249,167,152,182,152,168,
209,20,118,42,193,65,98,204,119,74,24,54,220,1,156,212,197,221,41,47,235,97,73,218,254,95,240,127,200,242,10,43,220,60,50,247,211,124,40,177,181,91,125,120,105,119,26,110,162,179,221,137,207,246,85,177,
243,39,32,205,17,77,173,38,64,218,198,64,65,42,64,36,0,124,211,226,61,252,250,154,232,19,92,205,53,196,205,164,196,12,146,185,118,32,73,32,3,39,158,0,3,232,40,147,183,225,248,223,252,191,18,218,213,174,
215,252,26,95,169,205,81,69,20,201,10,40,162,128,10,40,162,128,10,40,162,128,10,40,173,45,14,235,74,183,133,197,245,157,236,247,6,69,49,75,29,210,164,81,174,70,237,241,152,216,191,30,142,181,81,87,118,
19,118,87,30,222,4,215,16,88,19,162,234,192,106,191,241,229,155,73,63,211,56,7,247,124,124,252,16,126,92,245,170,90,174,147,119,161,106,18,218,95,90,220,89,221,192,113,36,51,198,209,201,25,198,112,84,
224,142,8,235,94,199,226,43,189,26,251,196,58,157,204,114,248,122,199,85,214,142,161,5,157,197,174,168,100,142,120,94,47,221,188,204,242,184,129,155,238,0,124,191,188,65,80,7,30,115,241,62,226,54,213,
52,235,101,184,130,238,109,63,77,183,181,184,150,25,86,104,204,138,191,116,58,146,28,40,42,185,4,143,151,0,144,1,172,219,219,250,239,249,89,95,215,167,90,75,250,251,191,59,233,233,247,115,84,81,69,80,
130,172,67,165,93,92,105,243,222,71,109,113,37,165,179,42,205,50,198,76,113,22,206,208,205,208,19,131,140,245,197,63,68,154,194,11,245,109,74,218,242,238,212,3,152,237,174,86,222,66,123,29,204,142,49,
237,183,242,174,255,0,75,215,188,49,63,195,155,157,58,29,83,84,211,100,142,24,221,226,150,198,39,15,57,157,25,156,56,148,52,128,42,168,251,131,10,153,198,73,5,164,43,156,46,185,225,45,91,195,9,3,234,122,
94,163,167,45,208,45,9,185,182,120,68,192,99,37,119,1,145,200,233,234,42,11,237,98,231,82,180,179,130,121,55,197,167,196,97,129,118,129,229,161,118,114,56,28,252,206,199,156,158,125,49,94,137,241,219,
81,178,188,210,98,22,175,166,219,188,154,148,243,188,86,122,148,119,194,252,178,174,110,223,97,62,75,54,49,229,156,14,120,81,131,159,50,169,78,255,0,215,151,245,255,0,1,221,21,109,63,175,235,250,235,184,
81,69,58,18,139,42,25,21,154,48,70,224,173,180,145,220,3,131,131,239,131,84,132,203,186,39,133,181,79,18,137,206,155,166,223,234,2,213,119,205,246,107,119,151,202,95,239,54,208,112,56,60,154,219,212,245,
191,20,248,203,194,19,79,45,164,247,26,61,180,137,246,155,200,52,196,69,103,69,218,190,116,232,128,187,0,255,0,242,209,137,249,179,212,214,207,194,251,203,24,188,76,47,44,98,178,178,211,109,174,32,145,
198,169,173,42,221,89,17,156,220,67,143,41,37,117,25,194,152,164,35,129,180,231,155,186,196,218,22,175,240,218,220,58,232,242,193,167,105,146,199,111,112,111,157,53,20,186,55,46,193,62,207,230,96,171,
43,2,91,202,198,9,249,129,0,5,45,23,245,235,255,0,13,231,231,160,227,171,254,191,175,95,47,45,95,151,209,69,20,8,42,230,135,225,237,67,196,247,223,101,211,44,47,53,27,157,165,252,171,104,90,105,54,142,
167,106,130,112,61,106,157,118,30,12,209,52,207,22,107,107,13,173,196,154,45,157,189,184,150,245,111,181,136,17,175,138,176,59,34,46,177,32,36,227,1,137,219,140,228,227,6,162,174,245,19,103,51,14,133,
125,114,247,107,29,149,220,141,96,165,238,66,196,196,219,168,56,44,252,124,160,19,130,78,48,106,173,122,197,183,139,116,107,179,226,8,245,93,66,125,63,87,212,254,219,115,126,45,32,183,186,181,157,153,
24,70,145,204,179,141,193,67,54,0,7,115,57,201,224,99,201,235,52,222,158,137,254,101,91,71,234,215,228,79,166,106,83,232,250,149,189,229,179,249,119,22,178,44,209,62,208,219,89,72,32,224,240,121,29,233,
53,27,249,53,75,249,174,101,17,44,179,185,118,17,68,177,38,79,162,168,10,163,216,0,42,26,42,132,21,185,171,219,107,222,41,213,52,216,39,211,238,165,187,158,213,18,198,8,108,4,70,104,70,118,152,209,20,
110,7,230,59,128,57,228,228,213,11,25,244,232,244,203,148,184,181,189,150,249,241,246,121,163,187,88,226,139,215,122,24,216,191,224,235,93,255,0,136,252,55,121,226,109,79,194,240,92,248,139,69,134,226,
109,62,75,123,219,199,214,237,230,216,222,108,210,56,118,89,78,75,35,128,55,16,24,182,51,215,13,173,23,175,232,255,0,225,190,98,79,242,253,81,231,90,158,151,117,162,223,203,105,123,109,113,105,117,1,219,
36,51,70,99,146,51,232,84,242,15,214,160,174,143,226,157,204,183,62,47,144,201,246,111,46,40,34,130,15,38,238,27,175,220,199,24,142,61,210,68,204,165,246,168,207,61,125,6,43,59,67,186,210,173,225,113,
125,103,123,61,193,145,76,82,199,116,169,20,107,145,187,124,102,54,47,199,163,173,16,87,234,57,59,12,212,252,45,170,104,150,22,183,119,186,109,253,157,173,242,239,182,154,107,119,142,59,133,192,57,70,
35,12,48,65,200,207,81,84,43,209,190,58,73,165,106,50,207,168,67,30,138,154,133,230,165,51,196,250,117,251,221,125,166,212,128,82,73,84,200,254,91,100,128,23,228,63,120,108,24,21,231,53,17,119,27,86,47,
104,94,22,213,60,80,243,38,153,166,223,234,45,110,158,100,162,214,221,230,49,175,247,155,104,56,30,230,168,215,123,240,190,69,187,240,236,112,69,169,88,105,215,22,90,221,173,252,166,230,241,45,115,18,
171,141,234,88,141,229,14,126,85,203,124,220,3,147,92,127,137,47,33,212,60,69,127,113,108,187,109,231,185,146,72,134,221,184,82,196,129,142,220,118,170,150,142,223,214,203,252,218,249,63,146,142,170,255,
0,215,95,242,191,205,124,233,81,69,20,0,81,69,118,105,225,157,75,93,248,43,99,61,142,157,125,123,5,142,169,123,37,204,144,64,242,37,186,249,22,167,115,144,8,81,128,121,56,232,105,244,108,22,233,119,255,
0,43,149,126,26,92,141,55,77,241,77,242,219,216,220,92,88,233,43,36,31,106,180,138,233,35,99,123,107,25,96,146,43,46,118,59,12,227,141,198,163,255,0,133,175,170,127,207,175,134,191,240,157,211,255,0,248,
205,115,84,82,3,165,255,0,133,175,170,127,207,175,134,191,240,157,211,255,0,248,205,31,240,181,245,79,249,245,240,215,254,19,186,127,255,0,25,174,106,138,0,233,127,225,107,234,159,243,235,225,175,252,
39,116,255,0,254,51,91,159,12,188,127,121,226,31,137,62,30,211,239,44,60,53,53,165,246,167,109,111,60,127,240,143,216,46,244,121,85,88,100,66,8,200,36,100,16,107,207,168,160,14,151,254,22,190,169,255,
0,62,190,26,255,0,194,119,79,255,0,227,52,127,194,215,213,63,231,215,195,95,248,78,233,255,0,252,102,185,170,40,3,165,255,0,133,175,170,127,207,175,134,191,240,157,211,255,0,248,205,31,240,181,245,79,
249,245,240,215,254,19,186,127,255,0,25,174,106,138,0,233,127,225,107,234,159,243,235,225,175,252,39,116,255,0,254,51,91,159,16,124,127,121,161,235,214,240,90,216,120,106,40,164,211,108,46,25,127,225,
31,176,108,188,182,112,200,231,152,79,87,118,56,232,51,129,129,129,94,125,69,0,116,191,240,181,245,79,249,245,240,215,254,19,186,127,255,0,25,163,254,22,190,169,255,0,62,190,26,255,0,194,119,79,255,0,
227,53,205,81,64,29,47,252,45,125,83,254,125,124,53,255,0,132,238,159,255,0,198,104,255,0,133,175,170,127,207,175,134,191,240,157,211,255,0,248,205,115,84,80,7,160,223,248,254,242,15,134,218,78,160,150,
30,26,23,119,90,157,237,188,146,127,194,63,96,119,36,113,90,50,12,121,56,24,50,185,200,25,59,185,206,6,48,255,0,225,107,234,159,243,235,225,175,252,39,116,255,0,254,51,92,213,20,1,210,255,0,194,215,213,
63,231,215,195,95,248,78,233,255,0,252,102,143,248,90,250,167,252,250,248,107,255,0,9,221,63,255,0,140,215,53,69,0,116,191,240,181,245,79,249,245,240,215,254,19,186,127,255,0,25,173,207,9,248,254,243,
83,208,124,79,60,246,30,26,146,93,59,77,75,139,118,255,0,132,126,192,121,110,111,45,163,39,136,121,249,36,113,131,145,206,122,128,71,159,81,64,29,47,252,45,125,83,254,125,124,53,255,0,132,238,159,255,
0,198,104,255,0,133,175,170,127,207,175,134,191,240,157,211,255,0,248,205,115,84,80,7,160,248,179,199,247,154,102,131,225,137,224,176,240,212,114,234,58,107,220,92,55,252,35,246,7,204,113,121,115,24,60,
195,199,201,26,12,12,14,51,212,146,112,255,0,225,107,234,159,243,235,225,175,252,39,116,255,0,254,51,92,213,20,1,222,120,47,198,183,62,43,212,175,108,111,172,188,60,246,239,164,234,50,126,239,67,178,133,
213,146,202,121,17,149,210,32,202,67,170,144,65,29,43,131,162,138,0,40,162,138,0,40,162,180,180,61,14,219,85,133,222,109,82,202,206,68,145,81,109,228,89,140,179,130,64,37,10,161,65,143,246,217,106,163,
22,221,144,155,178,187,51,104,175,106,215,188,57,167,199,170,234,55,58,124,54,147,219,120,121,175,237,109,236,110,52,56,45,202,77,12,57,82,204,165,218,232,42,130,196,202,115,144,9,92,49,21,231,95,20,97,
143,251,87,77,185,91,107,123,73,239,244,219,123,155,136,160,133,97,140,72,203,247,130,40,1,119,0,173,128,0,249,178,0,4,86,124,203,79,59,126,55,107,242,252,138,73,254,127,133,147,252,255,0,51,154,162,138,
42,132,20,85,189,19,77,135,85,191,88,110,53,11,61,50,50,9,243,238,86,86,140,123,98,52,118,201,255,0,118,189,11,74,248,125,15,252,42,251,181,181,254,192,212,238,231,72,110,154,117,212,45,188,244,38,101,
85,133,85,152,75,31,201,146,114,1,99,32,24,202,138,105,10,231,153,81,94,155,241,210,207,78,254,200,134,77,54,61,62,68,181,212,167,182,153,237,244,228,177,107,38,218,164,90,157,170,60,224,184,111,222,156,
177,231,32,100,103,204,170,84,175,253,124,255,0,175,195,77,74,107,250,254,191,175,152,81,69,58,20,18,202,138,206,177,171,16,11,182,72,95,115,128,78,7,176,53,72,77,141,162,189,11,225,117,174,159,163,120,
177,44,101,155,77,214,173,239,174,33,183,138,100,210,13,213,189,203,177,35,200,47,58,171,192,14,70,94,56,217,198,50,51,142,111,106,30,21,179,179,248,116,150,54,178,67,6,161,253,153,46,169,117,191,72,134,
117,159,109,203,70,66,221,179,25,35,192,64,2,162,133,36,114,114,198,148,180,87,254,182,191,229,253,91,80,142,174,223,214,186,126,127,214,231,151,209,69,20,0,81,69,117,190,15,210,102,211,188,65,10,233,
119,58,6,174,243,65,230,92,77,53,155,77,111,166,198,24,23,105,5,196,65,6,7,5,128,97,206,1,201,20,210,187,19,103,37,69,122,198,139,225,109,43,95,179,241,30,161,166,67,161,52,90,168,189,123,88,46,111,173,
99,151,78,133,1,49,226,57,24,50,51,54,14,224,62,85,76,103,12,107,201,234,83,217,121,39,247,223,252,138,182,151,243,107,238,10,40,162,152,130,138,187,99,165,193,117,165,220,220,201,169,88,219,77,6,54,90,
202,179,25,110,63,221,42,133,7,252,9,150,187,13,100,203,119,171,248,78,125,35,68,210,190,219,123,166,18,182,169,104,178,66,88,77,58,7,101,124,135,42,170,9,105,11,125,220,177,56,52,218,219,250,232,223,
232,43,255,0,95,119,249,156,21,21,189,241,46,246,198,251,197,247,15,96,150,171,18,71,20,114,53,180,107,28,18,204,177,170,203,36,106,160,5,70,112,196,0,0,193,232,58,85,61,15,67,182,213,97,119,155,84,178,
179,145,36,84,91,121,22,99,44,224,144,9,66,168,80,99,253,182,90,32,156,180,65,39,109,89,155,69,122,55,198,237,22,206,214,25,31,76,120,227,177,210,245,57,180,177,108,218,60,54,82,196,200,163,31,189,70,
103,156,96,114,210,16,217,32,227,230,175,57,168,140,147,219,250,234,83,77,111,253,116,10,43,189,248,91,26,217,104,49,93,67,166,216,106,87,55,122,221,181,132,171,117,102,151,64,68,234,199,98,171,3,180,
185,4,110,24,111,151,130,57,207,31,226,75,56,116,255,0,17,95,219,219,29,214,240,92,201,28,71,59,178,161,136,7,61,248,239,85,45,29,191,173,147,253,87,226,40,234,175,253,117,95,163,41,81,69,20,0,81,69,122,
86,141,224,173,50,111,133,246,183,183,26,93,131,44,186,117,221,204,247,203,121,33,189,138,84,150,68,139,108,2,76,24,203,8,213,152,196,84,6,36,176,60,129,232,155,236,11,116,187,153,126,9,241,37,222,181,
38,161,169,235,26,175,137,46,255,0,225,23,211,133,197,144,183,213,26,25,161,45,113,4,27,82,71,89,54,46,217,73,194,175,59,64,226,170,234,126,41,240,198,181,127,45,221,238,149,226,219,187,169,206,233,38,
155,196,49,73,36,135,212,177,180,201,63,90,231,44,53,139,157,50,214,246,8,36,242,226,212,97,22,247,11,180,31,49,4,137,32,28,142,62,120,208,228,96,241,142,132,131,90,128,58,95,237,95,7,127,208,11,196,191,
248,61,131,255,0,145,40,254,213,240,119,253,0,188,75,255,0,131,216,63,249,18,185,170,40,3,165,254,213,240,119,253,0,188,75,255,0,131,216,63,249,18,181,188,14,190,20,241,71,138,180,237,22,61,51,197,54,
145,235,87,144,89,200,235,174,66,202,3,200,170,24,175,217,70,237,164,231,4,245,29,171,132,171,58,46,177,115,225,237,98,211,80,179,147,201,187,177,153,46,32,147,104,109,142,140,25,78,8,32,224,128,112,65,
20,92,14,183,94,248,137,162,248,165,96,26,165,183,141,181,33,108,8,132,93,120,154,57,132,64,227,33,119,90,156,103,3,167,160,172,239,237,95,7,127,208,11,196,191,248,61,131,255,0,145,43,154,162,128,58,95,
237,95,7,127,208,11,196,191,248,61,131,255,0,145,40,254,213,240,119,253,0,188,75,255,0,131,216,63,249,18,185,170,40,3,180,209,126,32,104,126,28,130,230,45,58,211,198,182,17,94,46,203,132,182,241,44,113,
44,235,130,48,193,109,70,225,130,120,62,166,180,188,83,174,104,94,21,181,143,65,88,124,105,54,151,61,173,173,251,90,143,17,70,150,251,167,130,41,240,99,251,41,82,84,184,25,239,183,60,116,30,115,86,117,
109,98,231,92,186,73,238,164,243,101,142,24,173,213,182,133,194,69,26,198,131,128,58,34,40,207,83,140,156,156,154,24,27,159,218,190,14,255,0,160,23,137,127,240,123,7,255,0,34,81,253,171,224,239,250,1,
120,151,255,0,7,176,127,242,37,115,84,80,7,75,253,171,224,239,250,1,120,151,255,0,7,176,127,242,37,95,240,255,0,143,244,47,9,220,201,54,149,105,227,77,50,105,87,99,189,167,137,99,133,157,115,156,18,182,
160,145,158,213,197,209,77,48,104,244,45,87,82,240,236,222,31,183,241,20,246,190,48,184,187,213,238,238,172,166,50,120,130,38,145,196,113,192,196,179,155,92,176,97,62,8,63,221,239,158,48,191,181,124,29,
255,0,64,47,18,255,0,224,246,15,254,68,172,57,117,139,153,244,123,125,61,228,205,165,172,210,92,71,30,208,54,188,139,26,185,206,50,114,34,65,130,112,54,241,140,156,214,165,96,185,210,255,0,106,248,59,
254,128,94,37,255,0,193,236,31,252,137,71,246,175,131,191,232,5,226,95,252,30,193,255,0,200,149,205,81,64,29,40,213,124,30,57,26,23,137,65,31,245,29,131,255,0,145,43,177,209,254,36,91,120,138,215,83,212,
36,189,248,136,179,248,118,204,93,194,205,226,160,239,243,207,12,5,85,190,205,148,200,155,36,142,161,113,142,114,60,166,172,216,107,23,58,101,173,236,16,73,229,197,168,194,45,238,23,104,62,98,9,18,64,
57,28,124,241,161,200,193,227,29,9,5,220,14,163,92,241,183,135,188,79,124,110,181,43,15,24,234,55,69,66,249,215,62,35,138,105,48,58,13,205,104,78,5,83,254,213,240,119,253,0,188,75,255,0,131,216,63,249,
18,185,170,41,36,54,207,70,241,190,185,161,92,233,30,29,159,81,135,198,154,162,222,216,53,196,9,115,226,40,228,22,106,46,38,131,203,93,214,167,143,220,3,198,58,129,142,50,121,239,237,95,7,127,208,11,196,
191,248,61,131,255,0,145,43,14,255,0,88,185,212,237,108,160,158,79,50,45,58,19,111,110,187,64,242,208,200,242,17,192,231,231,145,206,78,79,56,232,0,21,168,17,232,62,5,214,116,137,167,212,173,52,85,241,
126,135,113,62,155,121,57,150,45,121,10,73,228,219,75,48,89,17,45,208,186,146,152,35,112,251,198,188,250,172,233,58,197,206,135,116,243,218,201,229,75,36,50,219,179,109,13,148,150,54,141,199,32,245,71,
97,158,163,57,24,56,53,90,128,10,40,162,128,10,211,180,241,150,167,98,150,203,13,209,69,179,183,150,214,33,177,72,17,75,187,204,83,145,243,3,189,186,231,25,227,24,21,153,69,30,64,20,81,69,0,20,81,69,0,
20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,20,81,69,0,127,255,217,0,0};

const char* StereoDelay2::background_meter_jpg = (const char*) resource_StereoDelay2_background_meter_jpg;
const int StereoDelay2::background_meter_jpgSize = 5467;
