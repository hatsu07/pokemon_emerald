	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:194 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries
	.globl gText_Rom_205F6E
gText_Rom_205F6E: @ 0x08205F6E
	.string "おいしそうな きのみが えがかれている\nおなかが すいて きそう!{EOS}"
	.if (. - gText_Rom_205F6E) > 0x22
	.error "gText_Rom_205F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205F6E) < 0x22
	.space 0x22 - (. - gText_Rom_205F6E)
	.endif
