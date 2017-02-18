//======================================================================
//
//	border, 24x48@4, 
//	+ palette 16 entries, not compressed
//	+ 18 tiles not compressed
//	Total size: 32 + 576 = 608
//
//	Time-stamp: 2005-12-07, 19:34:09
//	Exported by Cearn's Usenti v1.7.1
//	(comments, kudos, flames to "daytshen@hotmail.com")
//
//======================================================================

const unsigned int borderPal[8]=
{
	0x0000DEAD,0x294A2CC6,0x5AD64A52,0x7BDE6739,0x00006000,0x00000000,0x00000000,0x7FFF7DF0,
//	0x00003BEB,0x294A2CC6,0x5AD64A52,0x7BDE6739,0x00006000,0x00000000,0x00000000,0x7FFF7DF0,
};

const unsigned int borderTiles[144]=
{
	0x00000000,0x00000000,0x33330000,0x66663000,0x55556300,0x44456300,0x11456300,0x81456300,
	0x00000000,0x00000000,0x33333333,0x66666666,0x55555555,0x44444444,0x11111111,0x88888888,
	0x00000000,0x00000000,0x00003333,0x00036666,0x00345555,0x00345444,0x00345611,0x00345618,
	0x81456300,0x81456300,0x81456300,0x81456300,0x81456300,0x81456300,0x81456300,0x81456300,
	0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,
	0x00345618,0x00345618,0x00345618,0x00345618,0x00345618,0x00345618,0x00345618,0x00345618,
	0x81456300,0x11456300,0x66456300,0x55556300,0x44443000,0x33330000,0x00000000,0x00000000,
	0x88888888,0x11111111,0x66666666,0x55555555,0x44444444,0x33333333,0x00000000,0x00000000,

	0x00345618,0x00345611,0x00345666,0x00345555,0x00034444,0x00003333,0x00000000,0x00000000,
	0x00000000,0x00000000,0x06666600,0x63444600,0x23514600,0x43554600,0x13333600,0x81426000,
	0x00000000,0x00000000,0x00000000,0x66666666,0x22222222,0x44444444,0x11111111,0x88888888,
	0x00000000,0x00000000,0x00666660,0x00344466,0x00351462,0x00355464,0x00333361,0x00042618,
	0x81426000,0x81426000,0x81426000,0x81426000,0x81426000,0x81426000,0x81426000,0x81426000,
	0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,0x88888888,
	0x00042618,0x00042618,0x00042618,0x00042618,0x00042618,0x00042618,0x00042618,0x00042618,
	0x81426000,0x16666600,0x63444600,0x23514600,0x43554600,0x03333600,0x00000000,0x00000000,

	0x88888888,0x11111111,0x66666666,0x22222222,0x44444444,0x00000000,0x00000000,0x00000000,
	0x00042618,0x00666661,0x00344466,0x00351462,0x00355464,0x00333360,0x00000000,0x00000000,
};

