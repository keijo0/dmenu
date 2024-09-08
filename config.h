static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
static const char *fonts[] = {
	"Azeret Mono:size=8"
};
static const char *prompt      = "" ;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#beaa9b", "#101010" },
	[SchemeSel] = { "#beaa9b", "#101010" },
	[SchemeOut] = { "#beaa9b", "#101010" },
};
static unsigned int lines      = 15;

static const char worddelimiters[] = "";
