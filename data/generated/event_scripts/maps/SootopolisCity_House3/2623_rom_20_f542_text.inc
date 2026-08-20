	@ data/maps/SootopolisCity_House3/scripts.inc:31 SootopolisCity_House3_Text_TrainerFanClubWasWild
	.globl gText_Rom_20F542
gText_Rom_20F542: @ 0x0820F542
	.string "ねっしんな ファンは ホウエン いがいの\nちいきからも やってくるの!\pあたしが ミナモの\nトレーナー ファンクラブに いったときも\lとっても すごかったもの!{EOS}"
	.if (. - gText_Rom_20F542) > 0x51
	.error "gText_Rom_20F542 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F542) < 0x51
	.space 0x51 - (. - gText_Rom_20F542)
	.endif
	@ analyzed canonical ROM range 0x0820F593-0x0820F5B8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F593: @ 0x0820F593
	.byte 0x00
.globl EventScript_JP_0820F594
EventScript_JP_0820F594: @ 0x0820F594
	loadword 0x00, gText_Rom_20F5B9
	callstd 0x02
	end
.globl EventScript_JP_0820F59D
EventScript_JP_0820F59D: @ 0x0820F59D
	loadword 0x00, gText_Rom_20F60F
	callstd 0x02
	end
.globl EventScript_JP_0820F5A6
EventScript_JP_0820F5A6: @ 0x0820F5A6
	lock
	faceplayer
	waitse
	playmoncry 0x00B8, 0x0000
	loadword 0x00, gText_Rom_20F64D
	callstd 0x04
	waitmoncry
	release
	end
