
//{{BLOCK(TFont)

typedef struct TFont
{
	const void	*data;				//!< Character data.
	const unsigned char	*widths;	//!< Width table for variable width font.
	const unsigned char	*heights;	//!< Height table for variable height font.
	unsigned short	charOffset;		//!< Character offset.
	unsigned short	charCount;		//!< Character count.
	unsigned char	charW;			//!< Character width (fwf).
	unsigned char	charH;			//!< Character height.
	unsigned char	cellW;			//!< Glyph cell width.
	unsigned char	cellH;			//!< Glyph cell height.
	unsigned short	cellSize;		//!< Cell-size (bytes).
	unsigned char	bpp;			//!< Font bitdepth;
	unsigned char	extra;			//!< Padding. Free to use.
} TFont;

//}}BLOCK(TFont)


//{{BLOCK(berk)

// Berka! Berka! Berka!
// berk.gif font from headsipn's collection.
// 24x40@4, tiled, with palette

const unsigned int berkGlyphs[1320]=
{
	0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x34400000,0x34440000,0x34445000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,
	0x34445500,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,0x00000000,
	0x05544433,0x00544433,0x00044433,0x00004433,0x00000433,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00500000,0x05540000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x05540000,0x00500000,0x05540000,0x55544000,0x55544000,0x55544000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x05540000,0x00500000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44445000,0x34445500,0x34445550,0x34445500,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,
	0x34445000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x34000000,0x34400000,0x34440000,0x34445000,0x34445500,0x00445550,0x00445550,
	0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,
	0x55544000,0x55544433,0x55544433,0x55544433,0x05544433,0x00544433,0x00000000,0x00000000,
	0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,0x00000000,
	0x00544433,0x05544433,0x55544433,0x05544433,0x00544433,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44445000,0x34445500,0x34445550,0x34445500,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,

	0x34445000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x22111200,0x22111220,0x22111220,0x22111220,0x22111200,0x00000000,
	0x55544000,0x55544000,0x05544433,0x00544433,0x00044433,0x00544433,0x05544433,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x34445000,0x34445500,0x34445550,0x34445500,0x34445000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,0x00000000,
	0x05544433,0x00544433,0x00044433,0x00004433,0x00000433,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00005000,0x00045500,0x00445550,0x00445550,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00500000,0x05540000,0x55544000,0x55544000,
	0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00445550,0x00445550,0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,0x00000000,
	0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,
	0x55544000,0x55544000,0x05544433,0x00544433,0x00044433,0x00544433,0x05544433,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x05540000,0x00500000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x34400000,0x34440000,0x34445000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00544433,0x05544433,0x55544433,0x05544433,
	0x34445500,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00544433,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00445550,0x00445550,0x00445550,0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,
	0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,0x05544433,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x34445000,0x34445500,0x34445550,0x34445500,0x34445000,0x00000000,0x00000000,0x00000000,

	0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,0x00000000,
	0x05544433,0x00544433,0x00044433,0x00004433,0x00000433,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00005000,0x00045500,0x00445550,0x00445550,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00445550,0x00445550,0x00445550,0x00445550,0x34445500,0x34445000,0x34440000,0x34445000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,
	0x34445500,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,0x00000000,

	0x05544433,0x00544433,0x00044433,0x00004433,0x00000433,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x34400000,0x34440000,0x34445000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,
	0x34445500,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00445550,0x00045500,0x00005000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x05540000,0x00500000,0x05540000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x05540000,0x00500000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x34400000,0x34440000,0x34445000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,
	0x34445500,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00445550,0x34445500,0x34445000,0x34440000,0x34445000,0x34445500,0x00445550,0x00445550,
	0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,

	0x55544000,0x05544433,0x00544433,0x00044433,0x00544433,0x05544433,0x55544000,0x55544000,
	0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,0x00000000,0x00000000,0x00000000,
	0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,0x00000000,
	0x05544433,0x00544433,0x00044433,0x00004433,0x00000433,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,0x34400000,0x34440000,0x34445000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000433,0x00004433,0x00044433,0x00544433,
	0x34445500,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,0x00445550,
	0x22111223,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x05544433,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00445550,0x34445500,0x34445000,0x34440000,0x34400000,0x34000000,0x00000000,0x00000000,
	0x00000000,0x22111223,0x22111223,0x22111223,0x22111223,0x22111223,0x00000000,0x00000000,
	0x55544000,0x05544433,0x00544433,0x00044433,0x00544433,0x05544433,0x55544000,0x55544000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,0x55544000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x55544000,0x55544000,0x55544000,0x05540000,0x00500000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x02111200,0x02111200,0x02111200,0x02111200,0x02111200,0x02111200,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,

	0x02111200,0x02111200,0x02111200,0x02111200,0x02111200,0x02111200,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
	0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

const unsigned short berkPal[16]=
{
	0x01F0,0x039C,0x031C,0x029C,0x021C,0x019C,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const TFont berkFont= 
{
	berkGlyphs, 0, 0,
	48, 11,
	24, 40,
	24, 40, 480, 
	4, 0, 
};

//}}BLOCK(berk)
