
	@ asm/party_menu.s:13150 sub_081B6468
	.globl gText_Rom_5C9FC1
gText_Rom_5C9FC1: @ 0x085C9FC1
	.string "{0xFD}{0x02}は　ちょっと　なついた！\n{0xFD}{0x03}の　きそポイントは　もうさがらない！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9FC1) > 0x26
	.error "gText_Rom_5C9FC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FC1) < 0x26
	.space 0x26 - (. - gText_Rom_5C9FC1)
	.endif

	@ src/strings.c:299 gText_PkmnSnappedOutOfConfusion
	.globl gText_PkmnSnappedOutOfConfusion
gText_PkmnSnappedOutOfConfusion: @ 0x085C9FE7
	.string "{STR_VAR_1}の\nこんらんが とけた{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnSnappedOutOfConfusion) > 0x10
	.error "gText_PkmnSnappedOutOfConfusion may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnSnappedOutOfConfusion) < 0x10
	.space 0x10 - (. - gText_PkmnSnappedOutOfConfusion)
	.endif

	@ src/strings.c:300 gText_PkmnGotOverInfatuation
	.globl gText_PkmnGotOverInfatuation
gText_PkmnGotOverInfatuation: @ 0x085C9FF7
	.string "{STR_VAR_1}の\nメロメロが とけた{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnGotOverInfatuation) > 0x10
	.error "gText_PkmnGotOverInfatuation may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnGotOverInfatuation) < 0x10
	.space 0x10 - (. - gText_PkmnGotOverInfatuation)
	.endif

	@ src/strings.c:302 gText_ThrowAwayItem
	.globl gText_ThrowAwayItem
gText_ThrowAwayItem: @ 0x085CA007
	.string "{STR_VAR_1}を\nすてても よろしいですか{EOS}"
	.if (. - gText_ThrowAwayItem) > 0x11
	.error "gText_ThrowAwayItem may not grow beyond its original slot"
	.endif
	.if (. - gText_ThrowAwayItem) < 0x11
	.space 0x11 - (. - gText_ThrowAwayItem)
	.endif

	@ src/strings.c:303 gText_ItemThrownAway
	.globl gText_ItemThrownAway
gText_ItemThrownAway: @ 0x085CA018
	.string "{STR_VAR_1}を\nすてました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_ItemThrownAway) > 0xc
	.error "gText_ItemThrownAway may not grow beyond its original slot"
	.endif
	.if (. - gText_ItemThrownAway) < 0xc
	.space 0xc - (. - gText_ItemThrownAway)
	.endif

	@ src/strings.c:304 gText_TeachWhichPokemon2
	.globl gText_TeachWhichPokemon2
gText_TeachWhichPokemon2: @ 0x085CA024
	.string "どのポケモンに おぼえさせますか?{EOS}"
	.if (. - gText_TeachWhichPokemon2) > 0x12
	.error "gText_TeachWhichPokemon2 may not grow beyond its original slot"
	.endif
	.if (. - gText_TeachWhichPokemon2) < 0x12
	.space 0x12 - (. - gText_TeachWhichPokemon2)
	.endif
