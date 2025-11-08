static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
static const char *fonts[] = {
	"Fixedsys:size=9"
};
static const char *prompt      = ">" ;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
//	[SchemeNorm] = { "#000000", "#beaa9b" },
//	[SchemeSel] = { "#000000", "#beaa9b" },
//	[SchemeOut] = { "#000000", "#beaa9b" },
	[SchemeNorm] = { "#beaa9b", "#101010" },
	[SchemeSel] = { "#beaa9b", "#101010" },
	[SchemeOut] = { "#beaa9b", "#101010" },
};
static unsigned int lines      = 30;

static const char worddelimiters[] = "";
