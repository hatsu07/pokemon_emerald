	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Beauty
	.globl gText_Rom_5D3DC9
gText_ContestLadyCategory_Beauty:
gText_Rom_5D3DC9: @ 0x085D3DC9
	.string "うつくし$"
	.if (. - gText_Rom_5D3DC9) > 0x5
	.error "gText_Rom_5D3DC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC9) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC9)
	.endif
