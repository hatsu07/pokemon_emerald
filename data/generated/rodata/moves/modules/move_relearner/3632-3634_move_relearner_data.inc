	@ asm/move_relearner.s:1028 HideHeartSpritesAndShowTeachMoveText
	.globl gText_Rom_5AD9A0
gText_Rom_5AD9A0: @ 0x085AD9A0
	.string "{0xFD}{0x02}に　どのわざを　おぼえさせる？{EOS}"
	.if (. - gText_Rom_5AD9A0) > 0x12
	.error "gText_Rom_5AD9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9A0) < 0x12
	.space 0x12 - (. - gText_Rom_5AD9A0)
	.endif

	@ asm/move_relearner.s:1150 sub_08160E70
	.globl gText_Rom_5AD9B2
gText_Rom_5AD9B2: @ 0x085AD9B2
	.string "{0xFD}{0x03}を　おぼえさせますか？{EOS}"
	.if (. - gText_Rom_5AD9B2) > 0xe
	.error "gText_Rom_5AD9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9B2) < 0xe
	.space 0xe - (. - gText_Rom_5AD9B2)
	.endif
