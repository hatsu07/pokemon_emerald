	@ asm/mauville_old_man.s:470 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_25941F
gText_Rom_25941F: @ 0x0825941F
	.string "\nそう　おもわない？"
	.byte EOS
	.if (. - gText_Rom_25941F) > 0xb
	.error "gText_Rom_25941F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25941F) < 0xb
	.space 0xb - (. - gText_Rom_25941F)
	.endif
