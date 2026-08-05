	@ src/use_pokeblock.c:163 sText_NatureSlash
	.globl gText_Rom_5CB7A2
gText_Rom_5CB7A2: @ 0x085CB7A2
	.string "せいかく/$"
	.if (. - gText_Rom_5CB7A2) > 0x6
	.error "gText_Rom_5CB7A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7A2) < 0x6
	.space 0x6 - (. - gText_Rom_5CB7A2)
	.endif
