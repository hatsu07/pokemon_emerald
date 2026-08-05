	@ asm/mauville_old_man.s:460 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_25941C
gText_Rom_25941C: @ 0x0825941C
	.string "って"
	.byte EOS
	.if (. - gText_Rom_25941C) > 0x3
	.error "gText_Rom_25941C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25941C) < 0x3
	.space 0x3 - (. - gText_Rom_25941C)
	.endif
