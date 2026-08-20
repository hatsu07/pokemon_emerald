	@ data/text/trainers.inc:2084 Route119_Text_ChrisPostBattle
	.globl gText_Rom_25EC89
gText_Rom_25EC89: @ 0x0825EC89
	.string "なみのりを つかう!\pポケモンの せなかに のって\nつりを たのしむ!\pなんて ゆうがな ひととき だろう!{EOS}"
	.if (. - gText_Rom_25EC89) > 0x37
	.error "gText_Rom_25EC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EC89) < 0x37
	.space 0x37 - (. - gText_Rom_25EC89)
	.endif
