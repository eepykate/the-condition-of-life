/*
 * appearance
 *
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */

static char *font = "Ubuntu Mono:pixelsize=12:style=bold";

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#151823",
	"#eb9797",
	"#eec299",
	"#d6e4ab",
	"#b3e8e8",
	"#b6d0fd",
	"#d6b1f0",
	"#9294a8",

	/* 8 bright colors */
	"#5c5c80",
	"#eb9797",
	"#eec299",
	"#d6e4ab",
	"#b3e8e8",
	"#b6d0fd",
	"#d6b1f0",
	"#d6d8eb",

	/* annaisms :) */
	"#b6d0fd",
	"#d6b1f0",
	"#232733",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#151823",
	"#d6d8eb"
};
