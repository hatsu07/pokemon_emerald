	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:227 SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_20EA1D
gText_Rom_20EA1D: @ 0x0820EA1D
	.string "アダン『いつもの サイレンス……\nしずけさを とりもどした このジムに\pまたもや わかき タイフーンが\nうでだめしに あらわれましたね!\pいいですとも!\nなんどでも ユーの あいてを……\p……アハン?\nユーは たたかえる ポケモンを\l1ひきしか もっていない ようですね\pねがわくば 2ひき いじょうの\nポケモンを もってきて プリーズ{EOS}"
	.if (. - gText_Rom_20EA1D) > 0xa9
	.error "gText_Rom_20EA1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EA1D) < 0xa9
	.space 0xa9 - (. - gText_Rom_20EA1D)
	.endif
	@ analyzed canonical ROM range 0x0820EAC6-0x0820EBAC
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_0820EAC7
EventScript_JP_0820EAC7: @ 0x0820EAC7
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0265, 0x0000, gText_Rom_20EBAD, gText_Rom_20EBD7
	loadword 0x00, gText_Rom_20EBE4
	callstd 0x06
	end
.globl EventScript_JP_0820EADE
EventScript_JP_0820EADE: @ 0x0820EADE
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0266, 0x0000, gText_Rom_20EC01, gText_Rom_20EC2B
	loadword 0x00, gText_Rom_20EC47
	callstd 0x06
	end
.globl EventScript_JP_0820EAF5
EventScript_JP_0820EAF5: @ 0x0820EAF5
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0076, 0x0000, gText_Rom_20EF83, gText_Rom_20EF9B
	loadword 0x00, gText_Rom_20EFB2
	callstd 0x06
	end
.globl EventScript_JP_0820EB0C
EventScript_JP_0820EB0C: @ 0x0820EB0C
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0080, 0x0000, gText_Rom_20ECF5, gText_Rom_20ED1B
	loadword 0x00, gText_Rom_20ED25
	callstd 0x06
	end
.globl EventScript_JP_0820EB23
EventScript_JP_0820EB23: @ 0x0820EB23
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0081, 0x0000, gText_Rom_20ED5F, gText_Rom_20ED8D
	loadword 0x00, gText_Rom_20ED9C
	callstd 0x06
	end
.globl EventScript_JP_0820EB3A
EventScript_JP_0820EB3A: @ 0x0820EB3A
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0082, 0x0000, gText_Rom_20EDE1, gText_Rom_20EE11
	loadword 0x00, gText_Rom_20EE1C
	callstd 0x06
	end
.globl EventScript_JP_0820EB51
EventScript_JP_0820EB51: @ 0x0820EB51
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0083, 0x0000, gText_Rom_20EE44, gText_Rom_20EE74
	loadword 0x00, gText_Rom_20EE7C
	callstd 0x06
	end
.globl EventScript_JP_0820EB68
EventScript_JP_0820EB68: @ 0x0820EB68
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x012D, 0x0000, gText_Rom_20EEA4, gText_Rom_20EEC9
	loadword 0x00, gText_Rom_20EECD
	callstd 0x06
	end
.globl EventScript_JP_0820EB7F
EventScript_JP_0820EB7F: @ 0x0820EB7F
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x01F6, 0x0000, gText_Rom_20EEE8, gText_Rom_20EF0E
	loadword 0x00, gText_Rom_20EF29
	callstd 0x06
	end
.globl EventScript_JP_0820EB96
EventScript_JP_0820EB96: @ 0x0820EB96
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0073, 0x0000, gText_Rom_20EC6E, gText_Rom_20ECA7
	loadword 0x00, gText_Rom_20ECC1
	callstd 0x06
	end
