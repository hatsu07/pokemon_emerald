	@ data/text/apprentice.inc:721 gText_ApprenticeWhichMove8
	.globl gText_Rom_272052
gText_Rom_272052: @ 0x08272052
	.string "キャァァ {PLAYER}さんが いるーっ!\nかっ かんげきっ……!\lこまった ときは {PLAYER}さんですっ!\pほんじつは わざの オススメを\nおしえて ほしいのですっ!\lわたしの {STR_VAR_1}の わざを\lきめて くださいっ!\pどっちが いいですかっ?\n{STR_VAR_2}と {STR_VAR_3}!$"
	.if (. - gText_Rom_272052) > 0x7a
	.error "gText_Rom_272052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272052) < 0x7a
	.space 0x7a - (. - gText_Rom_272052)
	.endif
