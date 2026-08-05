	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:30 RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo
	.globl gText_Rom_204087
gText_Rom_204087: @ 0x08204087
	.string "おとうさんは かいしゃで おしごと!\pぼくも おおきく なったら\nデボンで はたらくんだ!$"
	.if (. - gText_Rom_204087) > 0x2e
	.error "gText_Rom_204087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204087) < 0x2e
	.space 0x2e - (. - gText_Rom_204087)
	.endif
	@ Replaced baserom.gba range: offset=0x2040B5, size=0x13
	.byte 0x00, 0x0F, 0x00, 0xC8, 0x40, 0x20, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xEE, 0x40, 0x20, 0x08
	.byte 0x09, 0x02, 0x02
