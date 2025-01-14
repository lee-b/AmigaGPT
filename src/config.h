#include "openai.h"
#include "speech.h"

struct Config {
	BOOL speechEnabled;
	enum SpeechSystem speechSystem;
	#ifdef __AMIGAOS3__
	UBYTE speechAccent[32];
	#else
	enum SpeechVoice speechVoice;
	#endif
	enum Model model;
	UBYTE chatFontName[32];
	UWORD chatFontSize;
	UBYTE chatFontStyle;
	UBYTE chatFontFlags;
	UBYTE uiFontName[32];
	UWORD uiFontSize;
	UBYTE uiFontStyle;
	UBYTE uiFontFlags;
	UBYTE openAiApiKey[64];
	ULONG colors[32];
};

/**
 * The global app config
**/
extern struct Config config;

/**
 * Write the config to disk
 * @return RETURN_OK on success, RETURN_ERROR on failure
**/
LONG writeConfig();

/**
 * Read the config from disk
 * @return RETURN_OK on success, RETURN_ERROR on failure
**/
LONG readConfig();