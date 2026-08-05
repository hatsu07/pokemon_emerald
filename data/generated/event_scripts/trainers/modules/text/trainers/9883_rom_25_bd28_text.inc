	@ data/text/trainers.inc:956 Route111_Text_DustyPostRematch
	.globl gText_Rom_25BD28
gText_Rom_25BD28: @ 0x0825BD28
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\pうーん 50ねん だった きもする……\nあれ どうだったかな?$"
	.if (. - gText_Rom_25BD28) > 0x44
	.error "gText_Rom_25BD28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD28) < 0x44
	.space 0x44 - (. - gText_Rom_25BD28)
	.endif
