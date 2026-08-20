	@ data/maps/RustboroCity/scripts.inc:1252 RustboroCity_Text_TrainersSchoolSign
	.globl gText_Rom_1DFBDC
gText_Rom_1DFBDC: @ 0x081DFBDC
	.string "「ポケモン トレーナーズ スクール」\nポケモンのことなら なんでも おしえます!{EOS}"
	.if (. - gText_Rom_1DFBDC) > 0x29
	.error "gText_Rom_1DFBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFBDC) < 0x29
	.space 0x29 - (. - gText_Rom_1DFBDC)
	.endif
