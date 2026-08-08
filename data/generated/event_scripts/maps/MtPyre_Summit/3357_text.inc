	@ data/maps/MtPyre_Summit/scripts.inc:586 MtPyre_Summit_Text_MaxieSilence
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_217786
gText_Rom_217786: @ 0x08217786
	.string "マツブサ『{PLAYER}……\p…… …… ……\n…… …… ……$"
	.if (. - gText_Rom_217786) != 0x1c
	.error "gText_Rom_217786 must retain its original byte length"
	.endif
