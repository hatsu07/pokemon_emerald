	@ data/text/trainers.inc:317 Route105_Text_LuisPostBattle
	.globl gText_Rom_25A35C
gText_Rom_25A35C: @ 0x0825A35C
	.string "すなはまに むかって かたてを ふるのが\nおぼれたときの サインだぜ!{EOS}"
	.if (. - gText_Rom_25A35C) > 0x24
	.error "gText_Rom_25A35C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A35C) < 0x24
	.space 0x24 - (. - gText_Rom_25A35C)
	.endif
