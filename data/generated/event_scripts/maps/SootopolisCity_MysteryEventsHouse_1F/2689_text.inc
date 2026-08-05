	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:177 SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3
	.globl gText_Rom_21001A
gText_Rom_21001A: @ 0x0821001A
	.string "おお そうか そうか!\pじゃが この いえは\nあんまり がんじょう じゃないから\pせめて 3たい3の\nしょうぶに して くれんかのう?$"
	.if (. - gText_Rom_21001A) > 0x44
	.error "gText_Rom_21001A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21001A) < 0x44
	.space 0x44 - (. - gText_Rom_21001A)
	.endif
