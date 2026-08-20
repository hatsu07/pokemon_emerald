	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:30 RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo
	.globl gText_Rom_204087
gText_Rom_204087: @ 0x08204087
	.string "おとうさんは かいしゃで おしごと!\pぼくも おおきく なったら\nデボンで はたらくんだ!{EOS}"
	.if (. - gText_Rom_204087) > 0x2e
	.error "gText_Rom_204087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204087) < 0x2e
	.space 0x2e - (. - gText_Rom_204087)
	.endif
	@ analyzed canonical ROM range 0x082040B5-0x082040C7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082040B5: @ 0x082040B5
	.byte 0x00
.globl EventScript_JP_082040B6
EventScript_JP_082040B6: @ 0x082040B6
	loadword 0x00, gText_Rom_2040C8
	callstd 0x02
	end
.globl EventScript_JP_082040BF
EventScript_JP_082040BF: @ 0x082040BF
	loadword 0x00, gText_Rom_2040EE
	callstd 0x02
	end
