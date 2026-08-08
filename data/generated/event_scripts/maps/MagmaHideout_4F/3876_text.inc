	@ data/maps/MagmaHideout_4F/scripts.inc:174 MagmaHideout_4F_Text_TabithaDefeat (+1 aliases)
	.globl gText_Rom_21CB96
gText_Rom_21CB96: @ 0x0821CB96
	.string "やられちまったい…… ウヒョ"
	.byte EOS
	.if (. - gText_Rom_21CB96) > 0xf
	.error "gText_Rom_21CB96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CB96) < 0xf
	.space 0xf - (. - gText_Rom_21CB96)
	.endif
