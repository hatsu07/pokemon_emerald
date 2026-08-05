	@ src/strings.c:349 gText_PkmnCantParticipate
	.globl gText_Rom_5CA1FB
gText_Rom_5CA1FB: @ 0x085CA1FB
	.string "その ポケモンは さんか できません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA1FB) > 0x15
	.error "gText_Rom_5CA1FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1FB) < 0x15
	.space 0x15 - (. - gText_Rom_5CA1FB)
	.endif
