/*
  ==============================================================================

    This file was auto-generated by the Jucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/



#ifndef __PLUGINPROCESSOR_H_5C6B068__
#define __PLUGINPROCESSOR_H_5C6B068__

#include "../JuceLibraryCode/JuceHeader.h"
#include "../JuceLibraryCode/JucePluginCharacteristics.h"
#include "soundgoodies.h"


//==============================================================================
/**
*/
class StereoDelay2AudioProcessor  : public AudioProcessor
{

public:
    //==============================================================================
    StereoDelay2AudioProcessor();
    ~StereoDelay2AudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock);
    void releaseResources();

    void processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages);

    //==============================================================================
    AudioProcessorEditor* createEditor();
    bool hasEditor() const;

    //==============================================================================
    const String getName() const;

    int getNumParameters();

    float getParameter (int index);
    void setParameter (int index, float newValue);

    const String getParameterName (int index);
    const String getParameterText (int index);

    const String getInputChannelName (int channelIndex) const;
    const String getOutputChannelName (int channelIndex) const;
    bool isInputChannelStereoPair (int index) const;
    bool isOutputChannelStereoPair (int index) const;

    bool acceptsMidi() const;
    bool producesMidi() const;

    //==============================================================================
    int getNumPrograms();
    int getCurrentProgram();
    void setCurrentProgram (int index);
    const String getProgramName (int index);
    void changeProgramName (int index, const String& newName);
	int calcSliderToSamples(float value);
	void setOwnSampleRate(double value);
	int getOwnSampleRate();
	float calcSliderToTime(float value);
	void setValueOfSampleLeft(float value);
	float getValueOfSampleLeft();
	void setValueOfSampleRight(float value);
	float getValueOfSampleRight();
    //==============================================================================
    void getStateInformation (MemoryBlock& destData);
    void setStateInformation (const void* data, int sizeInBytes);

	enum Parameters
	{
		ldelayParam = 0,
		lfeedbackParam,
		lfilterParam,
		lpanoramaParam,

		rdelayParam,
		rfeedbackParam,
		rfilterParam,
		rpanoramaParam,

		outputParam,
		mixParam,
		delaystereoParam,

		totalNumParams
	};

	float lfilter,lfeedback,ldelay,lpanorama;
	float rfilter,rfeedback,rdelay,rpanorama;
	float output,mix,delaystereo;
	bool link;
	bool bypass;
	bool wait;

	DelayLine delayL;
	DelayLine delayR;

	PeakFollower leftPeakFollower;
	PeakFollower rightPeakFollower;

	int ldelayPosition;
	int rdelayPosition;
	int ownSampleRate;

	onePoleFilter lowPassL;
	onePoleFilter lowPassR;

	midSide mSconverter;

	int size;
	int sr_temp_size;

	int counter;
	int max_counter;

	float l_value;
	float r_value;

	float outL;
	float outR;

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StereoDelay2AudioProcessor);
};

#endif  // __PLUGINPROCESSOR_H_5C6B068__
