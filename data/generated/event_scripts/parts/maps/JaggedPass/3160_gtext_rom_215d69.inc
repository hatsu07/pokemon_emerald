	@ data/maps/JaggedPass/scripts.inc:160 JaggedPass_Text_EricPostBattle
	.globl gText_Rom_215D69
gText_Rom_215D69: @ 0x08215D69
	.string "たしかに ポケモンでは まけた……\pだが やまを あいする きもちなら\nわたしの ほうが まさっているだろ!$"
	.if (. - gText_Rom_215D69) > 0x37
	.error "gText_Rom_215D69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215D69) < 0x37
	.space 0x37 - (. - gText_Rom_215D69)
	.endif
