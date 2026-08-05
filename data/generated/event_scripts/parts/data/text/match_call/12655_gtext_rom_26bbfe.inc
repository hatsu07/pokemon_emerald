	@ data/text/match_call.inc:856 MatchCall_Text_Scott6
	.globl gText_Rom_26BBFE
gText_Rom_26BBFE: @ 0x0826BBFE
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pぜんぶの ジムバッジを あつめたら\nポケモンリーグに ちょうせん できる\lというのは しってるよね?\pきみほどの じつりょくが あるなら\nチャンピオンも ゆめじゃない けど……\lじつは もっと いいところが あるんだよ\pまあ いまは それいじょう\nいわないで おくよ\pポケモンリーグを かちぬいて\nでんどういり してからの おたのしみだね!"
	.byte EOS
	.if (. - gText_Rom_26BBFE) > 0xbb
	.error "gText_Rom_26BBFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BBFE) < 0xbb
	.space 0xbb - (. - gText_Rom_26BBFE)
	.endif
