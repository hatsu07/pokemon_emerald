	@ data/maps/Route110/scripts.inc:934 Route110_Text_TrainerTipsPrlzSleep
	.globl gText_Rom_1E9F05
gText_Rom_1E9F05: @ 0x081E9F05
	.string "おとくな けいじばん!!\pポケモンを ねむらせたり まひさせると\nあいての じゆうを うばえます!\pこれは ポケモンしょうぶの\nじゅうような テクニック です!{EOS}"
	.if (. - gText_Rom_1E9F05) > 0x51
	.error "gText_Rom_1E9F05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9F05) < 0x51
	.space 0x51 - (. - gText_Rom_1E9F05)
	.endif
