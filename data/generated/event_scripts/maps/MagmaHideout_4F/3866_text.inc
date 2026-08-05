	@ data/maps/MagmaHideout_4F/scripts.inc:150 MagmaHideout_4F_Text_Grunt12PostBattle
	.globl gText_Rom_21CAC9
gText_Rom_21CAC9: @ 0x0821CAC9
	.string "マツブサさまー!\nしんにゅうしゃが そっちにー!"
	.byte EOS
	.if (. - gText_Rom_21CAC9) > 0x19
	.error "gText_Rom_21CAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAC9) < 0x19
	.space 0x19 - (. - gText_Rom_21CAC9)
	.endif
