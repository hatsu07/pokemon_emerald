	@ data/maps/MeteorFalls_1F_2R/scripts.inc:118 MeteorFalls_1F_2R_Text_JohnRegister
	.globl gText_Rom_21338C
gText_Rom_21338C: @ 0x0821338C
	.string "ゲン『わかい トレーナーさん……\nまた きかいが あれば\lわしらと たたかって くれんかのう$"
	.if (. - gText_Rom_21338C) > 0x2f
	.error "gText_Rom_21338C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21338C) < 0x2f
	.space 0x2f - (. - gText_Rom_21338C)
	.endif
