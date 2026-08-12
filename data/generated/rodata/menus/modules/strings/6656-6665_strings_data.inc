	@ src/strings.c:1013 gText_PkmnForSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DC113
gText_Rom_5DC113: @ 0x085DC113
	.string "てばなすポケモン$"
	.if (. - gText_Rom_5DC113) != 0x9
	.error "gText_Rom_5DC113 must retain its original byte length"
	.endif
	.globl gText_Rom_5DC117
	.set gText_Rom_5DC117, gText_Rom_5DC113 + 0x4

	@ src/strings.c:1014 gText_Cancel3
	.globl gText_Rom_5DC11C
gText_Rom_5DC11C: @ 0x085DC11C
	.string "ちゅうし$"
	.if (. - gText_Rom_5DC11C) > 0x5
	.error "gText_Rom_5DC11C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC11C) < 0x5
	.space 0x5 - (. - gText_Rom_5DC11C)
	.endif

	@ src/strings.c:1007 gText_Swap (+1 aliases)
	.globl gText_Rom_5DC121
gText_Rom_5DC121: @ 0x085DC121
	.string "てばなす$"
	.if (. - gText_Rom_5DC121) > 0x5
	.error "gText_Rom_5DC121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC121) < 0x5
	.space 0x5 - (. - gText_Rom_5DC121)
	.endif

	@ src/strings.c:1016 gText_Accept (+1 aliases)
	.globl gText_Rom_5DC126
gText_Rom_5DC126: @ 0x085DC126
	.string "うけとる$"
	.if (. - gText_Rom_5DC126) > 0x5
	.error "gText_Rom_5DC126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC126) < 0x5
	.space 0x5 - (. - gText_Rom_5DC126)
	.endif

	@ src/strings.c:1017 gText_AcceptThisPkmn
	.globl gText_Rom_5DC12B
gText_Rom_5DC12B: @ 0x085DC12B
	.string "このポケモンを うけとりますか?$"
	.if (. - gText_Rom_5DC12B) > 0x11
	.error "gText_Rom_5DC12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC12B) < 0x11
	.space 0x11 - (. - gText_Rom_5DC12B)
	.endif
