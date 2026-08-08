
	@ data/text/match_call.inc:865 MatchCall_Text_Norman2
	.globl gText_Rom_26BD3E
gText_Rom_26BD3E: @ 0x0826BD3E
	.string "パパ『ふむ…… {PLAYER}は\nすこしずつ しかし かくじつに\lつよく なっているな\pおまえが つよくなれば なるほど\nわたしや ママの もとから\lとおくへ はなれて いってしまう……\pなんとも ふくざつな きぶんだよ"
	.byte EOS
	.if (. - gText_Rom_26BD3E) > 0x6a
	.error "gText_Rom_26BD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BD3E) < 0x6a
	.space 0x6a - (. - gText_Rom_26BD3E)
	.endif

	@ data/text/match_call.inc:868 MatchCall_Text_Norman3
	.globl gText_Rom_26BDA8
gText_Rom_26BDA8: @ 0x0826BDA8
	.string "パパ『そうか……\nジムバッジを 4つ あつめたのか\pでは やくそく どおり\nポケモンしょうぶ だな……\pいつでも おいで まってるぞ!"
	.byte EOS
	.if (. - gText_Rom_26BDA8) > 0x44
	.error "gText_Rom_26BDA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BDA8) < 0x44
	.space 0x44 - (. - gText_Rom_26BDA8)
	.endif

	@ data/text/match_call.inc:871 MatchCall_Text_Norman4
	.globl gText_Rom_26BDEC
gText_Rom_26BDEC: @ 0x0826BDEC
	.string "パパ『{PLAYER}! たまには ママにも\nあいに いって あげるんだぞ!\pわたしは ここで\nじぶんを きたえなおす!\pポケモンしょうぶの みちは\nおくが ふかい からな!"
	.byte EOS
	.if (. - gText_Rom_26BDEC) > 0x52
	.error "gText_Rom_26BDEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BDEC) < 0x52
	.space 0x52 - (. - gText_Rom_26BDEC)
	.endif

	@ data/text/match_call.inc:874 MatchCall_Text_Norman5
	.globl gText_Rom_26BE3E
gText_Rom_26BE3E: @ 0x0826BE3E
	.string "パパ『おお {PLAYER}!\pなになに? マグマのしるし……?\nなんのことか わたしには わからないが\pマグマと いうぐらい だから\nなにか かざんと かんけい ありそうだな!"
	.byte EOS
	.if (. - gText_Rom_26BE3E) > 0x54
	.error "gText_Rom_26BE3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BE3E) < 0x54
	.space 0x54 - (. - gText_Rom_26BE3E)
	.endif

	@ data/text/match_call.inc:877 MatchCall_Text_Norman_Preparing
	.globl gText_Rom_26BE92
gText_Rom_26BE92: @ 0x0826BE92
	.string "パパ『せや! うりゃ! どりゃー!\p……お {PLAYER}か!\pわたしは いま ポケモンと いっしょに\nトレーニングの まっさいちゅうだ!"
	.byte EOS
	.if (. - gText_Rom_26BE92) > 0x41
	.error "gText_Rom_26BE92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BE92) < 0x41
	.space 0x41 - (. - gText_Rom_26BE92)
	.endif

	@ data/text/match_call.inc:880 MatchCall_Text_Norman_PreparingPostGame
	.globl gText_Rom_26BED3
gText_Rom_26BED3: @ 0x0826BED3
	.string "パパ『{PLAYER}!\pまさか おまえが でんどういりを\nはたして しまうとは……\pよし!\nわたしも まけては いられないぞ!"
	.byte EOS
	.if (. - gText_Rom_26BED3) > 0x3b
	.error "gText_Rom_26BED3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BED3) < 0x3b
	.space 0x3b - (. - gText_Rom_26BED3)
	.endif

	@ data/text/match_call.inc:883 MatchCall_Text_Norman_RematchReady
	.globl gText_Rom_26BF0E
gText_Rom_26BF0E: @ 0x0826BF0E
	.string "パパ『……ん? {PLAYER}か?\nこれは ちょうど よかった!\pこんどは パパから おまえに\nしょうぶを もうしこんで やろう\pトウカの ジムで まってるから\nいつでも ちょうせんしに おいで!"
	.byte EOS
	.if (. - gText_Rom_26BF0E) > 0x5e
	.error "gText_Rom_26BF0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF0E) < 0x5e
	.space 0x5e - (. - gText_Rom_26BF0E)
	.endif

	@ data/text/match_call.inc:886 MatchCall_Text_Norman_PostRematch
	.globl gText_Rom_26BF6C
gText_Rom_26BF6C: @ 0x0826BF6C
	.string "パパ『……すごいなあ {PLAYER}\nどこまで つよく なっちゃうんだろう "
	.byte EOS
	.if (. - gText_Rom_26BF6C) > 0x22
	.error "gText_Rom_26BF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF6C) < 0x22
	.space 0x22 - (. - gText_Rom_26BF6C)
	.endif

	@ data/text/match_call.inc:889 MatchCall_Text_Steven1
	.globl gText_Rom_26BF8E
gText_Rom_26BF8E: @ 0x0826BF8E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pもう キンセツシティには いったかな?\pまちの サイクルショップで\nマッハじてんしゃを てにいれたら\pもういちど いしのどうくつの おくに\nいってみるのも いいね!\pなにか あたらしい はっけんが\nあるかも しれないよ!"
	.byte EOS
	.if (. - gText_Rom_26BF8E) > 0x7c
	.error "gText_Rom_26BF8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF8E) < 0x7c
	.space 0x7c - (. - gText_Rom_26BF8E)
	.endif

	@ data/text/match_call.inc:892 MatchCall_Text_Steven2
	.globl gText_Rom_26C00A
gText_Rom_26C00A: @ 0x0826C00A
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pボクは これまでに ずいぶん いろいろな\nトレーナーを みてきた けれど\pキミは だれにも にていない\nはじめて みる タイプの ひとだよ!"
	.byte EOS
	.if (. - gText_Rom_26C00A) > 0x54
	.error "gText_Rom_26C00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C00A) < 0x54
	.space 0x54 - (. - gText_Rom_26C00A)
	.endif

	@ data/text/match_call.inc:895 MatchCall_Text_Steven3
	.globl gText_Rom_26C05E
gText_Rom_26C05E: @ 0x0826C05E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pキミは ポケモンと ぼうけんを していて\nどんな きぶんに なる?\pつよいみかた だと おもうかい?\nたのしいなかま だと おもうかい?\pキミが どう かんじるかに よって\nその ぼうけんの いみは かわるんだ!"
	.byte EOS
	.if (. - gText_Rom_26C05E) > 0x78
	.error "gText_Rom_26C05E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C05E) < 0x78
	.space 0x78 - (. - gText_Rom_26C05E)
	.endif

	@ data/text/match_call.inc:898 MatchCall_Text_Steven4
	.globl gText_Rom_26C0D6
gText_Rom_26C0D6: @ 0x0826C0D6
	.string "ダイゴ『ああ {PLAYER}{KUN} かい?\pちょっと いま うちゅうセンターで\nめんどうな ことが おきてるんだ\pわるいけど また あとでね!"
	.byte EOS
	.if (. - gText_Rom_26C0D6) > 0x42
	.error "gText_Rom_26C0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C0D6) < 0x42
	.space 0x42 - (. - gText_Rom_26C0D6)
	.endif

	@ data/text/match_call.inc:901 MatchCall_Text_Steven5
	.globl gText_Rom_26C118
gText_Rom_26C118: @ 0x0826C118
	.string "ダイゴ『あっ {PLAYER}{KUN}!\pなにも いわなくて いいよ!\nとにかく いまは……\pキミが おもうように すすむんだ!"
	.byte EOS
	.if (. - gText_Rom_26C118) > 0x39
	.error "gText_Rom_26C118 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C118) < 0x39
	.space 0x39 - (. - gText_Rom_26C118)
	.endif

	@ data/text/match_call.inc:904 MatchCall_Text_Steven6
	.globl gText_Rom_26C151
gText_Rom_26C151: @ 0x0826C151
	.string "…… …… ……\pダイゴには よびだしが\nつうじていない ようだ……"
	.byte EOS
	.if (. - gText_Rom_26C151) > 0x23
	.error "gText_Rom_26C151 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C151) < 0x23
	.space 0x23 - (. - gText_Rom_26C151)
	.endif

	@ data/text/match_call.inc:907 MatchCall_Text_Steven7
	.globl gText_Rom_26C174
gText_Rom_26C174: @ 0x0826C174
	.string "ダイゴ『{PLAYER}{KUN}……\nでんどういり おめでとう\p…… …… ……\n…… …… ……\pまた いつか あえると いいね!"
	.byte EOS
	.if (. - gText_Rom_26C174) > 0x3b
	.error "gText_Rom_26C174 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C174) < 0x3b
	.space 0x3b - (. - gText_Rom_26C174)
	.endif

	@ data/text/match_call.inc:910 MatchCall_Text_BirchRegisterCall
	.globl gText_Rom_26C1AF
gText_Rom_26C1AF: @ 0x0826C1AF
	.string "オダマキ『おお {PLAYER}{KUN}!\nはなしは すでに きいて いるよ!\pきみの ポケナビに エントリーコールが\nセットされた らしいな!\pならば わたしも とうろく しておこう!\pこれで きみと はなれていても\nすぐに ポケモンずかんの ひょうかを\lしてあげられる からね!\p…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C1AF) > 0x8f
	.error "gText_Rom_26C1AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C1AF) < 0x8f
	.space 0x8f - (. - gText_Rom_26C1AF)
	.endif
