	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:647 LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer
	.globl gText_Rom_20926D
gText_Rom_20926D: @ 0x0820926D
	.string "きみは ほんとうに つよいな……\n{STR_VAR_1} より つよいかも しれない\pでも {STR_VAR_1} には\nぼくが ひつよう なんだ\pだって ぼくが {STR_VAR_1}を\nおうえん しなきゃ\lだれが おうえん するんだ！{EOS}"
	.if (. - gText_Rom_20926D) > 0x5d
	.error "gText_Rom_20926D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20926D) < 0x5d
	.space 0x5d - (. - gText_Rom_20926D)
	.endif
