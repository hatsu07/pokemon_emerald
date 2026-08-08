	@ data/maps/MtPyre_Summit/scripts.inc:540 MtPyre_Summit_Text_SuperAncientPokemonTaughtUs
	.globl gText_Rom_21751A
gText_Rom_21751A: @ 0x0821751A
	.string "だいちと うみと おおぞらの けしん……\pそれが ちょうこだいポケモンの\nしょうたい とも いわれておる……\pわしら にんげんや ポケモンに\nいのちが あるように\lこの せかいだって いきている……\pちょうこだいポケモンは わしたちに\nそのことを おしえて くれたのさ……$"
	.if (. - gText_Rom_21751A) > 0x89
	.error "gText_Rom_21751A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21751A) < 0x89
	.space 0x89 - (. - gText_Rom_21751A)
	.endif
