//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "printf '\t'",				0,		0},

	{"", "~/.scripts/blocks/pomodoro",		5,		0},

	{"", "~/.scripts/blocks/bluetooth_headset",	5,		0},

	{"", "~/.scripts/blocks/volume",		5,		10},

	{"", "~/.scripts/blocks/battery",		5,		0},

	{"", "date +'%d-%m %H:%M \t '",			60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
