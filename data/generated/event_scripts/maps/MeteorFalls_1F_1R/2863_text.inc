	@ data/maps/MeteorFalls_1F_1R/scripts.inc:245 MeteorFalls_1F_1R_Text_HoldItRightThereMagma
	.globl gText_Rom_212DC3
gText_Rom_212DC3: @ 0x08212DC3
	.string "まてっ! マグマだん!\pせかいを おまえらの おもいどおりに\nできるなんて おおまちがいだ!{EOS}"
	.if (. - gText_Rom_212DC3) > 0x2f
	.error "gText_Rom_212DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212DC3) < 0x2f
	.space 0x2f - (. - gText_Rom_212DC3)
	.endif
