	@ data/maps/SeafloorCavern_Room9/scripts.inc:230 SeafloorCavern_Room9_Text_ArchieDefeat (+1 aliases)
	.globl gText_Rom_218D63
gText_Rom_218D63: @ 0x08218D63
	.string "なにっ!?\nおまえ ごときに おれが……?{EOS}"
	.if (. - gText_Rom_218D63) > 0x16
	.error "gText_Rom_218D63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218D63) < 0x16
	.space 0x16 - (. - gText_Rom_218D63)
	.endif
