	@ data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.inc:200 SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative
	.globl gText_Rom_20E1CC
gText_Rom_20E1CC: @ 0x0820E1CC
	.string "みごと じゃったぞ!\pまるで わしの わかい ころを\nみている ようじゃわい!{EOS}"
	.if (. - gText_Rom_20E1CC) > 0x28
	.error "gText_Rom_20E1CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E1CC) < 0x28
	.space 0x28 - (. - gText_Rom_20E1CC)
	.endif
