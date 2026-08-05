	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Smart
	.globl gText_Rom_5D3DD2
gText_ContestLadyCategory_Smart:
gText_Rom_5D3DD2: @ 0x085D3DD2
	.string "かしこ$"
	.if (. - gText_Rom_5D3DD2) > 0x4
	.error "gText_Rom_5D3DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD2) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DD2)
	.endif
