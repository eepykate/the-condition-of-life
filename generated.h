/*
 * appearance
 *
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */

static char *font = "Ubuntu Mono:pixelsize=16:style=Medium";

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#ffffff",
	"#eb9e9b",
	"#edc278",
	"#c4de80",
	"#8fc5e6",
	"#8fc5e6",
	"#eea8e9",
	"#B1B6BD",

	/* 8 bright colors */
	"#aaaeb5",
	"#eb9e9b",
	"#edc278",
	"#c4de80",
	"#8fc5e6",
	"#8fc5e6",
	"#eea8e9",
	"#828791",

	/* annaisms :) */
	"#eea8e9",
	"#edc278",
	"#ffffff",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#ffffff",
	"#828791"
};
