	@ data/text/shoal_cave.inc:50 ShoalCave_Text_WasShoallShellNowNothing
	.globl gText_Rom_26424A
gText_Rom_26424A: @ 0x0826424A
	.string "あさせのかいがらを みつけた あと……\nいまは なにも ない……$"
	.if (. - gText_Rom_26424A) > 0x21
	.error "gText_Rom_26424A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26424A) < 0x21
	.space 0x21 - (. - gText_Rom_26424A)
	.endif
