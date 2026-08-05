	@ data/text/trainers.inc:2729 Route125_Text_TanyaDefeat (+1 aliases)
	.globl gText_Rom_2607DD
gText_Rom_2607DD: @ 0x082607DD
	.string "あんた つよすぎ!$"
	.if (. - gText_Rom_2607DD) > 0xa
	.error "gText_Rom_2607DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2607DD) < 0xa
	.space 0xa - (. - gText_Rom_2607DD)
	.endif
