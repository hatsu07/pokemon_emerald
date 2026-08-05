	@ data/text/trainers.inc:662 Route109_Text_GwenDefeated (+1 aliases)
	.globl gText_Rom_25B0F3
gText_Rom_25B0F3: @ 0x0825B0F3
	.string "つよいでちゅね……$"
	.if (. - gText_Rom_25B0F3) > 0xa
	.error "gText_Rom_25B0F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B0F3) < 0xa
	.space 0xa - (. - gText_Rom_25B0F3)
	.endif
