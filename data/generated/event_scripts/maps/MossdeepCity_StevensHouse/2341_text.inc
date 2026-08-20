	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:166 MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon
	.globl gText_Rom_20CB4A
gText_Rom_20CB4A: @ 0x0820CB4A
	.string "これいじょう ポケモンを もてない!{EOS}"
	.if (. - gText_Rom_20CB4A) > 0x13
	.error "gText_Rom_20CB4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB4A) < 0x13
	.space 0x13 - (. - gText_Rom_20CB4A)
	.endif
