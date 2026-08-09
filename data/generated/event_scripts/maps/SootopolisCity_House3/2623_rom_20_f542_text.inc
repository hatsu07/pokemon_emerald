	@ data/maps/SootopolisCity_House3/scripts.inc:31 SootopolisCity_House3_Text_TrainerFanClubWasWild
	.globl gText_Rom_20F542
gText_Rom_20F542: @ 0x0820F542
	.string "ねっしんな ファンは ホウエン いがいの\nちいきからも やってくるの!\pあたしが ミナモの\nトレーナー ファンクラブに いったときも\lとっても すごかったもの!$"
	.if (. - gText_Rom_20F542) > 0x51
	.error "gText_Rom_20F542 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F542) < 0x51
	.space 0x51 - (. - gText_Rom_20F542)
	.endif
	@ analyzed canonical ROM range 0x0820F593-0x0820F5B8
sAnalyzedEventData_0820F593: @ 0x0820F593
EventScript_0820F593: @ 0x0820F593
	nop
	loadword 0x00, gText_Rom_20F5B9
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0x0F, 0xF6, 0x20, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0xB8, 0x00, 0x00
	.byte 0x00, 0x0F, 0x00, 0x4D, 0xF6, 0x20, 0x08, 0x09, 0x04, 0xC5, 0x6C, 0x02
