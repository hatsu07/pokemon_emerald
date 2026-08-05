	@ data/maps/SeafloorCavern_Room9/scripts.inc:242 SeafloorCavern_Room9_Text_ArchieAMessageFromOutside
	.globl gText_Rom_218E28
gText_Rom_218E28: @ 0x08218E28
	.string "アオギリ『そとに いる\nだんいん からの れんらくか$"
	.if (. - gText_Rom_218E28) > 0x1b
	.error "gText_Rom_218E28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218E28) < 0x1b
	.space 0x1b - (. - gText_Rom_218E28)
	.endif
