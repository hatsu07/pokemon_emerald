	@ data/text/trainers.inc:178 Route104_Text_GinaIntro (+1 aliases)
	.globl gText_Rom_259CCA
gText_Rom_259CCA: @ 0x08259CCA
	.string "ナオ『よーし!\nあたしたちの ポケモンと たたかうです!"
	.byte EOS
	.if (. - gText_Rom_259CCA) > 0x1d
	.error "gText_Rom_259CCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259CCA) < 0x1d
	.space 0x1d - (. - gText_Rom_259CCA)
	.endif
