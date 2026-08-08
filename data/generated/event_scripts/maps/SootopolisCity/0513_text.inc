	@ data/maps/SootopolisCity/scripts.inc:1408 SootopolisCity_Text_WonderWhatWorldIsLike
	.globl gText_Rom_1E2DD3
gText_Rom_1E2DD3: @ 0x081E2DD3
	.string "ぼく…… まだ いちども このまちから\nそとに でたこと ないんだ\pあの まあるい そらの むこうには\nどんな せかいが あるのかな?$"
	.if (. - gText_Rom_1E2DD3) > 0x44
	.error "gText_Rom_1E2DD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2DD3) < 0x44
	.space 0x44 - (. - gText_Rom_1E2DD3)
	.endif
