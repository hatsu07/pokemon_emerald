	@ data/text/trainers.inc:3239 Route132_Text_KiyoIntro (+1 aliases)
	.globl gText_Rom_261C45
gText_Rom_261C45: @ 0x08261C45
	.string "24じかん ポケモンのこと かんがえてる\nそんな おれに かてると おもうか!?{EOS}"
	.if (. - gText_Rom_261C45) > 0x29
	.error "gText_Rom_261C45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261C45) < 0x29
	.space 0x29 - (. - gText_Rom_261C45)
	.endif
