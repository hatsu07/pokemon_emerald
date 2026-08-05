	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:200 SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative
	.globl gText_Rom_2100DA
gText_Rom_2100DA: @ 0x082100DA
	.string "みごと じゃったぞ!\pまるで わしの わかい ころを\nみている ようじゃわい!$"
	.if (. - gText_Rom_2100DA) > 0x28
	.error "gText_Rom_2100DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2100DA) < 0x28
	.space 0x28 - (. - gText_Rom_2100DA)
	.endif
	@ Replaced baserom.gba range: offset=0x210102, size=0x3
	.byte 0xFD, 0x02, 0xFF
