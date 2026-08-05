	@ data/text/trainers.inc:944 Route111_Text_DustyPostBattle
	.globl gText_Rom_25BC7D
gText_Rom_25BC7D: @ 0x0825BC7D
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\nあれ どうだったかな?$"
	.if (. - gText_Rom_25BC7D) > 0x30
	.error "gText_Rom_25BC7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BC7D) < 0x30
	.space 0x30 - (. - gText_Rom_25BC7D)
	.endif
