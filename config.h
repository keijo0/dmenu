static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
static const char *fonts[] = {
	"Azeret Mono:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#beaa9b", "#101010" },
	[SchemeSel] = { "#beaa9b", "#101010" },
	[SchemeOut] = { "#beaa9b", "#101010" },
};
static unsigned int lines      = 0;

static const char worddelimiters[] = "";
