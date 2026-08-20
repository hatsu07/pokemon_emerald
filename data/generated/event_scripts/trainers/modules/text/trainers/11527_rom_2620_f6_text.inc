	@ data/text/trainers.inc:3365 Route134_Text_AlexIntro (+1 aliases)
	.globl gText_Rom_2620F6
gText_Rom_2620F6: @ 0x082620F6
	.string "よーしっ! きゅうけい おわり!\nポケモンしょうぶ しようぜ!{EOS}"
	.if (. - gText_Rom_2620F6) > 0x20
	.error "gText_Rom_2620F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2620F6) < 0x20
	.space 0x20 - (. - gText_Rom_2620F6)
	.endif
