/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const unsigned int alpha = 0xff; // 0xc0
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Noto Color Emoji:pixelsize=13:antialias=true:autohint=true",
	"JetBrainsMono NF:size=13:style=Bold"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#f8f8f2", "#1A1C24" },
	[SchemeSel] = { "#f8f8f2", "#00A8E8" },
	[SchemeSelHighlight] = { "#ffc978", "#282a36" },
	[SchemeNormHighlight] = { "#ffc978", "#1A1C24" },
	[SchemeOut] = { "#1A1C24", "#6bd6a3" },
	[SchemeOutHighlight] = { "#ffc978", "#6bd6a4" },
	[SchemeHp] = { "#bbbbbb", "#1A1C24" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
