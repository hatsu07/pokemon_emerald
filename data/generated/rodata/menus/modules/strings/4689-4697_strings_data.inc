	@ src/strings.c:299 gText_PkmnSnappedOutOfConfusion
	.globl gText_Rom_5C9FE7
gText_Rom_5C9FE7: @ 0x085C9FE7
	.string "{STR_VAR_1}の\nこんらんが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FE7) > 0x10
	.error "gText_Rom_5C9FE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FE7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9FE7)
	.endif
	.globl gUnknown_85C9FF7
gUnknown_85C9FF7: @ 0x085C9FF7

	@ src/strings.c:300 gText_PkmnGotOverInfatuation
	.globl gText_Rom_5C9FF7
gText_Rom_5C9FF7: @ 0x085C9FF7
	.string "{STR_VAR_1}の\nメロメロが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FF7) > 0x10
	.error "gText_Rom_5C9FF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FF7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9FF7)
	.endif
	.globl gUnknown_85CA007
gUnknown_85CA007: @ 0x085CA007

	@ src/strings.c:302 gText_ThrowAwayItem
	.globl gText_Rom_5CA007
gText_Rom_5CA007: @ 0x085CA007
	.string "{STR_VAR_1}を\nすてても よろしいですか$"
	.if (. - gText_Rom_5CA007) > 0x11
	.error "gText_Rom_5CA007 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA007) < 0x11
	.space 0x11 - (. - gText_Rom_5CA007)
	.endif
	.globl gUnknown_85CA018
gUnknown_85CA018: @ 0x085CA018

	@ src/strings.c:303 gText_ItemThrownAway
	.globl gText_Rom_5CA018
gText_Rom_5CA018: @ 0x085CA018
	.string "{STR_VAR_1}を\nすてました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA018) > 0xc
	.error "gText_Rom_5CA018 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA018) < 0xc
	.space 0xc - (. - gText_Rom_5CA018)
	.endif

	@ src/strings.c:304 gText_TeachWhichPokemon2
	.globl gText_Rom_5CA024
gText_Rom_5CA024: @ 0x085CA024
	.string "どのポケモンに おぼえさせますか?$"
	.if (. - gText_Rom_5CA024) > 0x12
	.error "gText_Rom_5CA024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA024) < 0x12
	.space 0x12 - (. - gText_Rom_5CA024)
	.endif
