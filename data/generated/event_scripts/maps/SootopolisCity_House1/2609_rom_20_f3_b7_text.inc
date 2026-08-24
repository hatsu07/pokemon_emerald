	@ field-script:0x20F30E FieldScriptText_20F355
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20F355
gText_Rom_20F355: @ 0x0820F355
	.string "うむう……\nルネシティに　こもること　30ねん……\pわしが　あみだした　ひっさつの　わざマシン！\nおまえに　ゆずろう！{EOS}"
	.if (. - gText_Rom_20F355) != 0x3c
	.error "gText_Rom_20F355 must retain its original byte length"
	.endif
	.globl gText_Rom_20F35B
	.set gText_Rom_20F35B, gText_Rom_20F355 + 0x6
	@ data/maps/SootopolisCity_House1/scripts.inc:34 SootopolisCity_House1_Text_ExplainBrickBreak
	.globl SootopolisCity_House1_Text_ExplainBrickBreak
SootopolisCity_House1_Text_ExplainBrickBreak: @ 0x0820F391
	.string "わざマシン31は かわらわり!\nせつめい するのも おそろしい わざよ……{EOS}"
	.if (. - SootopolisCity_House1_Text_ExplainBrickBreak) > 0x26
	.error "SootopolisCity_House1_Text_ExplainBrickBreak may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House1_Text_ExplainBrickBreak) < 0x26
	.space 0x26 - (. - SootopolisCity_House1_Text_ExplainBrickBreak)
	.endif
	@ data/maps/SootopolisCity_House1/scripts.inc:37 SootopolisCity_House1_Text_Kecleon
	.globl SootopolisCity_House1_Text_Kecleon
SootopolisCity_House1_Text_Kecleon: @ 0x0820F3B7
	.string "カクレオン『ぷー ぷひゃあー{EOS}"
	.if (. - SootopolisCity_House1_Text_Kecleon) > 0xf
	.error "SootopolisCity_House1_Text_Kecleon may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_House1_Text_Kecleon) < 0xf
	.space 0xf - (. - SootopolisCity_House1_Text_Kecleon)
	.endif
	@ analyzed canonical ROM range 0x0820F3C6-0x0820F3FA
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F3C6: @ 0x0820F3C6
	.byte 0x00
.globl EventScript_JP_0820F3C7
EventScript_JP_0820F3C7: @ 0x0820F3C7
	lock
	faceplayer
	loadword 0x00, SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0820F3E9
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0820F3F2
	release
	end
EventScript_0820F3E9: @ 0x0820F3E9
EventScript_JP_0820F3E9: @ 0x0820F3E9
	loadword 0x00, SootopolisCity_House2_Text_YesTwoOrbsSideBySide
	callstd 0x04
	return
EventScript_0820F3F2: @ 0x0820F3F2
EventScript_JP_0820F3F2: @ 0x0820F3F2
	loadword 0x00, SootopolisCity_House2_Text_OughtToVisitAndSee
	callstd 0x04
	return
