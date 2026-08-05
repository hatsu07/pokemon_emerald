	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cool
	.globl gText_Rom_5D3DC4
gText_ContestLadyCategory_Cool:
gText_Rom_5D3DC4: @ 0x085D3DC4
	.string "かっこよ$"
	.if (. - gText_Rom_5D3DC4) > 0x5
	.error "gText_Rom_5D3DC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC4) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC4)
	.endif
