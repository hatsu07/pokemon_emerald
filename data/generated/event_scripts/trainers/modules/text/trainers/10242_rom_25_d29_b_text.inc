	@ data/text/trainers.inc:1475 Route115_Text_NobRematchIntro (+1 aliases)
	.globl gText_Rom_25D29B
gText_Rom_25D29B: @ 0x0825D29B
	.string "きみに まけてから がんばって\nポケモンと おのれを きたえなおしたぞ!\lさあ もういちど しょうぶ!{EOS}"
	.if (. - gText_Rom_25D29B) > 0x34
	.error "gText_Rom_25D29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D29B) < 0x34
	.space 0x34 - (. - gText_Rom_25D29B)
	.endif
