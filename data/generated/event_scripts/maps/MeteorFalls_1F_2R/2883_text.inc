	@ data/maps/MeteorFalls_1F_2R/scripts.inc:73 MeteorFalls_1F_2R_Text_NicolasPostBattle
	.globl gText_Rom_2131FA
gText_Rom_2131FA: @ 0x082131FA
	.string "まだまだ みちは ながく けわしい\pオレと オレの ポケモンが\nいちばんに なれるのは いつだろう……{EOS}"
	.if (. - gText_Rom_2131FA) > 0x34
	.error "gText_Rom_2131FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2131FA) < 0x34
	.space 0x34 - (. - gText_Rom_2131FA)
	.endif
