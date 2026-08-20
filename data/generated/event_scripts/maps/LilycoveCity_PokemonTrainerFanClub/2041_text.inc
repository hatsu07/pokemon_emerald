	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:641 LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner
	.globl gText_Rom_2091CB
gText_Rom_2091CB: @ 0x082091CB
	.string "まあ ほかの やつの\nことなんて きにするなよ\lぼくが ついて いるんだ！\pきみは しんぱい しないで いつもどおり\nたたかって いれば いいんだよ{EOS}"
	.if (. - gText_Rom_2091CB) > 0x4b
	.error "gText_Rom_2091CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2091CB) < 0x4b
	.space 0x4b - (. - gText_Rom_2091CB)
	.endif
