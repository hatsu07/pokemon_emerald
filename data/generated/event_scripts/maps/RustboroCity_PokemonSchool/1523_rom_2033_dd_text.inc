	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:256 RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
	.globl gText_Rom_2033DD
gText_Rom_2033DD: @ 0x082033DD
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pきみの それは……\nストーンバッジ だね\lトレーナーに なりたてに しては やるね\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね{EOS}"
	.if (. - gText_Rom_2033DD) > 0xd6
	.error "gText_Rom_2033DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2033DD) < 0xd6
	.space 0xd6 - (. - gText_Rom_2033DD)
	.endif
	@ analyzed canonical ROM range 0x082034B3-0x082034EF
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_RustboroCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x082034B3
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082034BE
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_082034BE: @ 0x082034BE
	setrespawn 0x0006
	call 0x08242978
	end
.globl EventScript_JP_082034C7
EventScript_JP_082034C7: @ 0x082034C7
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_082034D5
EventScript_JP_082034D5: @ 0x082034D5
	loadword 0x00, gText_Rom_2034F0
	callstd 0x02
	end
.globl EventScript_JP_082034DE
EventScript_JP_082034DE: @ 0x082034DE
	loadword 0x00, gText_Rom_20353E
	callstd 0x02
	end
.globl EventScript_JP_082034E7
EventScript_JP_082034E7: @ 0x082034E7
	loadword 0x00, gText_Rom_203580
	callstd 0x02
	end
