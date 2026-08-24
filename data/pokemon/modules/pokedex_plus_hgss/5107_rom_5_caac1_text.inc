	@ src/data/moves_info.h:2252 moves_info_line_2252
	.globl gText_Rom_5CAABC
gText_Rom_5CAABC: @ 0x085CAABC
	.string "どくどく{EOS}"
	.if (. - gText_Rom_5CAABC) > 0x5
	.error "gText_Rom_5CAABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAABC) < 0x5
	.space 0x5 - (. - gText_Rom_5CAABC)
	.endif

	@ src/pokedex_plus_hgss.c:160 sText_Stats_CatchRate_Medium
	.globl sText_Stats_CatchRate_Medium
sText_Stats_CatchRate_Medium: @ 0x085CAAC1
	.string "ふつう{EOS}"
	.if (. - sText_Stats_CatchRate_Medium) > 0x4
	.error "sText_Stats_CatchRate_Medium may not grow beyond its original slot"
	.endif
	.if (. - sText_Stats_CatchRate_Medium) < 0x4
	.space 0x4 - (. - sText_Stats_CatchRate_Medium)
	.endif
	@ analyzed canonical ROM range 0x085CAAC5-0x085CAAC9
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x26, 0x21, 0x19, 0x2D, 0x00
