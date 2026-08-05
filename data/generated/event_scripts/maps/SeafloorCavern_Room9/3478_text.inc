	@ data/maps/SeafloorCavern_Room9/scripts.inc:218 SeafloorCavern_Room9_Text_ArchieHoldItRightThere
	.globl gText_Rom_218C94
gText_Rom_218C94: @ 0x08218C94
	.string "アオギリ『……まつんだ!$"
	.if (. - gText_Rom_218C94) > 0xd
	.error "gText_Rom_218C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218C94) < 0xd
	.space 0xd - (. - gText_Rom_218C94)
	.endif
