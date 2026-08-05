	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_25947C
gText_Rom_25947C: @ 0x0825947C
	.string "すなはまに　かいた　もじは\nすぐに　きえちゃうのが　かなしいよねー"
	.byte EOS
	.if (. - gText_Rom_25947C) > 0x22
	.error "gText_Rom_25947C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25947C) < 0x22
	.space 0x22 - (. - gText_Rom_25947C)
	.endif
