	@ data/maps/MtPyre_1F/scripts.inc:39 MtPyre_1F_Text_ComeToPayRespects
	.globl gText_Rom_2161E1
gText_Rom_2161E1: @ 0x082161E1
	.string "あなたも おはか まいりに きたの?\nずいぶんと ポケモン おもい なのね{EOS}"
	.if (. - gText_Rom_2161E1) > 0x26
	.error "gText_Rom_2161E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2161E1) < 0x26
	.space 0x26 - (. - gText_Rom_2161E1)
	.endif
