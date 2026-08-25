	@ data/maps/RustboroCity_House2/scripts.inc:12 RustboroCity_House2_Text_TrainerSchoolExcellent
	.globl RustboroCity_House2_Text_TrainerSchoolExcellent
RustboroCity_House2_Text_TrainerSchoolExcellent: @ 0x08203F28
	.string "トレーナーズ スクールは いいわよ!\pあそこで ポケモンの べんきょう すれば\nジムリーダーに だって なれますもの!{EOS}"
	.if (. - RustboroCity_House2_Text_TrainerSchoolExcellent) > 0x3c
	.error "RustboroCity_House2_Text_TrainerSchoolExcellent may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House2_Text_TrainerSchoolExcellent) < 0x3c
	.space 0x3c - (. - RustboroCity_House2_Text_TrainerSchoolExcellent)
	.endif
	@ data/maps/RustboroCity_House2/scripts.inc:15 RustboroCity_House2_Text_RoxanneKnowsALot
	.globl RustboroCity_House2_Text_RoxanneKnowsALot
RustboroCity_House2_Text_RoxanneKnowsALot: @ 0x08203F64
	.string "ジムリーダーの ツツジ ねーちゃん\nすっごい ポケモン くわしくて\lすっごい ポケモン つよいんだから!{EOS}"
	.if (. - RustboroCity_House2_Text_RoxanneKnowsALot) > 0x35
	.error "RustboroCity_House2_Text_RoxanneKnowsALot may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_House2_Text_RoxanneKnowsALot) < 0x35
	.space 0x35 - (. - RustboroCity_House2_Text_RoxanneKnowsALot)
	.endif
	@ analyzed canonical ROM range 0x08203F99-0x08203FB5
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203F99: @ 0x08203F99
	.byte 0x00
.globl EventScript_JP_08203F9A
EventScript_JP_08203F9A: @ 0x08203F9A
	loadword 0x00, RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere
	callstd 0x02
	end
.globl EventScript_JP_08203FA3
EventScript_JP_08203FA3: @ 0x08203FA3
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, RustboroCity_Flat2_1F_Text_Skitty
	callstd 0x04
	waitmoncry
	release
	end
