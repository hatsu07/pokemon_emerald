	@ data/text/trainers.inc:64 Route103_Text_AmyDefeated (+1 aliases)
	.globl gText_Rom_2597E8
gText_Rom_2597E8: @ 0x082597E8
	.string "クミ『まけっちゃったよぉ……"
	.byte EOS
	.if (. - gText_Rom_2597E8) > 0xf
	.error "gText_Rom_2597E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2597E8) < 0xf
	.space 0xf - (. - gText_Rom_2597E8)
	.endif
