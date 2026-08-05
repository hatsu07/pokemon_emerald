	@ data/maps/SlateportCity/scripts.inc:1024 SlateportCity_Text_BossIsBrilliant
	.globl gText_Rom_1DCD8E
gText_Rom_1DCD8E: @ 0x081DCD8E
	.string "リーダーほど あたまの いい ひとが\nいまさら はくぶつかんに\lなんの ようじが あるんだ……?$"
	.if (. - gText_Rom_1DCD8E) > 0x31
	.error "gText_Rom_1DCD8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCD8E) < 0x31
	.space 0x31 - (. - gText_Rom_1DCD8E)
	.endif
