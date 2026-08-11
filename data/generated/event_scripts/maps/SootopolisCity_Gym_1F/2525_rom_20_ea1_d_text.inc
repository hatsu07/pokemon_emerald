	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:227 SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_20EA1D
gText_Rom_20EA1D: @ 0x0820EA1D
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\nなんどでも ユーの あいてを……\p……アハン?\nユーは たたかえる ポケモンを\l1ひきしか もっていない ようですね\pねがわくば 2ひき いじょうの\nポケモンを もってきて プリーズ$"
	.if (. - gText_Rom_20EA1D) > 0xa9
	.error "gText_Rom_20EA1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EA1D) < 0xa9
	.space 0xa9 - (. - gText_Rom_20EA1D)
	.endif
	@ analyzed canonical ROM range 0x0820EAC6-0x0820EBAC
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_0820EAC7: @ 0x0820EAC7
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0265
	.2byte 0x0000
	.4byte 0x0820EBAD @ gText_Rom_20EBAD
	.4byte 0x0820EBD7 @ gText_Rom_20EBD7
	loadword 0x00, gText_Rom_20EBE4
	callstd 0x06
	end
EventScript_JP_0820EADE: @ 0x0820EADE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0266
	.2byte 0x0000
	.4byte 0x0820EC01 @ gText_Rom_20EC01
	.4byte 0x0820EC2B @ gText_Rom_20EC2B
	loadword 0x00, gText_Rom_20EC47
	callstd 0x06
	end
EventScript_JP_0820EAF5: @ 0x0820EAF5
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0076
	.2byte 0x0000
	.4byte 0x0820EF83 @ gText_Rom_20EF83
	.4byte 0x0820EF9B @ gText_Rom_20EF9B
	loadword 0x00, gText_Rom_20EFB2
	callstd 0x06
	end
EventScript_JP_0820EB0C: @ 0x0820EB0C
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0080
	.2byte 0x0000
	.4byte 0x0820ECF5 @ gText_Rom_20ECF5
	.4byte 0x0820ED1B @ gText_Rom_20ED1B
	loadword 0x00, gText_Rom_20ED25
	callstd 0x06
	end
EventScript_JP_0820EB23: @ 0x0820EB23
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0081
	.2byte 0x0000
	.4byte 0x0820ED5F @ gText_Rom_20ED5F
	.4byte 0x0820ED8D @ gText_Rom_20ED8D
	loadword 0x00, gText_Rom_20ED9C
	callstd 0x06
	end
EventScript_JP_0820EB3A: @ 0x0820EB3A
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0082
	.2byte 0x0000
	.4byte 0x0820EDE1 @ gText_Rom_20EDE1
	.4byte 0x0820EE11 @ gText_Rom_20EE11
	loadword 0x00, gText_Rom_20EE1C
	callstd 0x06
	end
EventScript_JP_0820EB51: @ 0x0820EB51
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0083
	.2byte 0x0000
	.4byte 0x0820EE44 @ gText_Rom_20EE44
	.4byte 0x0820EE74 @ gText_Rom_20EE74
	loadword 0x00, gText_Rom_20EE7C
	callstd 0x06
	end
EventScript_JP_0820EB68: @ 0x0820EB68
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x012D
	.2byte 0x0000
	.4byte 0x0820EEA4 @ gText_Rom_20EEA4
	.4byte 0x0820EEC9 @ gText_Rom_20EEC9
	loadword 0x00, gText_Rom_20EECD
	callstd 0x06
	end
EventScript_JP_0820EB7F: @ 0x0820EB7F
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x01F6
	.2byte 0x0000
	.4byte 0x0820EEE8 @ gText_Rom_20EEE8
	.4byte 0x0820EF0E @ gText_Rom_20EF0E
	loadword 0x00, gText_Rom_20EF29
	callstd 0x06
	end
EventScript_JP_0820EB96: @ 0x0820EB96
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0073
	.2byte 0x0000
	.4byte 0x0820EC6E @ gText_Rom_20EC6E
	.4byte 0x0820ECA7 @ gText_Rom_20ECA7
	loadword 0x00, gText_Rom_20ECC1
	callstd 0x06
	end
