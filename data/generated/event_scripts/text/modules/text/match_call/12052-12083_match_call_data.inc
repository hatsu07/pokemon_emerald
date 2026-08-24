	@ field-script:0x26482A FieldScriptText_264F8C
	.globl gText_Rom_264F8C
gText_Rom_264F8C: @ 0x08264F8C
	.string "おつかれさまー！\pすてきな　クイズが　できたね！\pさっそく　チャレンジ　してくれる　ひとを\nさがしに　いって　くるね！{EOS}"
	.if (. - gText_Rom_264F8C) > 0x3c
	.error "gText_Rom_264F8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264F8C) < 0x3c
	.space 0x3c - (. - gText_Rom_264F8C)
	.endif
	@ field-script:0x264836 FieldScriptText_264FC8
	.globl gText_Rom_264FC8
gText_Rom_264FC8: @ 0x08264FC8
	.string "あたし　コンテスト　おねえさん！\nコンテスト　だいすきー！{EOS}"
	.if (. - gText_Rom_264FC8) > 0x1e
	.error "gText_Rom_264FC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264FC8) < 0x1e
	.space 0x1e - (. - gText_Rom_264FC8)
	.endif
	@ field-script:0x264876 FieldScriptText_264FE6
	.globl gText_Rom_264FE6
gText_Rom_264FE6: @ 0x08264FE6
	.string "このまえは　ポロック　ありがとー！{EOS}"
	.if (. - gText_Rom_264FE6) > 0x12
	.error "gText_Rom_264FE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264FE6) < 0x12
	.space 0x12 - (. - gText_Rom_264FE6)
	.endif
	@ field-script:0x264883 FieldScriptText_264FF8
	.globl gText_Rom_264FF8
gText_Rom_264FF8: @ 0x08264FF8
	.string "こっちは　おともだちの　{0xFD}{0x02}だよ！\nとーっても　{0xFD}{0x03}い　のよ！\pでもねー　もっと　もっと\n{0xFD}{0x03}く　なると　おもうんだー！{EOS}"
	.if (. - gText_Rom_264FF8) > 0x3d
	.error "gText_Rom_264FF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264FF8) < 0x3d
	.space 0x3d - (. - gText_Rom_264FF8)
	.endif
	@ field-script:0x2649B8 FieldScriptText_265035
	.globl gText_Rom_265035
gText_Rom_265035: @ 0x08265035
	.string "だから　おねがいー！\pあなたの　ポロックー　ひとつで　いいから\nあたしたちに　ちょうだい！\p……　って　あれー？\nあなた　ポロックケース　もってないじゃん？\lしかたないなー　じゃあ　また　こんどねー！{EOS}"
	.if (. - gText_Rom_265035) > 0x65
	.error "gText_Rom_265035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265035) < 0x65
	.space 0x65 - (. - gText_Rom_265035)
	.endif
	@ field-script:0x26489B FieldScriptText_26509A
	.globl gText_Rom_26509A
gText_Rom_26509A: @ 0x0826509A
	.string "だから　おねがい！\pあなたの　ポロック　ひとつで　いいから\nあたしたちに　ちょうだい！{EOS}"
	.if (. - gText_Rom_26509A) > 0x2c
	.error "gText_Rom_26509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26509A) < 0x2c
	.space 0x2c - (. - gText_Rom_26509A)
	.endif
	@ field-script:0x2648E1 FieldScriptText_2650C6
	.globl gText_Rom_2650C6
gText_Rom_2650C6: @ 0x082650C6
	.string "えー！　ポロック　くれないの？{EOS}"
	.if (. - gText_Rom_2650C6) > 0x10
	.error "gText_Rom_2650C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650C6) < 0x10
	.space 0x10 - (. - gText_Rom_2650C6)
	.endif
	@ field-script:0x2648BA FieldScriptText_2650D6
	.globl gText_Rom_2650D6
gText_Rom_2650D6: @ 0x082650D6
	.string "ちぇっ！　けちー！{EOS}"
	.if (. - gText_Rom_2650D6) > 0xa
	.error "gText_Rom_2650D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650D6) < 0xa
	.space 0xa - (. - gText_Rom_2650D6)
	.endif
	@ field-script:0x264900 FieldScriptText_2650E0
	.globl gText_Rom_2650E0
gText_Rom_2650E0: @ 0x082650E0
	.string "わーい！　やったー！\pさっそく　たべさせて　みよーっと！{EOS}"
	.if (. - gText_Rom_2650E0) > 0x1d
	.error "gText_Rom_2650E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650E0) < 0x1d
	.space 0x1d - (. - gText_Rom_2650E0)
	.endif
	@ field-script:0x26497A FieldScriptText_2650FD
	.globl gText_Rom_2650FD
gText_Rom_2650FD: @ 0x082650FD
	.string "……なんか　ぜんぜん\nかわってない　ような……\pうーん……\pまあ　いっか！\nどうも　ありがとー{EOS}"
	.if (. - gText_Rom_2650FD) > 0x30
	.error "gText_Rom_2650FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2650FD) < 0x30
	.space 0x30 - (. - gText_Rom_2650FD)
	.endif
	@ field-script:0x26498B FieldScriptText_26512D
	.globl gText_Rom_26512D
gText_Rom_26512D: @ 0x0826512D
	.string "わーっ！　すっごく　よろこんでるよー！\pそれに　{0xFD}{0x02}の　{0xFD}{0x03}さに\nみがきが　かかった　みたい！\lどうも　ありがとー！{EOS}"
	.if (. - gText_Rom_26512D) > 0x3b
	.error "gText_Rom_26512D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26512D) < 0x3b
	.space 0x3b - (. - gText_Rom_26512D)
	.endif
	@ field-script:0x2649AB FieldScriptText_265168
	.globl gText_Rom_265168
gText_Rom_265168: @ 0x08265168
	.string "うーん……\pそろそろ　コンテストに\nさんかして　みようかなー？\pもしも　どこかで　あたし　たちを\nみかけたら　ぜったい　おうえん　してねー！{EOS}"
	.if (. - gText_Rom_265168) > 0x47
	.error "gText_Rom_265168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265168) < 0x47
	.space 0x47 - (. - gText_Rom_265168)
	.endif
	@ field-script:0x264A1C FieldScriptText_2651AF
	.globl gText_Rom_2651AF
gText_Rom_2651AF: @ 0x082651AF
	.string "{0xFD}{0x02}『ぐうぐぅ！{EOS}"
	.if (. - gText_Rom_2651AF) > 0x9
	.error "gText_Rom_2651AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651AF) < 0x9
	.space 0x9 - (. - gText_Rom_2651AF)
	.endif
	@ field-script:0x264A55 FieldScriptText_2651B8
	.globl gText_Rom_2651B8
gText_Rom_2651B8: @ 0x082651B8
	.string "{0xFD}{0x02}『いぎぎぎぃ！！{EOS}"
	.if (. - gText_Rom_2651B8) > 0xb
	.error "gText_Rom_2651B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651B8) < 0xb
	.space 0xb - (. - gText_Rom_2651B8)
	.endif
	@ field-script:0x264A42 FieldScriptText_2651C3
	.globl gText_Rom_2651C3
gText_Rom_2651C3: @ 0x082651C3
	.string "{0xFD}{0x02}『バアーゥン　……{EOS}"
	.if (. - gText_Rom_2651C3) > 0xc
	.error "gText_Rom_2651C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651C3) < 0xc
	.space 0xc - (. - gText_Rom_2651C3)
	.endif
	@ field-script:0x264A68 FieldScriptText_2651CF
	.globl gText_Rom_2651CF
gText_Rom_2651CF: @ 0x082651CF
	.string "{0xFD}{0x02}『ぴっか！{EOS}"
	.if (. - gText_Rom_2651CF) > 0x8
	.error "gText_Rom_2651CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651CF) < 0x8
	.space 0x8 - (. - gText_Rom_2651CF)
	.endif
	@ field-script:0x264A2F FieldScriptText_2651D7
	.globl gText_Rom_2651D7
gText_Rom_2651D7: @ 0x082651D7
	.string "{0xFD}{0x02}『うみゅぁぁぁん！！{EOS}"
	.if (. - gText_Rom_2651D7) > 0xd
	.error "gText_Rom_2651D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2651D7) < 0xd
	.space 0xd - (. - gText_Rom_2651D7)
	.endif
	@ data/text/match_call.inc:1 MatchCall_WildBattleText1
	.globl MatchCall_WildBattleText1
MatchCall_WildBattleText1: @ 0x082651E4
	.string "あ! {PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です\pこのまえ {STR_VAR_2}を みつけたんだけど\nつかまえられなかったよ\pおしかったなー\nじゃあ またね!{EOS}"
	.if (. - MatchCall_WildBattleText1) > 0x44
	.error "MatchCall_WildBattleText1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText1) < 0x44
	.space 0x44 - (. - MatchCall_WildBattleText1)
	.endif

	@ data/text/match_call.inc:4 MatchCall_WildBattleText2
	.globl MatchCall_WildBattleText2
MatchCall_WildBattleText2: @ 0x08265228
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です\pこのまえ {STR_VAR_2} を\nつかまえようと したんだけど\pにげられちゃったの\nざんねん だったなあ\pじゃあ またね!{EOS}"
	.if (. - MatchCall_WildBattleText2) > 0x49
	.error "MatchCall_WildBattleText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText2) < 0x49
	.space 0x49 - (. - MatchCall_WildBattleText2)
	.endif

	@ data/text/match_call.inc:7 MatchCall_WildBattleText3
	.globl MatchCall_WildBattleText3
MatchCall_WildBattleText3: @ 0x08265271
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pこのまえ {STR_VAR_2} を\nつかまえようと したんだけど\lあとすこしの ところで にげられたんだ!\pくやしかった なあ・・・\nじゃあ またなー{EOS}"
	.if (. - MatchCall_WildBattleText3) > 0x53
	.error "MatchCall_WildBattleText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText3) < 0x53
	.space 0x53 - (. - MatchCall_WildBattleText3)
	.endif

	@ data/text/match_call.inc:10 MatchCall_WildBattleText4
	.globl MatchCall_WildBattleText4
MatchCall_WildBattleText4: @ 0x082652C4
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}って ポケモン しってるかい?\nこのまえ あとすこしで\pつかまえられそう だったんだけど\nにげられて しまったよ\pこんど みつけたら ぜったい\nつかまえて みせるよ\pじゃあ またな{EOS}"
	.if (. - MatchCall_WildBattleText4) > 0x6a
	.error "MatchCall_WildBattleText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText4) < 0x6a
	.space 0x6a - (. - MatchCall_WildBattleText4)
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
	.globl MatchCall_WildBattleText7
MatchCall_WildBattleText7: @ 0x082653C8
	.string "・・・あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pあ ちょっと まって!\nいま {STR_VAR_2}を つかまえ・・・\pああああ にげられたー!\nもうすこし だったのに!{EOS}"
	.if (. - MatchCall_WildBattleText7) > 0x4a
	.error "MatchCall_WildBattleText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText7) < 0x4a
	.space 0x4a - (. - MatchCall_WildBattleText7)
	.endif

	@ data/text/match_call.inc:22 MatchCall_WildBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_WildBattleText8
MatchCall_WildBattleText8: @ 0x08265412
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pあれから ポケモン つかまえた?\nわたし このまえ もうすこしで\pつかまえられそう だったのに\nにげられちゃった\pもっと がんばらなきゃ!\nじゃあ またね{EOS}"
	.if (. - MatchCall_WildBattleText8) != 0x61
	.error "MatchCall_WildBattleText8 must retain its original byte length"
	.endif
	.globl gText_Rom_26546F
	.set gText_Rom_26546F, MatchCall_WildBattleText8 + 0x5d

	@ data/text/match_call.inc:25 MatchCall_WildBattleText9
	.globl MatchCall_WildBattleText9
MatchCall_WildBattleText9: @ 0x08265473
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pどう? ポケモン あつまってる?\nわたしは にげられて ばっかりで\pぜんぜん うまく いかないの\nじゃあ またね!{EOS}"
	.if (. - MatchCall_WildBattleText9) > 0x50
	.error "MatchCall_WildBattleText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText9) < 0x50
	.space 0x50 - (. - MatchCall_WildBattleText9)
	.endif

	@ data/text/match_call.inc:28 MatchCall_WildBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_WildBattleText10
MatchCall_WildBattleText10: @ 0x082654C3
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pもうすこしで {STR_VAR_2} を\nつかまえられそう だったのに\lにげられちゃった\pもっと がんばらなきゃ!\nじゃあ またね{EOS}"
	.if (. - MatchCall_WildBattleText10) != 0x4b
	.error "MatchCall_WildBattleText10 must retain its original byte length"
	.endif
	.globl gText_Rom_26550A
	.set gText_Rom_26550A, MatchCall_WildBattleText10 + 0x47

	@ data/text/match_call.inc:31 MatchCall_WildBattleText11
	.globl MatchCall_WildBattleText11
MatchCall_WildBattleText11: @ 0x0826550E
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\lちょうしは どうだい?\pおれは このまえ {STR_VAR_2} を\nつかまえようと したんだけど\pにげられちゃったよ\nがっくり{EOS}"
	.if (. - MatchCall_WildBattleText11) > 0x46
	.error "MatchCall_WildBattleText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText11) < 0x46
	.space 0x46 - (. - MatchCall_WildBattleText11)
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
	.globl MatchCall_WildBattleText14
MatchCall_WildBattleText14: @ 0x082655F4
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pさっき {STR_VAR_2}ちゃんを\nつかまえようと したんだけど\pにげられちゃったのよ ざんねん!\nじゃあ またね{EOS}"
	.if (. - MatchCall_WildBattleText14) != 0x46
	.error "MatchCall_WildBattleText14 must retain its original byte length"
	.endif
	.globl gText_Rom_265636
	.set gText_Rom_265636, MatchCall_WildBattleText14 + 0x42

	@ data/text/match_call.inc:43 MatchCall_WildBattleText15
	.globl MatchCall_WildBattleText15
MatchCall_WildBattleText15: @ 0x0826563A
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pポケモンを つかまえようと\nおもってるんだが\lみつからなくてさー\lおじさん こまってる とこなのよ\pまいったなー\nじゃあ またなー{EOS}"
	.if (. - MatchCall_WildBattleText15) > 0x51
	.error "MatchCall_WildBattleText15 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_WildBattleText15) < 0x51
	.space 0x51 - (. - MatchCall_WildBattleText15)
	.endif
