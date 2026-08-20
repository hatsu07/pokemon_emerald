
	@ data/text/match_call.inc:46 MatchCall_NegativeBattleText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26568B
gText_Rom_26568B: @ 0x0826568B
	.string "{PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です!\pほかのひとと しょうぶ したんだけど\nまけちゃったよ がっくし\pじゃあ またね{EOS}"
	.if (. - gText_Rom_26568B) != 0x3b
	.error "gText_Rom_26568B must retain its original byte length"
	.endif
	.globl gText_Rom_2656C2
	.set gText_Rom_2656C2, gText_Rom_26568B + 0x37

	@ data/text/match_call.inc:49 MatchCall_NegativeBattleText2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2656C6
gText_Rom_2656C6: @ 0x082656C6
	.string "{PLAYER}{KUN} こんにちは!\n{STR_VAR_1}よ!\pわたし ね\nあれから また しょうぶ してみたの\pでも あとちょっとの ところで\nまけちゃった あーあ{EOS}"
	.if (. - gText_Rom_2656C6) != 0x45
	.error "gText_Rom_2656C6 must retain its original byte length"
	.endif
	.globl gText_Rom_265707
	.set gText_Rom_265707, gText_Rom_2656C6 + 0x41

	@ data/text/match_call.inc:52 MatchCall_NegativeBattleText3
	.globl gText_Rom_26570B
gText_Rom_26570B: @ 0x0826570B
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pしょうぶ に まけたよー\nもっと そだてないと だめだなー{EOS}"
	.if (. - gText_Rom_26570B) > 0x2d
	.error "gText_Rom_26570B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26570B) < 0x2d
	.space 0x2d - (. - gText_Rom_26570B)
	.endif

	@ data/text/match_call.inc:55 MatchCall_NegativeBattleText4
	.globl gText_Rom_265738
gText_Rom_265738: @ 0x08265738
	.string "やあ {PLAYER}\n{STR_VAR_1} だ\pきのう また しょうぶ してみたんだ\nでも かてなかったよ\pもっと そだてが ひつようだな\nじゃあ またな{EOS}"
	.if (. - gText_Rom_265738) > 0x41
	.error "gText_Rom_265738 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265738) < 0x41
	.space 0x41 - (. - gText_Rom_265738)
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
	.globl gText_Rom_265801
gText_Rom_265801: @ 0x08265801
	.string "{STR_VAR_1} だけどー\nさいきん どう?\pきのう しょうぶに まけてさ\nそのことで あたまが いっぱいなんだ\pたいさく かんがえないと・・・\nじゃあ また{EOS}"
	.if (. - gText_Rom_265801) > 0x4a
	.error "gText_Rom_265801 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265801) < 0x4a
	.space 0x4a - (. - gText_Rom_265801)
	.endif

	@ data/text/match_call.inc:67 MatchCall_NegativeBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26584B
gText_Rom_26584B: @ 0x0826584B
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pポケモンの ちょうしは どう?\nわたしは このまえの しょうぶで\lまけちゃった\pもっと がんばらなきゃ!\nじゃあ またね{EOS}"
	.if (. - gText_Rom_26584B) != 0x50
	.error "gText_Rom_26584B must retain its original byte length"
	.endif
	.globl gText_Rom_265897
	.set gText_Rom_265897, gText_Rom_26584B + 0x4c

	@ data/text/match_call.inc:70 MatchCall_NegativeBattleText9
	.globl gText_Rom_26589B
gText_Rom_26589B: @ 0x0826589B
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} でーす\pねー きいて きいて!\nこのまえ ポケモン しょうぶ したんだけど\pあとちょっとの ところで\nまけちゃったのよー! くやしい!{EOS}"
	.if (. - gText_Rom_26589B) > 0x56
	.error "gText_Rom_26589B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26589B) < 0x56
	.space 0x56 - (. - gText_Rom_26589B)
	.endif

	@ data/text/match_call.inc:73 MatchCall_NegativeBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2658F1
gText_Rom_2658F1: @ 0x082658F1
	.string "あら {PLAYER}{KUN}\n{STR_VAR_1} です\pさっき しょうぶ したんだけど\nまけちゃった\pもっと ポケモン そだてないと だめね\nじゃあ またね{EOS}"
	.if (. - gText_Rom_2658F1) != 0x41
	.error "gText_Rom_2658F1 must retain its original byte length"
	.endif
	.globl gText_Rom_26592E
	.set gText_Rom_26592E, gText_Rom_2658F1 + 0x3d

	@ data/text/match_call.inc:76 MatchCall_NegativeBattleText11
	.globl gText_Rom_265932
gText_Rom_265932: @ 0x08265932
	.string "やあ {PLAYER}{KUN} げんきかい?\n{STR_VAR_1} だよ\lポケモンの ちょうしは どう?\pこっちは また しょうぶに\nまけちゃったよ\pじゃあ また{EOS}"
	.if (. - gText_Rom_265932) > 0x42
	.error "gText_Rom_265932 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265932) < 0x42
	.space 0x42 - (. - gText_Rom_265932)
	.endif

	@ data/text/match_call.inc:79 MatchCall_NegativeBattleText12
	.globl gText_Rom_265974
gText_Rom_265974: @ 0x08265974
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lしょうぶ しておるのかな?\pわしのほうは このまえ まけてしまって\nまた ポケモンを\lそだてておる ところじゃよ\pでは またな{EOS}"
	.if (. - gText_Rom_265974) > 0x51
	.error "gText_Rom_265974 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265974) < 0x51
	.space 0x51 - (. - gText_Rom_265974)
	.endif

	@ data/text/match_call.inc:82 MatchCall_NegativeBattleText13
	.globl gText_Rom_2659C5
gText_Rom_2659C5: @ 0x082659C5
	.string "おお {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pげんき かのう?\nさっきまで ポケモン しょうぶを\lしておったよ\p{PLAYER}{KUN}も がんばるんじゃぞ\nでは またの{EOS}"
	.if (. - gText_Rom_2659C5) > 0x45
	.error "gText_Rom_2659C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2659C5) < 0x45
	.space 0x45 - (. - gText_Rom_2659C5)
	.endif

	@ data/text/match_call.inc:85 MatchCall_NegativeBattleText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265A0A
gText_Rom_265A0A: @ 0x08265A0A
	.string "あら {PLAYER}{KUN}\n{STR_VAR_1} よ\pちょうしは どうなの?\nたまには いえに かえらないと だめよ\lじゃあ またね{EOS}"
	.if (. - gText_Rom_265A0A) != 0x35
	.error "gText_Rom_265A0A must retain its original byte length"
	.endif
