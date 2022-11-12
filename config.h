static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 700;                    /* minimum width when centered */
static const char *fonts[] = {
	"Cousine:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#beaa9b", "#161616" },
	[SchemeSel] = { "#beaa9b", "#161616" },
	[SchemeOut] = { "#beaa9b", "#161616" },
};
static unsigned int lines      = 10;

static const char worddelimiters[] = " ";
