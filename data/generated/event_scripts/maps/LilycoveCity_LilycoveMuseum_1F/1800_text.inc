	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:185 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205EFB
gText_Rom_205EFB: @ 0x08205EFB
	.string "ひざに ポケモンを のせて ほほえむ\nうつくしい じょせいが えがかれている$"
	.if (. - gText_Rom_205EFB) != 0x27
	.error "gText_Rom_205EFB must retain its original byte length"
	.endif
