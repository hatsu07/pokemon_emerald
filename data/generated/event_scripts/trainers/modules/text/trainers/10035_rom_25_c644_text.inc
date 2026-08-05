	@ data/text/trainers.inc:1169 Route113_Text_DillonDefeat (+1 aliases)
	.globl gText_Rom_25C644
gText_Rom_25C644: @ 0x0825C644
	.string "つよいな おまえーっ!$"
	.if (. - gText_Rom_25C644) > 0xc
	.error "gText_Rom_25C644 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C644) < 0xc
	.space 0xc - (. - gText_Rom_25C644)
	.endif
