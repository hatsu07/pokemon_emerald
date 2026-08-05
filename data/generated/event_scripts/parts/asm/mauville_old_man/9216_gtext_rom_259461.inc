	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_259461
gText_Rom_259461: @ 0x08259461
	.string "しゃぼんだまに　のって　とべるように\nならないかなー"
	.byte EOS
	.if (. - gText_Rom_259461) > 0x1b
	.error "gText_Rom_259461 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259461) < 0x1b
	.space 0x1b - (. - gText_Rom_259461)
	.endif
