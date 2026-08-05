	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_259445
gText_Rom_259445: @ 0x08259445
	.string "120しょくの　クレヨン　かったんだー\nいいでしょう？"
	.byte EOS
	.if (. - gText_Rom_259445) > 0x1c
	.error "gText_Rom_259445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259445) < 0x1c
	.space 0x1c - (. - gText_Rom_259445)
	.endif
