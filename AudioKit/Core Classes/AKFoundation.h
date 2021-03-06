//
//  AKFoundation.h
//  AudioKit
//
//  Auto-generated on 12/29/14.
//  Copyright (c) 2014 Aurelius Prochazka. All rights reserved.
//

#ifndef AKFoundation_h
#define AKFoundation_h

#import <Foundation/Foundation.h>

# pragma mark - Core Classes
#import "AKManager.h"
#import "AKOrchestra.h"

# pragma mark - Instruments
#import "AKInstrument.h"
#import "AKInstrumentProperty.h"

#pragma mark - Notes
#import "AKNote.h"
#import "AKNoteProperty.h"

# pragma mark - Parameters
#import "AKParameter.h"
#import "AKAudio.h"
#import "AKControl.h"
#import "AKConstant.h"

# pragma mark - Sequencing
#import "AKEvent.h"
#import "AKSequence.h"

#  pragma mark - Tables
#import "AKSoundFileTable.h"
#import "AKTable.h"

# pragma mark Table Generators
#import "AKHarmonicCosineTableGenerator.h"
#import "AKExponentialTableGenerator.h"
#import "AKFourierSeriesTableGenerator.h"
#import "AKLineTableGenerator.h"
#import "AKRandomDistributionTableGenerator.h"
#import "AKWindowTableGenerator.h"

// -----------------------------------------------------------------------------
#  pragma mark - Operations
// -----------------------------------------------------------------------------

#import "AKParameter+Operation.h"

// Operations - Analysis
#import "AKTrackedAmplitude.h"
#import "AKTrackedAmplitudeFromFSignal.h"
#import "AKTrackedFrequency.h"
#import "AKTrackedFrequencyFromFSignal.h"

// Operations - FFT
#import "AKCrossSynthesizedFFT.h"
#import "AKFFT.h"
#import "AKFFTProcessor.h"
#import "AKMixedFFT.h"
#import "AKPhaseLockedVocoder.h"
#import "AKResynthesizedAudio.h"
#import "AKScaledFFT.h"
#import "AKSpectralVocoder.h"
#import "AKWarpedFFT.h"

// Operations - Math
#import "AKAssignment.h"
#import "AKDifference.h"
#import "AKInverse.h"
#import "AKMaximum.h"
#import "AKMinimum.h"
#import "AKMultipleInputMathOperation.h"
#import "AKProduct.h"
#import "AKSingleInputMathOperation.h"
#import "AKSum.h"
#import "AKTableValue.h"

// Operations - Signal Generators

// Operations - Signal Generators - Envelopes
#import "AKADSREnvelope.h"
#import "AKLine.h"
#import "AKLinearADSREnvelope.h"
#import "AKLinearEnvelope.h"

// Operations - Signal Generators - Granular Synthesis
#import "AKGranularSynthesisTexture.h"
#import "AKGranularSynthesizer.h"
#import "AKSinusoidBursts.h"

// Operations - Signal Generators - Loopers
#import "AKMonoSoundFileLooper.h"
#import "AKStereoSoundFileLooper.h"
#import "AKTableLooper.h"

// Operations - Signal Generators - Musical Controls
#import "AKPortamento.h"
#import "AKVibrato.h"

// Operations - Signal Generators - Oscillators
#import "AKFMOscillator.h"
#import "AKLowFrequencyOscillator.h"
#import "AKOscillator.h"
#import "AKPhasor.h"
#import "AKVCOscillator.h"

// Operations - Signal Generators - Physical Models
#import "AKMandolin.h"
#import "AKMarimba.h"
#import "AKPluckedString.h"
#import "AKStruckMetalBar.h"
#import "AKVibes.h"

// Operations - Signal Generators - Physical Models - PhISEM
#import "AKBambooSticks.h"
#import "AKCabasa.h"
#import "AKCrunch.h"
#import "AKDroplet.h"
#import "AKGuiro.h"
#import "AKSandPaper.h"
#import "AKSekere.h"
#import "AKSleighbells.h"
#import "AKStick.h"
#import "AKTambourine.h"

// Operations - Signal Generators - Physical Models - Waveguide
#import "AKBeatenPlate.h"
#import "AKBowedString.h"
#import "AKFlute.h"
#import "AKSimpleWaveGuideModel.h"

// Operations - Signal Generators - Random Generators
#import "AKInterpolatedRandomNumberPulse.h"
#import "AKJitter.h"
#import "AKNoise.h"
#import "AKRandomNumbers.h"

// Operations - Signal Generators - Segment Arrays
#import "AKSegmentArray.h"
#import "AKSegmentArrayLoop.h"

// Operations - Signal Generators - Subtractive Synthesis
#import "AKAdditiveCosines.h"

// Operations - Signal Input and Output
#import "AKAudioInput.h"
#import "AKAudioOutput.h"
#import "AKFileInput.h"
#import "AKLog.h"
#import "AKMP3FileInput.h"
#import "AKMonoFileInput.h"

// Operations - Signal Modifiers

// Operations - Signal Modifiers - Convolutions
#import "AKConvolution.h"
#import "AKStereoConvolution.h"

// Operations - Signal Modifiers - Delays
#import "AKDelay.h"
#import "AKMultitapDelay.h"
#import "AKVariableDelay.h"

// Operations - Signal Modifiers - Effects
#import "AKCompressor.h"
#import "AKDopplerEffect.h"
#import "AKFlanger.h"

// Operations - Signal Modifiers - Filters
#import "AKCombFilter.h"
#import "AKDCBlock.h"
#import "AKDecimator.h"
#import "AKDeclick.h"
#import "AKEqualizerFilter.h"
#import "AKHighPassFilter.h"
#import "AKHilbertTransformer.h"
#import "AKLowPassFilter.h"
#import "AKMoogLadder.h"
#import "AKMoogVCF.h"
#import "AKResonantFilter.h"
#import "AKStringResonator.h"
#import "AKThreePoleLowpassFilter.h"
#import "AKVariableFrequencyResponseBandPassFilter.h"

// Operations - Signal Modifiers - Filters - Butterworth Filters
#import "AKBandPassButterworthFilter.h"
#import "AKBandRejectButterworthFilter.h"
#import "AKHighPassButterworthFilter.h"
#import "AKLowPassButterworthFilter.h"

// Operations - Signal Modifiers - Reverbs
#import "AKBallWithinTheBoxReverb.h"
#import "AKFlatFrequencyResponseReverb.h"
#import "AKParallelCombLowPassFilterReverb.h"
#import "AKReverb.h"

// Operations - Signal Modifiers - Volume and Spatialization
#import "AKBalance.h"
#import "AKMix.h"
#import "AKPanner.h"

#endif