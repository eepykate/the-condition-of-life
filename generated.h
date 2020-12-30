/*
 * appearance
 *
 * font: see http://freedesktop.org/software/fontconfig/fontconfig-user.html
 */

static char *font = "Ubuntu Mono:pixelsize=12:style=regular";

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#ffffff",
	"#cd5e79",
	"#c97d4e",
	"#6b9e4c",
	"#5094b4",
	"#4973b7",
	"#b45aaa",
	"#767676",

	/* 8 bright colors */
	"#bbc0c7",
	"#cd5e79",
	"#c97d4e",
	"#6b9e4c",
	"#5094b4",
	"#4973b7",
	"#b45aaa",
	"#444444",

	/* annaisms :) */
	"#4973b7",
	"#b45aaa",
	"#ffffff",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#ffffff",
	"#444444"
};
