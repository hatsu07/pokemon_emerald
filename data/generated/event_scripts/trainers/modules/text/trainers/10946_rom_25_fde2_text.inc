	@ data/text/trainers.inc:2504 Route123_Text_FernandoPostBattle
	.globl gText_Rom_25FDE2
gText_Rom_25FDE2: @ 0x0825FDE2
	.string "きみ やるじゃん\nきみの きょくを つくって みたいよ{EOS}"
	.if (. - gText_Rom_25FDE2) > 0x1c
	.error "gText_Rom_25FDE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FDE2) < 0x1c
	.space 0x1c - (. - gText_Rom_25FDE2)
	.endif
