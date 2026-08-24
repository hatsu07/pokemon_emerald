	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:24 RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays
	.globl gText_Rom_20402B
gText_Rom_20402B: @ 0x0820402B
	.string "デボンもな むかしは\nちいさな ちいさな かいしゃ だったわい{EOS}"
	.if (. - gText_Rom_20402B) > 0x20
	.error "gText_Rom_20402B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20402B) < 0x20
	.space 0x20 - (. - gText_Rom_20402B)
	.endif
	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:27 RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt
	.globl gText_Rom_20404B
gText_Rom_20404B: @ 0x0820404B
	.string "おとうさんは かいしゃで おしごと!\pこれ おとうさんが つくったんだぜ!\nでも ぼく まだ つかえないから あげるよ{EOS}"
	.if (. - gText_Rom_20404B) > 0x3c
	.error "gText_Rom_20404B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20404B) < 0x3c
	.space 0x3c - (. - gText_Rom_20404B)
	.endif
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
