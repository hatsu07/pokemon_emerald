	@ data/text/match_call.inc:1 MatchCall_WildBattleText1
	.globl gText_Rom_2651E4
gText_Rom_2651E4: @ 0x082651E4
	.string "あ! {PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です\pこのまえ {STR_VAR_2}を みつけたんだけど\nつかまえられなかったよ\pおしかったなー\nじゃあ またね!{EOS}"
	.if (. - gText_Rom_2651E4) > 0x44
	.error "gText_Rom_2651E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651E4) < 0x44
	.space 0x44 - (. - gText_Rom_2651E4)
	.endif

	@ data/text/match_call.inc:4 MatchCall_WildBattleText2
	.globl gText_Rom_265228
gText_Rom_265228: @ 0x08265228
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です\pこのまえ {STR_VAR_2} を\nつかまえようと したんだけど\pにげられちゃったの\nざんねん だったなあ\pじゃあ またね!{EOS}"
	.if (. - gText_Rom_265228) > 0x49
	.error "gText_Rom_265228 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265228) < 0x49
	.space 0x49 - (. - gText_Rom_265228)
	.endif

	@ data/text/match_call.inc:7 MatchCall_WildBattleText3
	.globl gText_Rom_265271
gText_Rom_265271: @ 0x08265271
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pこのまえ {STR_VAR_2} を\nつかまえようと したんだけど\lあとすこしの ところで にげられたんだ!\pくやしかった なあ・・・\nじゃあ またなー{EOS}"
	.if (. - gText_Rom_265271) > 0x53
	.error "gText_Rom_265271 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265271) < 0x53
	.space 0x53 - (. - gText_Rom_265271)
	.endif

	@ data/text/match_call.inc:10 MatchCall_WildBattleText4
	.globl gText_Rom_2652C4
gText_Rom_2652C4: @ 0x082652C4
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}って ポケモン しってるかい?\nこのまえ あとすこしで\pつかまえられそう だったんだけど\nにげられて しまったよ\pこんど みつけたら ぜったい\nつかまえて みせるよ\pじゃあ またな{EOS}"
	.if (. - gText_Rom_2652C4) > 0x6a
	.error "gText_Rom_2652C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2652C4) < 0x6a
	.space 0x6a - (. - gText_Rom_2652C4)
	.endif

	@ data/text/match_call.inc:13 MatchCall_WildBattleText5 (+1 aliases)
	.globl gText_Rom_26532E
gText_Rom_26532E: @ 0x0826532E
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\lポケモン つかまえてる?\pおれも このまえ もうすこしで\nつかまえられそう だったけど\pにげられちゃったよ\nじゃあ またな{EOS}"
	.if (. - gText_Rom_26532E) > 0x4d
	.error "gText_Rom_26532E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26532E) < 0x4d
	.space 0x4d - (. - gText_Rom_26532E)
	.endif

	@ data/text/match_call.inc:13 MatchCall_WildBattleText5 (+1 aliases)
	.globl gText_Rom_26537B
gText_Rom_26537B: @ 0x0826537B
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\lポケモン つかまえてる?\pおれも このまえ もうすこしで\nつかまえられそう だったけど\pにげられちゃったよ\nじゃあ またな{EOS}"
	.if (. - gText_Rom_26537B) > 0x4d
	.error "gText_Rom_26537B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26537B) < 0x4d
	.space 0x4d - (. - gText_Rom_26537B)
	.endif

	@ data/text/match_call.inc:19 MatchCall_WildBattleText7
	.globl gText_Rom_2653C8
gText_Rom_2653C8: @ 0x082653C8
	.string "・・・あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pあ ちょっと まって!\nいま {STR_VAR_2}を つかまえ・・・\pああああ にげられたー!\nもうすこし だったのに!{EOS}"
	.if (. - gText_Rom_2653C8) > 0x4a
	.error "gText_Rom_2653C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2653C8) < 0x4a
	.space 0x4a - (. - gText_Rom_2653C8)
	.endif

	@ data/text/match_call.inc:22 MatchCall_WildBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265412
gText_Rom_265412: @ 0x08265412
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pあれから ポケモン つかまえた?\nわたし このまえ もうすこしで\pつかまえられそう だったのに\nにげられちゃった\pもっと がんばらなきゃ!\nじゃあ またね{EOS}"
	.if (. - gText_Rom_265412) != 0x61
	.error "gText_Rom_265412 must retain its original byte length"
	.endif
	.globl gText_Rom_26546F
	.set gText_Rom_26546F, gText_Rom_265412 + 0x5d

	@ data/text/match_call.inc:25 MatchCall_WildBattleText9
	.globl gText_Rom_265473
gText_Rom_265473: @ 0x08265473
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pどう? ポケモン あつまってる?\nわたしは にげられて ばっかりで\pぜんぜん うまく いかないの\nじゃあ またね!{EOS}"
	.if (. - gText_Rom_265473) > 0x50
	.error "gText_Rom_265473 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265473) < 0x50
	.space 0x50 - (. - gText_Rom_265473)
	.endif

	@ data/text/match_call.inc:28 MatchCall_WildBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2654C3
gText_Rom_2654C3: @ 0x082654C3
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pもうすこしで {STR_VAR_2} を\nつかまえられそう だったのに\lにげられちゃった\pもっと がんばらなきゃ!\nじゃあ またね{EOS}"
	.if (. - gText_Rom_2654C3) != 0x4b
	.error "gText_Rom_2654C3 must retain its original byte length"
	.endif
	.globl gText_Rom_26550A
	.set gText_Rom_26550A, gText_Rom_2654C3 + 0x47

	@ data/text/match_call.inc:31 MatchCall_WildBattleText11
	.globl gText_Rom_26550E
gText_Rom_26550E: @ 0x0826550E
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\lちょうしは どうだい?\pおれは このまえ {STR_VAR_2} を\nつかまえようと したんだけど\pにげられちゃったよ\nがっくり{EOS}"
	.if (. - gText_Rom_26550E) > 0x46
	.error "gText_Rom_26550E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26550E) < 0x46
	.space 0x46 - (. - gText_Rom_26550E)
	.endif

	@ data/text/match_call.inc:34 MatchCall_WildBattleText12 (+1 aliases)
	.globl gText_Rom_265554
gText_Rom_265554: @ 0x08265554
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lポケモン つかまえとるかな?\pわしも つかまえようと おもったが\nなかなか うまくいかん\pポケモンの みちは\nおくが ふかいのう{EOS}"
	.if (. - gText_Rom_265554) > 0x50
	.error "gText_Rom_265554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265554) < 0x50
	.space 0x50 - (. - gText_Rom_265554)
	.endif

	@ data/text/match_call.inc:34 MatchCall_WildBattleText12 (+1 aliases)
	.globl gText_Rom_2655A4
gText_Rom_2655A4: @ 0x082655A4
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lポケモン つかまえとるかな?\pわしも つかまえようと おもったが\nなかなか うまくいかん\pポケモンの みちは\nおくが ふかいのう{EOS}"
	.if (. - gText_Rom_2655A4) > 0x50
	.error "gText_Rom_2655A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2655A4) < 0x50
	.space 0x50 - (. - gText_Rom_2655A4)
	.endif

	@ data/text/match_call.inc:40 MatchCall_WildBattleText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2655F4
gText_Rom_2655F4: @ 0x082655F4
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pさっき {STR_VAR_2}ちゃんを\nつかまえようと したんだけど\pにげられちゃったのよ ざんねん!\nじゃあ またね{EOS}"
	.if (. - gText_Rom_2655F4) != 0x46
	.error "gText_Rom_2655F4 must retain its original byte length"
	.endif
	.globl gText_Rom_265636
	.set gText_Rom_265636, gText_Rom_2655F4 + 0x42

	@ data/text/match_call.inc:43 MatchCall_WildBattleText15
	.globl gText_Rom_26563A
gText_Rom_26563A: @ 0x0826563A
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pポケモンを つかまえようと\nおもってるんだが\lみつからなくてさー\lおじさん こまってる とこなのよ\pまいったなー\nじゃあ またなー{EOS}"
	.if (. - gText_Rom_26563A) > 0x51
	.error "gText_Rom_26563A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26563A) < 0x51
	.space 0x51 - (. - gText_Rom_26563A)
	.endif
