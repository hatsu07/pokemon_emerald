	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:76 LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot
	.globl gText_Rom_2055D8
gText_Rom_2055D8: @ 0x082055D8
	.string "ほほう ポケモンの みりょくで\nおきゃくさまが ばいぞう したって!?\pそうかあ うちも かわいい ポケモンを\nりょかんの マスコットに すれば\pもっと たくさんの おきゃくさまが\nとまりに きてくれるように なるかな?{EOS}"
	.if (. - gText_Rom_2055D8) > 0x6f
	.error "gText_Rom_2055D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2055D8) < 0x6f
	.space 0x6f - (. - gText_Rom_2055D8)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:79 LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua
	.globl gText_Rom_205647
gText_Rom_205647: @ 0x08205647
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pアクアだん とかいう れんちゅうが\nまちに やってきた おかげで\lかんこうきゃくも さっぱり なんだよね{EOS}"
	.if (. - gText_Rom_205647) > 0x52
	.error "gText_Rom_205647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205647) < 0x52
	.space 0x52 - (. - gText_Rom_205647)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:82 LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV
	.globl gText_Rom_205699
gText_Rom_205699: @ 0x08205699
	.string "あー ちょっと じゃま しないで!\nテレビが みえない じゃないか!{EOS}"
	.if (. - gText_Rom_205699) > 0x23
	.error "gText_Rom_205699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205699) < 0x23
	.space 0x23 - (. - gText_Rom_205699)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:85 LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem
	.globl gText_Rom_2056BC
gText_Rom_2056BC: @ 0x082056BC
	.string "なんと! なくした どうぐを\nポケモンが ひろって きたって!?\pそうかあ うちも そんな\nかしこい ポケモンが いてくれれば\pおきゃくさまの なくした ものも\nすぐに みつかるのになぁ……{EOS}"
	.if (. - gText_Rom_2056BC) > 0x60
	.error "gText_Rom_2056BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2056BC) < 0x60
	.space 0x60 - (. - gText_Rom_2056BC)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:88 LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted
	.globl gText_Rom_20571C
gText_Rom_20571C: @ 0x0820571C
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pそういえば だれかが アクアだんの\nアジトを かいめつ させた らしいね!\pおかげで さっき だんたいさん からの\nしゅくはく よやくが はいったよ!\pたしか…… ゲームなんとか っていう\nかいしゃ だったかな……{EOS}"
	.if (. - gText_Rom_20571C) > 0x89
	.error "gText_Rom_20571C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20571C) < 0x89
	.space 0x89 - (. - gText_Rom_20571C)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:91 LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar
	.globl gText_Rom_2057A5
gText_Rom_2057A5: @ 0x082057A5
	.string "なんと! しのびこんだ どろぼうを\nるすばんの ポケモンが つかまえたって!?\pそうかあ うちも ガードマンの かわりに\nつよい ポケモンが いてくれれば\pおきゃくさまの あんぜんを\nまもることが できそうだなぁ……{EOS}"
	.if (. - gText_Rom_2057A5) > 0x6d
	.error "gText_Rom_2057A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2057A5) < 0x6d
	.space 0x6d - (. - gText_Rom_2057A5)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:94 LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner
	.globl gText_Rom_205812
gText_Rom_205812: @ 0x08205812
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pそういえば さっき\nだんたいさん が とうちゃく したよ!\pゲームフリークって いうから\nゲームの かいしゃの ひとたち かなぁ?\lああ ごはんの じゅんびを しなくちゃ……{EOS}"
	.if (. - gText_Rom_205812) > 0x75
	.error "gText_Rom_205812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205812) < 0x75
	.space 0x75 - (. - gText_Rom_205812)
	.endif
	@ analyzed canonical ROM range 0x08205887-0x08205928
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205887: @ 0x08205887
	.byte 0x00
.globl EventScript_JP_08205888
EventScript_JP_08205888: @ 0x08205888
	lock
	faceplayer
	checkflag 0x0002
	call_if 0x00, EventScript_JP_082058AE
	checkflag 0x0002
	call_if 0x01, EventScript_JP_082058C4
	specialvar_ 0x800D, 0x014E
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082058B7
	release
	end
EventScript_082058AE: @ 0x082058AE
EventScript_JP_082058AE: @ 0x082058AE
	loadword 0x00, gText_Rom_205929
	callstd 0x04
	return
EventScript_082058B7: @ 0x082058B7
EventScript_JP_082058B7: @ 0x082058B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x0002
	playfanfare 0x0172
	waitfanfare
	goto EventScript_JP_082058C4
	.byte 0x02
EventScript_JP_082058C4: @ 0x082058C4
	message gText_Rom_205978
	waitmessage
	call 0x0824310A
	@ event command: special
	special Special_ShowDiploma
	waitstate
	release
	end
.globl EventScript_JP_082058D5
EventScript_JP_082058D5: @ 0x082058D5
	loadword 0x00, gText_Rom_2059DF
	callstd 0x02
	end
.globl EventScript_JP_082058DE
EventScript_JP_082058DE: @ 0x082058DE
	loadword 0x00, gText_Rom_205A08
	callstd 0x02
	end
.globl EventScript_JP_082058E7
EventScript_JP_082058E7: @ 0x082058E7
	loadword 0x00, gText_Rom_205A27
	callstd 0x02
	end
.globl EventScript_JP_082058F0
EventScript_JP_082058F0: @ 0x082058F0
	loadword 0x00, gText_Rom_205A85
	callstd 0x02
	end
.globl EventScript_JP_082058F9
EventScript_JP_082058F9: @ 0x082058F9
	loadword 0x00, gText_Rom_205AA6
	callstd 0x02
	end
.globl EventScript_JP_08205902
EventScript_JP_08205902: @ 0x08205902
	lock
	faceplayer
	checkflag 0x01CE
	goto_if 0x01, EventScript_JP_0820591F
	loadword 0x00, gText_Rom_205AE0
	callstd 0x04
	addvar 0x40D1, 0x0001
	setflag 0x01CE
	release
	end
EventScript_JP_0820591F: @ 0x0820591F
	loadword 0x00, gText_Rom_205BA3
	callstd 0x04
	release
	end
