	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:24 RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays
	.globl RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays
RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays: @ 0x0820402B
	.string "デボンもな むかしは\nちいさな ちいさな かいしゃ だったわい{EOS}"
	.if (. - RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays) > 0x20
	.error "RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays) < 0x20
	.space 0x20 - (. - RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays)
	.endif
	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:27 RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt
	.globl RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt
RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt: @ 0x0820404B
	.string "おとうさんは かいしゃで おしごと!\pこれ おとうさんが つくったんだぜ!\nでも ぼく まだ つかえないから あげるよ{EOS}"
	.if (. - RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt) > 0x3c
	.error "RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt) < 0x3c
	.space 0x3c - (. - RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt)
	.endif
	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:30 RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo
	.globl RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo
RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo: @ 0x08204087
	.string "おとうさんは かいしゃで おしごと!\pぼくも おおきく なったら\nデボンで はたらくんだ!{EOS}"
	.if (. - RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo) > 0x2e
	.error "RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo) < 0x2e
	.space 0x2e - (. - RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo)
	.endif
	@ analyzed canonical ROM range 0x082040B5-0x082040C7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082040B5: @ 0x082040B5
	.byte 0x00
.globl EventScript_JP_082040B6
EventScript_JP_082040B6: @ 0x082040B6
	loadword 0x00, RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones
	callstd 0x02
	end
.globl EventScript_JP_082040BF
EventScript_JP_082040BF: @ 0x082040BF
	loadword 0x00, RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones
	callstd 0x02
	end
