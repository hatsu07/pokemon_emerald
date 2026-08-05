	@ data/text/trainers.inc:1025 Route111_Text_BrookePostRematch
	.globl gText_Rom_25C05D
gText_Rom_25C05D: @ 0x0825C05D
	.string "あたしの ポケモン しんか させずに\nさきに わざを おぼえさせてから\lそだてた ほうが よかったかな?$"
	.if (. - gText_Rom_25C05D) > 0x35
	.error "gText_Rom_25C05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C05D) < 0x35
	.space 0x35 - (. - gText_Rom_25C05D)
	.endif
