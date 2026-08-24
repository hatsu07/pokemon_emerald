
	@ data/text/match_call.inc:46 MatchCall_NegativeBattleText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_NegativeBattleText1
MatchCall_NegativeBattleText1: @ 0x0826568B
	.string "{PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です!\pほかのひとと しょうぶ したんだけど\nまけちゃったよ がっくし\pじゃあ またね{EOS}"
	.if (. - MatchCall_NegativeBattleText1) != 0x3b
	.error "MatchCall_NegativeBattleText1 must retain its original byte length"
	.endif
	.globl gText_Rom_2656C2
	.set gText_Rom_2656C2, MatchCall_NegativeBattleText1 + 0x37

	@ data/text/match_call.inc:49 MatchCall_NegativeBattleText2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_NegativeBattleText2
MatchCall_NegativeBattleText2: @ 0x082656C6
	.string "{PLAYER}{KUN} こんにちは!\n{STR_VAR_1}よ!\pわたし ね\nあれから また しょうぶ してみたの\pでも あとちょっとの ところで\nまけちゃった あーあ{EOS}"
	.if (. - MatchCall_NegativeBattleText2) != 0x45
	.error "MatchCall_NegativeBattleText2 must retain its original byte length"
	.endif
	.globl gText_Rom_265707
	.set gText_Rom_265707, MatchCall_NegativeBattleText2 + 0x41

	@ data/text/match_call.inc:52 MatchCall_NegativeBattleText3
	.globl MatchCall_NegativeBattleText3
MatchCall_NegativeBattleText3: @ 0x0826570B
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pしょうぶ に まけたよー\nもっと そだてないと だめだなー{EOS}"
	.if (. - MatchCall_NegativeBattleText3) > 0x2d
	.error "MatchCall_NegativeBattleText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText3) < 0x2d
	.space 0x2d - (. - MatchCall_NegativeBattleText3)
	.endif

	@ data/text/match_call.inc:55 MatchCall_NegativeBattleText4
	.globl MatchCall_NegativeBattleText4
MatchCall_NegativeBattleText4: @ 0x08265738
	.string "やあ {PLAYER}\n{STR_VAR_1} だ\pきのう また しょうぶ してみたんだ\nでも かてなかったよ\pもっと そだてが ひつようだな\nじゃあ またな{EOS}"
	.if (. - MatchCall_NegativeBattleText4) > 0x41
	.error "MatchCall_NegativeBattleText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText4) < 0x41
	.space 0x41 - (. - MatchCall_NegativeBattleText4)
	.endif

	@ data/text/match_call.inc:58 MatchCall_NegativeBattleText5 (+1 aliases)
	.globl gText_Rom_265779
gText_Rom_265779: @ 0x08265779
	.string "やあ {PLAYER}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nおれは しょうぶ しても\lあまり かてないんだよ\pちょうし わるいなあ\nじゃあ またな{EOS}"
	.if (. - gText_Rom_265779) > 0x44
	.error "gText_Rom_265779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265779) < 0x44
	.space 0x44 - (. - gText_Rom_265779)
	.endif

	@ data/text/match_call.inc:58 MatchCall_NegativeBattleText5 (+1 aliases)
	.globl gText_Rom_2657BD
gText_Rom_2657BD: @ 0x082657BD
	.string "やあ {PLAYER}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nおれは しょうぶ しても\lあまり かてないんだよ\pちょうし わるいなあ\nじゃあ またな{EOS}"
	.if (. - gText_Rom_2657BD) > 0x44
	.error "gText_Rom_2657BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2657BD) < 0x44
	.space 0x44 - (. - gText_Rom_2657BD)
	.endif

	@ data/text/match_call.inc:64 MatchCall_NegativeBattleText7
	.globl MatchCall_NegativeBattleText7
MatchCall_NegativeBattleText7: @ 0x08265801
	.string "{STR_VAR_1} だけどー\nさいきん どう?\pきのう しょうぶに まけてさ\nそのことで あたまが いっぱいなんだ\pたいさく かんがえないと・・・\nじゃあ また{EOS}"
	.if (. - MatchCall_NegativeBattleText7) > 0x4a
	.error "MatchCall_NegativeBattleText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText7) < 0x4a
	.space 0x4a - (. - MatchCall_NegativeBattleText7)
	.endif

	@ data/text/match_call.inc:67 MatchCall_NegativeBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_NegativeBattleText8
MatchCall_NegativeBattleText8: @ 0x0826584B
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pポケモンの ちょうしは どう?\nわたしは このまえの しょうぶで\lまけちゃった\pもっと がんばらなきゃ!\nじゃあ またね{EOS}"
	.if (. - MatchCall_NegativeBattleText8) != 0x50
	.error "MatchCall_NegativeBattleText8 must retain its original byte length"
	.endif
	.globl gText_Rom_265897
	.set gText_Rom_265897, MatchCall_NegativeBattleText8 + 0x4c

	@ data/text/match_call.inc:70 MatchCall_NegativeBattleText9
	.globl MatchCall_NegativeBattleText9
MatchCall_NegativeBattleText9: @ 0x0826589B
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} でーす\pねー きいて きいて!\nこのまえ ポケモン しょうぶ したんだけど\pあとちょっとの ところで\nまけちゃったのよー! くやしい!{EOS}"
	.if (. - MatchCall_NegativeBattleText9) > 0x56
	.error "MatchCall_NegativeBattleText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText9) < 0x56
	.space 0x56 - (. - MatchCall_NegativeBattleText9)
	.endif

	@ data/text/match_call.inc:73 MatchCall_NegativeBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_NegativeBattleText10
MatchCall_NegativeBattleText10: @ 0x082658F1
	.string "あら {PLAYER}{KUN}\n{STR_VAR_1} です\pさっき しょうぶ したんだけど\nまけちゃった\pもっと ポケモン そだてないと だめね\nじゃあ またね{EOS}"
	.if (. - MatchCall_NegativeBattleText10) != 0x41
	.error "MatchCall_NegativeBattleText10 must retain its original byte length"
	.endif
	.globl gText_Rom_26592E
	.set gText_Rom_26592E, MatchCall_NegativeBattleText10 + 0x3d

	@ data/text/match_call.inc:76 MatchCall_NegativeBattleText11
	.globl MatchCall_NegativeBattleText11
MatchCall_NegativeBattleText11: @ 0x08265932
	.string "やあ {PLAYER}{KUN} げんきかい?\n{STR_VAR_1} だよ\lポケモンの ちょうしは どう?\pこっちは また しょうぶに\nまけちゃったよ\pじゃあ また{EOS}"
	.if (. - MatchCall_NegativeBattleText11) > 0x42
	.error "MatchCall_NegativeBattleText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText11) < 0x42
	.space 0x42 - (. - MatchCall_NegativeBattleText11)
	.endif

	@ data/text/match_call.inc:79 MatchCall_NegativeBattleText12
	.globl MatchCall_NegativeBattleText12
MatchCall_NegativeBattleText12: @ 0x08265974
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lしょうぶ しておるのかな?\pわしのほうは このまえ まけてしまって\nまた ポケモンを\lそだてておる ところじゃよ\pでは またな{EOS}"
	.if (. - MatchCall_NegativeBattleText12) > 0x51
	.error "MatchCall_NegativeBattleText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText12) < 0x51
	.space 0x51 - (. - MatchCall_NegativeBattleText12)
	.endif

	@ data/text/match_call.inc:82 MatchCall_NegativeBattleText13
	.globl MatchCall_NegativeBattleText13
MatchCall_NegativeBattleText13: @ 0x082659C5
	.string "おお {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pげんき かのう?\nさっきまで ポケモン しょうぶを\lしておったよ\p{PLAYER}{KUN}も がんばるんじゃぞ\nでは またの{EOS}"
	.if (. - MatchCall_NegativeBattleText13) > 0x45
	.error "MatchCall_NegativeBattleText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_NegativeBattleText13) < 0x45
	.space 0x45 - (. - MatchCall_NegativeBattleText13)
	.endif

	@ data/text/match_call.inc:85 MatchCall_NegativeBattleText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_NegativeBattleText14
MatchCall_NegativeBattleText14: @ 0x08265A0A
	.string "あら {PLAYER}{KUN}\n{STR_VAR_1} よ\pちょうしは どうなの?\nたまには いえに かえらないと だめよ\lじゃあ またね{EOS}"
	.if (. - MatchCall_NegativeBattleText14) != 0x35
	.error "MatchCall_NegativeBattleText14 must retain its original byte length"
	.endif
