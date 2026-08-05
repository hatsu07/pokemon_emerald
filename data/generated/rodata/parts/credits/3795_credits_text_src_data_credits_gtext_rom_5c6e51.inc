	@ src/data/credits.h:103 sCreditsText_LeadGraphicArtist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E51
gText_Rom_5C6E51: @ 0x085C6E51
	.string "グラフィック リーダー$"
	.if (. - gText_Rom_5C6E51) != 0xc
	.error "gText_Rom_5C6E51 must retain its original byte length"
	.endif
