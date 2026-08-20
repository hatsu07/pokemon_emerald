	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:162 MossdeepCity_StevensHouse_Text_ObtainedBeldum
	.globl gText_Rom_20CB39
gText_Rom_20CB39: @ 0x0820CB39
	.string "{PLAYER}は\nダンバルを てにいれた!{EOS}"
	.if (. - gText_Rom_20CB39) > 0x11
	.error "gText_Rom_20CB39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB39) < 0x11
	.space 0x11 - (. - gText_Rom_20CB39)
	.endif
