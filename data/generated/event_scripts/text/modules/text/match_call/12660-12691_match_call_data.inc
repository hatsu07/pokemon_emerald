
	@ data/text/match_call.inc:865 MatchCall_Text_Norman2
	.globl MatchCall_Text_Norman2
MatchCall_Text_Norman2: @ 0x0826BD3E
	.string "パパ『ふむ…… {PLAYER}は\nすこしずつ しかし かくじつに\lつよく なっているな\pおまえが つよくなれば なるほど\nわたしや ママの もとから\lとおくへ はなれて いってしまう……\pなんとも ふくざつな きぶんだよ"
	.byte EOS
	.if (. - MatchCall_Text_Norman2) > 0x6a
	.error "MatchCall_Text_Norman2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman2) < 0x6a
	.space 0x6a - (. - MatchCall_Text_Norman2)
	.endif

	@ data/text/match_call.inc:868 MatchCall_Text_Norman3
	.globl MatchCall_Text_Norman3
MatchCall_Text_Norman3: @ 0x0826BDA8
	.string "パパ『そうか……\nジムバッジを 4つ あつめたのか\pでは やくそく どおり\nポケモンしょうぶ だな……\pいつでも おいで まってるぞ!"
	.byte EOS
	.if (. - MatchCall_Text_Norman3) > 0x44
	.error "MatchCall_Text_Norman3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman3) < 0x44
	.space 0x44 - (. - MatchCall_Text_Norman3)
	.endif

	@ data/text/match_call.inc:871 MatchCall_Text_Norman4
	.globl MatchCall_Text_Norman4
MatchCall_Text_Norman4: @ 0x0826BDEC
	.string "パパ『{PLAYER}! たまには ママにも\nあいに いって あげるんだぞ!\pわたしは ここで\nじぶんを きたえなおす!\pポケモンしょうぶの みちは\nおくが ふかい からな!"
	.byte EOS
	.if (. - MatchCall_Text_Norman4) > 0x52
	.error "MatchCall_Text_Norman4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman4) < 0x52
	.space 0x52 - (. - MatchCall_Text_Norman4)
	.endif

	@ data/text/match_call.inc:874 MatchCall_Text_Norman5
	.globl MatchCall_Text_Norman5
MatchCall_Text_Norman5: @ 0x0826BE3E
	.string "パパ『おお {PLAYER}!\pなになに? マグマのしるし……?\nなんのことか わたしには わからないが\pマグマと いうぐらい だから\nなにか かざんと かんけい ありそうだな!"
	.byte EOS
	.if (. - MatchCall_Text_Norman5) > 0x54
	.error "MatchCall_Text_Norman5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman5) < 0x54
	.space 0x54 - (. - MatchCall_Text_Norman5)
	.endif

	@ data/text/match_call.inc:877 MatchCall_Text_Norman_Preparing
	.globl MatchCall_Text_Norman_Preparing
MatchCall_Text_Norman_Preparing: @ 0x0826BE92
	.string "パパ『せや! うりゃ! どりゃー!\p……お {PLAYER}か!\pわたしは いま ポケモンと いっしょに\nトレーニングの まっさいちゅうだ!"
	.byte EOS
	.if (. - MatchCall_Text_Norman_Preparing) > 0x41
	.error "MatchCall_Text_Norman_Preparing may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman_Preparing) < 0x41
	.space 0x41 - (. - MatchCall_Text_Norman_Preparing)
	.endif

	@ data/text/match_call.inc:880 MatchCall_Text_Norman_PreparingPostGame
	.globl MatchCall_Text_Norman_PreparingPostGame
MatchCall_Text_Norman_PreparingPostGame: @ 0x0826BED3
	.string "パパ『{PLAYER}!\pまさか おまえが でんどういりを\nはたして しまうとは……\pよし!\nわたしも まけては いられないぞ!"
	.byte EOS
	.if (. - MatchCall_Text_Norman_PreparingPostGame) > 0x3b
	.error "MatchCall_Text_Norman_PreparingPostGame may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman_PreparingPostGame) < 0x3b
	.space 0x3b - (. - MatchCall_Text_Norman_PreparingPostGame)
	.endif

	@ data/text/match_call.inc:883 MatchCall_Text_Norman_RematchReady
	.globl MatchCall_Text_Norman_RematchReady
MatchCall_Text_Norman_RematchReady: @ 0x0826BF0E
	.string "パパ『……ん? {PLAYER}か?\nこれは ちょうど よかった!\pこんどは パパから おまえに\nしょうぶを もうしこんで やろう\pトウカの ジムで まってるから\nいつでも ちょうせんしに おいで!"
	.byte EOS
	.if (. - MatchCall_Text_Norman_RematchReady) > 0x5e
	.error "MatchCall_Text_Norman_RematchReady may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman_RematchReady) < 0x5e
	.space 0x5e - (. - MatchCall_Text_Norman_RematchReady)
	.endif

	@ data/text/match_call.inc:886 MatchCall_Text_Norman_PostRematch
	.globl MatchCall_Text_Norman_PostRematch
MatchCall_Text_Norman_PostRematch: @ 0x0826BF6C
	.string "パパ『……すごいなあ {PLAYER}\nどこまで つよく なっちゃうんだろう "
	.byte EOS
	.if (. - MatchCall_Text_Norman_PostRematch) > 0x22
	.error "MatchCall_Text_Norman_PostRematch may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Norman_PostRematch) < 0x22
	.space 0x22 - (. - MatchCall_Text_Norman_PostRematch)
	.endif

	@ data/text/match_call.inc:889 MatchCall_Text_Steven1
	.globl MatchCall_Text_Steven1
MatchCall_Text_Steven1: @ 0x0826BF8E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pもう キンセツシティには いったかな?\pまちの サイクルショップで\nマッハじてんしゃを てにいれたら\pもういちど いしのどうくつの おくに\nいってみるのも いいね!\pなにか あたらしい はっけんが\nあるかも しれないよ!"
	.byte EOS
	.if (. - MatchCall_Text_Steven1) > 0x7c
	.error "MatchCall_Text_Steven1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven1) < 0x7c
	.space 0x7c - (. - MatchCall_Text_Steven1)
	.endif

	@ data/text/match_call.inc:892 MatchCall_Text_Steven2
	.globl MatchCall_Text_Steven2
MatchCall_Text_Steven2: @ 0x0826C00A
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pボクは これまでに ずいぶん いろいろな\nトレーナーを みてきた けれど\pキミは だれにも にていない\nはじめて みる タイプの ひとだよ!"
	.byte EOS
	.if (. - MatchCall_Text_Steven2) > 0x54
	.error "MatchCall_Text_Steven2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven2) < 0x54
	.space 0x54 - (. - MatchCall_Text_Steven2)
	.endif

	@ data/text/match_call.inc:895 MatchCall_Text_Steven3
	.globl MatchCall_Text_Steven3
MatchCall_Text_Steven3: @ 0x0826C05E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pキミは ポケモンと ぼうけんを していて\nどんな きぶんに なる?\pつよいみかた だと おもうかい?\nたのしいなかま だと おもうかい?\pキミが どう かんじるかに よって\nその ぼうけんの いみは かわるんだ!"
	.byte EOS
	.if (. - MatchCall_Text_Steven3) > 0x78
	.error "MatchCall_Text_Steven3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven3) < 0x78
	.space 0x78 - (. - MatchCall_Text_Steven3)
	.endif

	@ data/text/match_call.inc:898 MatchCall_Text_Steven4
	.globl MatchCall_Text_Steven4
MatchCall_Text_Steven4: @ 0x0826C0D6
	.string "ダイゴ『ああ {PLAYER}{KUN} かい?\pちょっと いま うちゅうセンターで\nめんどうな ことが おきてるんだ\pわるいけど また あとでね!"
	.byte EOS
	.if (. - MatchCall_Text_Steven4) > 0x42
	.error "MatchCall_Text_Steven4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven4) < 0x42
	.space 0x42 - (. - MatchCall_Text_Steven4)
	.endif

	@ data/text/match_call.inc:901 MatchCall_Text_Steven5
	.globl MatchCall_Text_Steven5
MatchCall_Text_Steven5: @ 0x0826C118
	.string "ダイゴ『あっ {PLAYER}{KUN}!\pなにも いわなくて いいよ!\nとにかく いまは……\pキミが おもうように すすむんだ!"
	.byte EOS
	.if (. - MatchCall_Text_Steven5) > 0x39
	.error "MatchCall_Text_Steven5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven5) < 0x39
	.space 0x39 - (. - MatchCall_Text_Steven5)
	.endif

	@ data/text/match_call.inc:904 MatchCall_Text_Steven6
	.globl MatchCall_Text_Steven6
MatchCall_Text_Steven6: @ 0x0826C151
	.string "…… …… ……\pダイゴには よびだしが\nつうじていない ようだ……"
	.byte EOS
	.if (. - MatchCall_Text_Steven6) > 0x23
	.error "MatchCall_Text_Steven6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven6) < 0x23
	.space 0x23 - (. - MatchCall_Text_Steven6)
	.endif

	@ data/text/match_call.inc:907 MatchCall_Text_Steven7
	.globl MatchCall_Text_Steven7
MatchCall_Text_Steven7: @ 0x0826C174
	.string "ダイゴ『{PLAYER}{KUN}……\nでんどういり おめでとう\p…… …… ……\n…… …… ……\pまた いつか あえると いいね!"
	.byte EOS
	.if (. - MatchCall_Text_Steven7) > 0x3b
	.error "MatchCall_Text_Steven7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Steven7) < 0x3b
	.space 0x3b - (. - MatchCall_Text_Steven7)
	.endif

	@ data/text/match_call.inc:910 MatchCall_Text_BirchRegisterCall
	.globl MatchCall_Text_BirchRegisterCall
MatchCall_Text_BirchRegisterCall: @ 0x0826C1AF
	.string "オダマキ『おお {PLAYER}{KUN}!\nはなしは すでに きいて いるよ!\pきみの ポケナビに エントリーコールが\nセットされた らしいな!\pならば わたしも とうろく しておこう!\pこれで きみと はなれていても\nすぐに ポケモンずかんの ひょうかを\lしてあげられる からね!\p…… …… ……"
	.byte EOS
	.if (. - MatchCall_Text_BirchRegisterCall) > 0x8f
	.error "MatchCall_Text_BirchRegisterCall may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_BirchRegisterCall) < 0x8f
	.space 0x8f - (. - MatchCall_Text_BirchRegisterCall)
	.endif
