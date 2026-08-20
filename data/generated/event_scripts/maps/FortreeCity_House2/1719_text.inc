	@ data/maps/FortreeCity_House2/scripts.inc:59 FortreeCity_House2_Text_ExplainHiddenPower
	.globl gText_Rom_20509A
gText_Rom_20509A: @ 0x0820509A
	.string "めざめるパワーは ポケモンによって\nいりょくが かわる わざ なんじゃよ!{EOS}"
	.if (. - gText_Rom_20509A) > 0x26
	.error "gText_Rom_20509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20509A) < 0x26
	.space 0x26 - (. - gText_Rom_20509A)
	.endif
