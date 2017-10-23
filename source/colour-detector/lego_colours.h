#ifndef COLOUR_DETECTOR_LEGO_COLOURS_H
#define COLOUR_DETECTOR_LEGO_COLOURS_H

#include <stdint.h>
#include "colour.h"

struct lego_colour
{
	uint16_t lego_id;
	const char* colour_name;
	uint8_t c, m, y, k;
	colour rgb;
	const char* pantone;
};

// Source: http://www.peeron.com/cgi-bin/invcgis/colorguide.cgi
struct lego_colour lego_colours[] = {
	//LEGONo,	Color,							R,		G,		B,		 		Pantone
	{	1,		"White",					{	242,		243,		242	},	"CoolGrey 1 C"	 },
	{	2,		"Grey",						{	161,		165,		162	},	"422 C"			 },
	{	3,		"Light yellow",				{	249,		233,		153	},	"1215 C"		 },
	{	5,		"Brick yellow",				{	215,		197,		153	},	"467 C"			 },
	{	6,		"Light green",				{	194,		218,		184	},	"351 C"			 },
	{	9,		"Light reddish violet",		{	232,		186,		199	},	"203 C"			 },
	{	12,		"Light orange brown",		{	203,		132,		66	},	"1385 C"		 },
	{	18,		"Nougat",					{	204,		142,		104	},	"472 C"			 },
	{	21,		"Bright red",				{	196,		40,			27	},	"032 C"			 },
	{	22,		"Med.reddish violet",		{	196,		112,		160	},	"2375 C"		 },
	{	23,		"Bright blue",				{	13,			105,		171	},	"293 C"			 },
	{	24,		"Bright yellow",			{	245,		205,		47	},	"116 C"			 },
	{	25,		"Earth orange",				{	98,			71,			50	},	"469 C"			 },
	{	26,		"Black",					{	27,			42,			52	},	"Process Black C"},
	{	27,		"Dark grey",				{	109,		110,		108	},	"418 C"			 },
	{	28,		"Dark green",				{	40,			127,		70	},	"348 C"			 },
	{	29,		"Medium green",				{	161,		196,		139	},	"353 C"			 },
	{	36,		"Lig.Yellowich orange",		{	243,		207,		155	},	"148 C"			 },
	{	37,		"Bright green",				{	75,			151,		74	},	"355 C"			 },
	{	38,		"Dark orange",				{	160,		95,			52	},	"471 C"			 },
	{	39,		"Light bluish violet",		{	193,		202,		222	},	"2706 C"		 },
	{	45,		"Light blue",				{	180,		210,		227	},	"545 C"			 },
	{	100,	"Light red",				{	238,		196,		182	},	"169 C"			 },
	{	101,	"Medium red",				{	218,		134,		121	},	"170 C"			 },
	{	102,	"Medium blue",				{	110,		153,		201	},	"284 C"			 },
	{	103,	"Light grey",				{	199,		193,		183	},	"421 C"			 },
	{	104,	"Bright violet",			{	107,		50,			123	},	"2592 C"		 },
	{	105,	"Br.yellowish orange",		{	226,		155,		63	},	"137 C"			 },
	{	106,	"Bright orange",			{	218,		133,		64	},	"151 C"			 },
	{	107,	"Bright bluish green",		{	0,			143,		155	},	"327 C"			 },
	{	108,	"Earth yellow",				{	104,		92,			67	},	"1405 C"		 },
	{	110,	"Bright bluish violet",		{	67,			84,			147	},	"2736 C"		 },
	{	112,	"Medium bluish violet",		{	104,		116,		172	},	"2726 C"		 },
	{	115,	"Med.yellowish green",		{	199,		210,		60	},	"381 C"			 },
	{	116,	"Med.bluish green",			{	85,			165,		175	},	"326 C"			 },
	{	118,	"Light bluish green",		{	183,		215,		213	},	"324 C"			 },
	{	119,	"Br.yellowish green",		{	164,		189,		70	},	"390 C"			 },
	{	120,	"Lig.yellowish green",		{	217,		228,		167	},	"365 C"			 },
	{	121,	"Med.yellowish orange",		{	231,		172,		88	},	"1365 C"		 },
	{	123,	"Br.reddish orange",		{	211,		111,		76	},	"165 C"			 },
	{	124,	"Bright reddish violet",	{	146,		57,			120	},	"241 C"			 },
	{	125,	"Light orange",				{	234,		184,		145	},	"1555 C"		 },
	{	127,	"Gold",						{	220,		188,		129	},	"156 C"			 },
	{	128,	"Dark nougat",				{	174,		122,		89	},	"471 C"			 },
	{	131,	"Silver",					{	156,		163,		168	},	"429 C"			 },
	{	135,	"Sand blue",				{	116,		134,		156	},	"5415 C"		 },
	{	136,	"Sand violet",				{	135,		124,		144	},	"666 C"			 },
	{	137,	"Medium orange",			{	224,		152,		100	},	"1575 C"		 },
	{	138,	"Sand yellow",				{	149,		138,		115	},	"451 C"			 },
	{	140,	"Earth blue",				{	32,			58,			86	},	"2955 C"		 },
	{	141,	"Earth green",				{	39,			70,			44	},	"350 C"			 },
	{	145,	"Sand blue metallic",		{	121,		136,		161	},	"652C"			 },
	{	146,	"Sand violet metallic",		{	149,		142,		163	},	"5285 C"		 },
	{	147,	"Sand yellow metallic",		{	147,		135,		103	},	"873 C"			 },
	{	148,	"Dark grey metallic",		{	87,			88,			87	},	"446 C"			 },
	{	149,	"Black metallic",			{	22,			29,			50	},	"2767 C"		 },
	{	150,	"Light grey metallic",		{	171,		173,		172	},	"422 C"			 },
	{	151,	"Sand green",				{	120,		144,		129	},	"624 C"			 },
	{	153,	"Sand red",					{	149,		121,		118	},	"4995 C"		 },
	{	154,	"Dark red",					{	123,		46,			47	},	"194 C"			 },
	{	168,	"Gun metallic",				{	117,		108,		98	},	"WarmGrey 11 C"	 },
	{	180,	"Curry",					{	215,		169,		75	},	"131 C"			 },
	{	200,	"Lemon metalic",			{	130,		138,		93	},	"5767 C"		 },
	{	190,	"Fire Yellow",				{	249,		214,		46	},	"012 C"			 },
	{	191,	"Flame yellowish orange",	{	232,		171,		45	},	"137 C"			 },
	{	192,	"Reddish brown",			{	105,		64,			39	},	"499 C"			 },
	{	193,	"Flame reddish orange",		{	207,		96,			36	},	"173 C"			 },
	{	194,	"Medium stone grey",		{	163,		162,		164	},	"429 C"			 },
	{	195,	"Royal blue",				{	70,			103,		164	},	"2728 C"		 },
	{	196,	"Dark Royal blue",			{	35,			71,			139	},	"286 C"			 },
	{	198,	"Bright reddish lilac",		{	142,		66,			133	},	"254 C"			 },
	{	199,	"Dark stone grey",			{	99,			95,			97	},	"431 C"			 },
	{	208,	"Light stone grey",			{	229,		228,		222	},	"428 C"			 },
	{	209,	"Dark Curry",				{	176,		142,		68	},	"118 C"			 },
	{	210,	"Faded green",				{	112,		149,		120	},	"364 C"			 },
	{	211,	"Turquoise",				{	121,		181,		181	},	"3255 C"		 },
	{	212,	"Light Royal blue",			{	159,		195,		233	},	"292 C"			 },
	{	213,	"Medium Royal blue",		{	108,		129,		183	},	"2727 C"		 },
	{	216,	"Rust",						{	143,		76,			42	},	"174 C"			 },
	{	217,	"Brown",					{	124,		92,			69	},	"161 C"			 },
	{	218,	"Reddish lilac",			{	150,		112,		159	},	"2573 C"		 },
	{	219,	"Lilac",					{	107,		98,			155	},	"2725 C"		 },
	{	220,	"Light lilac",				{	167,		169,		206	},	"2716 C"		 },
	{	221,	"Bright purple",			{	205,		98,			152	},	"232 C"			 },
	{	222,	"Light purple",				{	228,		173,		200	},	"236 C"			 },
	{	223,	"Light pink",				{	220,		144,		149	},	"183 C"			 },
	{	224,	"Light brick yellow",		{	240,		213,		160	},	"7501 C"		 },
	{	225,	"Warm yellowish orange",	{	235,		184,		127	},	"713 C"			 },
	{	226,	"Cool yellow",				{	253,		234,		140	},	"120 C"			 },
	{	232,	"Dove blue",				{	125,		187,		221	},	"311 C"			 },
	{	268,	"Medium lilac",				{	52,			43,			117	},	"2685 C"		 },
	{	40,		"Transparent",				{	236,		236,		236	},	"CoolGrey 1 C"	 },
	{	41,		"Tr.Red",					{	205,		84,			75	},	"185 C"			 },
	{	42,		"Tr.Lg blue",				{	193,		223,		240	},	"304 C"			 },
	{	43,		"Tr.Blue",					{	123,		182,		232	},	"298 C"			 },
	{	44,		"Tr.Yellow",				{	247,		241,		141	},	"393 C"			 },
	{	47,		"Tr.Flu.Reddish orange",	{	217,		133,		108	},	"165 C"			 },
	{	48,		"Tr.Green",					{	132,		182,		141	},	"360 C"			 },
	{	49,		"Tr.Flu.Green",				{	248,		241,		132	},	"387 C"			 },
	{	50,		"Phosph.White",				{	236,		232,		222	},	"427 C"			 },
	{	111,	"Tr.Brown",					{	191,		183,		177	},	"WarmGrey 3 C"	 },
	{	113,	"Tr.Medi.reddish violet",	{	228,		173,		200	},	"230 C"			 },
	{	126,	"Tr.Bright bluish violet",	{	165,		165,		203	},	"271 C"			 },
	{	133,	"Neon orange",				{	213,		115,		61	},	"165 C"			 },
	{	134,	"Neon green",				{	216,		221,		86	},	"374 C"			 },
	{	143,	"Tr.Flu.Blue",				{	207,		226,		247	},	"657 C"			 },
	{	157,	"Tr.Flu.Yellow",			{	255,		246,		123	},	"395 C"			 },
	{	158,	"Tr.Flu.Red",				{	225,		164,		194	},	"211 C"			 },
	{	176,	"Red flip / flop",			{	151,		105,		91	},	"483 C"			 },
	{	178,	"Yellow flip / flop",		{	180,		132,		85	},	"160 C"			 },
	{	179,	"Silver flip / flop",		{	137,		135,		136	},	"410 C"			 },
};

#endif
