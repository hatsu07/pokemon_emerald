	@ data/text/trainers.inc:395 Route106_Text_ElliotRematchPostBattle
	.globl gText_Rom_25A68A
gText_Rom_25A68A: @ 0x0825A68A
	.string "かっても まけても ポケモンは サイコーだ!\nキミも そう おもうだろ!?{EOS}"
	.if (. - gText_Rom_25A68A) > 0x26
	.error "gText_Rom_25A68A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A68A) < 0x26
	.space 0x26 - (. - gText_Rom_25A68A)
	.endif
