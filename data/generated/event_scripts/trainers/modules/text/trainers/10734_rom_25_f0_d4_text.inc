	@ data/text/trainers.inc:2186 Route120_Text_JenniferDefeat (+1 aliases)
	.globl gText_Rom_25F0D4
gText_Rom_25F0D4: @ 0x0825F0D4
	.string "なかなか かんがえてるのね$"
	.if (. - gText_Rom_25F0D4) > 0xe
	.error "gText_Rom_25F0D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F0D4) < 0xe
	.space 0xe - (. - gText_Rom_25F0D4)
	.endif
