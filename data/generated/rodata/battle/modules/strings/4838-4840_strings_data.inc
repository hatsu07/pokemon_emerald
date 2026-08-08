	@ src/strings.c:375 gText_OTSlash
	.globl gText_Rom_5CA38E
gText_Rom_5CA38E: @ 0x085CA38E
	.string "おや/$"
	.if (. - gText_Rom_5CA38E) > 0x4
	.error "gText_Rom_5CA38E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA38E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA38E)
	.endif
	.globl gUnknown_85CA392
gUnknown_85CA392: @ 0x085CA392

	@ src/strings.c:376 gText_RentalPkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA392
gText_Rom_5CA392: @ 0x085CA392
	.string "レンタルポケモン$"
	.if (. - gText_Rom_5CA392) != 0x9
	.error "gText_Rom_5CA392 must retain its original byte length"
	.endif
