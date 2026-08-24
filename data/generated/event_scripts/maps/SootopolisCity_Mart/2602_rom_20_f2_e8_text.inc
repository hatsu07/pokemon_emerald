	@ data/maps/SootopolisCity_Mart/scripts.inc:55 SootopolisCity_Mart_Text_PPUpIsGreat
	.globl SootopolisCity_Mart_Text_PPUpIsGreat
SootopolisCity_Mart_Text_PPUpIsGreat: @ 0x0820F23A
	.string "ポイントアップは すごいぞ!\pなんたって ポケモンの\nパワーポイントを ふやせるからな!{EOS}"
	.if (. - SootopolisCity_Mart_Text_PPUpIsGreat) > 0x2d
	.error "SootopolisCity_Mart_Text_PPUpIsGreat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Mart_Text_PPUpIsGreat) < 0x2d
	.space 0x2d - (. - SootopolisCity_Mart_Text_PPUpIsGreat)
	.endif
	@ data/maps/SootopolisCity_Mart/scripts.inc:58 SootopolisCity_Mart_Text_TooScaryOutside
	.globl SootopolisCity_Mart_Text_TooScaryOutside
SootopolisCity_Mart_Text_TooScaryOutside: @ 0x0820F267
	.string "いったい なにが おこってるんだ!?\pものすごく きになる けど\nこわくて そとに でられないよ!{EOS}"
	.if (. - SootopolisCity_Mart_Text_TooScaryOutside) > 0x32
	.error "SootopolisCity_Mart_Text_TooScaryOutside may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Mart_Text_TooScaryOutside) < 0x32
	.space 0x32 - (. - SootopolisCity_Mart_Text_TooScaryOutside)
	.endif
	@ data/maps/SootopolisCity_Mart/scripts.inc:61 SootopolisCity_Mart_Text_FullRestoreItemOfDreams
	.globl SootopolisCity_Mart_Text_FullRestoreItemOfDreams
SootopolisCity_Mart_Text_FullRestoreItemOfDreams: @ 0x0820F299
	.string "かいふくのくすり ごぞんじ ですか?\pポケモンの たいりょく ぜんかい!\nじょうたい いじょうも すべて かいふく!\lまさに ゆめのような どうぐ なのです{EOS}"
	.if (. - SootopolisCity_Mart_Text_FullRestoreItemOfDreams) > 0x4f
	.error "SootopolisCity_Mart_Text_FullRestoreItemOfDreams may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Mart_Text_FullRestoreItemOfDreams) < 0x4f
	.space 0x4f - (. - SootopolisCity_Mart_Text_FullRestoreItemOfDreams)
	.endif
	@ data/maps/SootopolisCity_Mart/scripts.inc:64 SootopolisCity_Mart_Text_DidSomethingAwaken
	.globl SootopolisCity_Mart_Text_DidSomethingAwaken
SootopolisCity_Mart_Text_DidSomethingAwaken: @ 0x0820F2E8
	.string "この てんき……\nなにかが めざめたのか……?{EOS}"
	.if (. - SootopolisCity_Mart_Text_DidSomethingAwaken) > 0x18
	.error "SootopolisCity_Mart_Text_DidSomethingAwaken may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Mart_Text_DidSomethingAwaken) < 0x18
	.space 0x18 - (. - SootopolisCity_Mart_Text_DidSomethingAwaken)
	.endif
	@ analyzed canonical ROM range 0x0820F300-0x0820F354
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820F300: @ 0x0820F300
	.byte 0x00
.globl EventScript_JP_0820F301
EventScript_JP_0820F301: @ 0x0820F301
	lock
	faceplayer
	checkflag 0x0079
	goto_if 0x01, EventScript_JP_0820F338
	loadword 0x00, gText_Rom_20F355
	callstd 0x04
	setorcopyvar 0x8000, 0x013F
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x0079
	loadword 0x00, SootopolisCity_House1_Text_ExplainBrickBreak
	callstd 0x04
	release
	end
EventScript_0820F338: @ 0x0820F338
EventScript_JP_0820F338: @ 0x0820F338
	loadword 0x00, SootopolisCity_House1_Text_ExplainBrickBreak
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F342
EventScript_JP_0820F342: @ 0x0820F342
	lock
	faceplayer
	waitse
	playmoncry 0x013D, 0x0000
	loadword 0x00, SootopolisCity_House1_Text_Kecleon
	callstd 0x04
	waitmoncry
	release
	end
