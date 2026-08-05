	@ data/text/trainers.inc:214 Route104_Text_BillyDefeat (+1 aliases)
	.globl gText_Rom_259EAC
gText_Rom_259EAC: @ 0x08259EAC
	.string "うへーっ!\nクツに すなが はいって ジャリジャリする!"
	.byte EOS
	.if (. - gText_Rom_259EAC) > 0x1d
	.error "gText_Rom_259EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259EAC) < 0x1d
	.space 0x1d - (. - gText_Rom_259EAC)
	.endif
