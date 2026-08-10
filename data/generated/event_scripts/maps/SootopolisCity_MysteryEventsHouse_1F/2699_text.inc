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
	@ analyzed canonical ROM range 0x08210102-0x08210104
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08210102: @ 0x08210102
EventText_JP_08210102: @ 0x08210102
	.string "{STR_VAR_1}$"
