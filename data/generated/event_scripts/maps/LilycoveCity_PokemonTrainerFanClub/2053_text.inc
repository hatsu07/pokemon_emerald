	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:659 LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger
	.globl gText_Rom_20938D
gText_Rom_20938D: @ 0x0820938D
	.string "あなたって ほんとうに\nにんき ものよね……\pつよいし ポケモンにも やさしいし\nいうこと ないわ\pでもね！ わたしは\n{STR_VAR_1}を しんじているの！\p{STR_VAR_1}の ほうが ぜったいに\nつよいに きまってるん だから！{EOS}"
	.if (. - gText_Rom_20938D) > 0x68
	.error "gText_Rom_20938D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20938D) < 0x68
	.space 0x68 - (. - gText_Rom_20938D)
	.endif
