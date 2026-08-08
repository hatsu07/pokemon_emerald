	@ data/maps/FortreeCity_House2/scripts.inc:44 FortreeCity_House2_Text_HiddenPowersArousedByNature
	.globl gText_Rom_204F53
gText_Rom_204F53: @ 0x08204F53
	.string "ひとも ポケモンも\nしぜんの なかで くらすことで\lもともとの パワーが めざめる……$"
	.if (. - gText_Rom_204F53) > 0x2c
	.error "gText_Rom_204F53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204F53) < 0x2c
	.space 0x2c - (. - gText_Rom_204F53)
	.endif
