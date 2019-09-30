//
//  SUConstants.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/16/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//


#ifndef SUCONSTANTS_H
#define SUCONSTANTS_H

#import <Foundation/Foundation.h>
#include "SUExport.h"

// -----------------------------------------------------------------------------
//	Misc:
// -----------------------------------------------------------------------------

extern const NSTimeInterval SUMinimumUpdateCheckInterval;
extern const NSTimeInterval SUDefaultUpdateCheckInterval;

extern NSString *const SUBundleIdentifier;

extern NSString *const SUAppcastAttributeValueMacOS;

// -----------------------------------------------------------------------------
//	Notifications:
// -----------------------------------------------------------------------------

extern NSString *const SUTechnicalErrorInformationKey;

// -----------------------------------------------------------------------------
//	PList keys::
// -----------------------------------------------------------------------------

SU_EXPORT extern NSString *const SUFeedURLKey;
SU_EXPORT extern NSString *const SUDownloadURLKey;
SU_EXPORT extern NSString *const SUHasLaunchedBeforeKey;
SU_EXPORT extern NSString *const SUUpdateRelaunchingMarkerKey;
SU_EXPORT extern NSString *const SUShowReleaseNotesKey;
SU_EXPORT extern NSString *const SUSkippedVersionKey;
SU_EXPORT extern NSString *const SUScheduledCheckIntervalKey;
SU_EXPORT extern NSString *const SULastCheckTimeKey;
SU_EXPORT extern NSString *const SUExpectsDSASignatureKey;
SU_EXPORT extern NSString *const SUExpectsEDSignatureKey;
SU_EXPORT extern NSString *const SUPublicEDKeyKey;
SU_EXPORT extern NSString *const SUPublicDSAKeyKey;
SU_EXPORT extern NSString *const SUPublicDSAKeyFileKey;
SU_EXPORT extern NSString *const SUAutomaticallyUpdateKey;
SU_EXPORT extern NSString *const SUAllowsAutomaticUpdatesKey;
SU_EXPORT extern NSString *const SUEnableAutomaticChecksKey;
SU_EXPORT extern NSString *const SUEnableSystemProfilingKey;
SU_EXPORT extern NSString *const SUSendProfileInfoKey;
SU_EXPORT extern NSString *const SUUpdateGroupIdentifierKey;
SU_EXPORT extern NSString *const SULastProfileSubmitDateKey;
SU_EXPORT extern NSString *const SUPromptUserOnFirstLaunchKey;
SU_EXPORT extern NSString *const SUDefaultsDomainKey;
SU_EXPORT extern NSString *const SUEnableJavaScriptKey;
extern NSString *const SUFixedHTMLDisplaySizeKey __attribute__((deprecated("This key is obsolete and has no effect.")));
extern NSString *const SUAppendVersionNumberKey __attribute__((deprecated("This key is obsolete. See SPARKLE_APPEND_VERSION_NUMBER.")));
extern NSString *const SUEnableAutomatedDowngradesKey __attribute__((deprecated("This key is obsolete. See SPARKLE_AUTOMATED_DOWNGRADES.")));
extern NSString *const SUNormalizeInstalledApplicationNameKey __attribute__((deprecated("This key is obsolete. SPARKLE_NORMALIZE_INSTALLED_APPLICATION_NAME.")));
extern NSString *const SURelaunchToolNameKey __attribute__((deprecated("This key is obsolete. SPARKLE_RELAUNCH_TOOL_NAME.")));

// -----------------------------------------------------------------------------
//	Appcast keys::
// -----------------------------------------------------------------------------

SU_EXPORT extern NSString *const SUAppcastAttributeDeltaFrom;
SU_EXPORT extern NSString *const SUAppcastAttributeDSASignature;
SU_EXPORT extern NSString *const SUAppcastAttributeEDSignature;
SU_EXPORT extern NSString *const SUAppcastAttributeShortVersionString;
SU_EXPORT extern NSString *const SUAppcastAttributeVersion;
SU_EXPORT extern NSString *const SUAppcastAttributeOsType;
SU_EXPORT extern NSString *const SUAppcastAttributePhasedRolloutInterval;

SU_EXPORT extern NSString *const SUAppcastElementCriticalUpdate;
SU_EXPORT extern NSString *const SUAppcastElementDeltas;
SU_EXPORT extern NSString *const SUAppcastElementMinimumSystemVersion;
SU_EXPORT extern NSString *const SUAppcastElementMaximumSystemVersion;
SU_EXPORT extern NSString *const SUAppcastElementReleaseNotesLink;
SU_EXPORT extern NSString *const SUAppcastElementTags;

SU_EXPORT extern NSString *const SURSSAttributeURL;
SU_EXPORT extern NSString *const SURSSAttributeLength;

SU_EXPORT extern NSString *const SURSSElementDescription;
SU_EXPORT extern NSString *const SURSSElementEnclosure;
SU_EXPORT extern NSString *const SURSSElementLink;
SU_EXPORT extern NSString *const SURSSElementPubDate;
SU_EXPORT extern NSString *const SURSSElementTitle;

#endif
