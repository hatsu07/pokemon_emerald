	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:256 RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
	.globl gText_Rom_2033DD
gText_Rom_2033DD: @ 0x082033DD
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pきみの それは……\nストーンバッジ だね\lトレーナーに なりたてに しては やるね\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね$"
	.if (. - gText_Rom_2033DD) > 0xd6
	.error "gText_Rom_2033DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2033DD) < 0xd6
	.space 0xd6 - (. - gText_Rom_2033DD)
	.endif
	@ analyzed canonical ROM range 0x082034B3-0x082034EF
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082034B3: @ 0x082034B3
MapScripts_JP_082034B3: @ 0x082034B3
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082034BE
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_082034BE: @ 0x082034BE
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0006
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_082034C7: @ 0x082034C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082034D5: @ 0x082034D5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082034F0 @ gText_Rom_2034F0
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082034DE: @ 0x082034DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820353E @ gText_Rom_20353E
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082034E7: @ 0x082034E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08203580 @ gText_Rom_203580
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
