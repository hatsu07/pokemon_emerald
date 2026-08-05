	@ data/maps/MeteorFalls_1F_2R/scripts.inc:78 MeteorFalls_1F_2R_Text_NicolasRegister
	.globl gText_Rom_21322E
gText_Rom_21322E: @ 0x0821322E
	.string "きみの つよさを もっと しりたい\nポケナビに とうろく させてくれ!$"
	.if (. - gText_Rom_21322E) > 0x24
	.error "gText_Rom_21322E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21322E) < 0x24
	.space 0x24 - (. - gText_Rom_21322E)
	.endif
