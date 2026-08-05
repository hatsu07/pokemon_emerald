	@ asm/lilycove_lady.s:947 sub_0818DDA4
	.globl gText_QuizLadyDefaultAnswer
	.globl gText_Rom_5D3D90
gText_QuizLadyDefaultAnswer:
gText_Rom_5D3D90: @ 0x085D3D90
	.string "おねえ$"
	.if (. - gText_Rom_5D3D90) > 0x4
	.error "gText_Rom_5D3D90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D90) < 0x4
	.space 0x4 - (. - gText_Rom_5D3D90)
	.endif
