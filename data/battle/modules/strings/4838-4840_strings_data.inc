	@ src/strings.c:375 gText_OTSlash
	.globl gText_OTSlash
gText_OTSlash: @ 0x085CA38E
	.string "おや/{EOS}"
	.if (. - gText_OTSlash) > 0x4
	.error "gText_OTSlash may not grow beyond its original slot"
	.endif
	.if (. - gText_OTSlash) < 0x4
	.space 0x4 - (. - gText_OTSlash)
	.endif

	@ src/strings.c:376 gText_RentalPkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_RentalPkmn
gText_RentalPkmn: @ 0x085CA392
	.string "レンタルポケモン{EOS}"
	.if (. - gText_RentalPkmn) != 0x9
	.error "gText_RentalPkmn must retain its original byte length"
	.endif
