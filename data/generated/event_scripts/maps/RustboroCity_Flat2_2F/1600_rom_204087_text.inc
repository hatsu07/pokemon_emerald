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
	@ analyzed canonical ROM range 0x082040B5-0x082040C7
sAnalyzedEventData_082040B5: @ 0x082040B5
EventScript_082040B5: @ 0x082040B5
	nop
	loadword 0x00, gText_Rom_2040C8
	callstd 0x02
	end
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0F, 0x00, 0xEE, 0x40, 0x20, 0x08, 0x09, 0x02, 0x02
