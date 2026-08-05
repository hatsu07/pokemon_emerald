	@ data/text/apprentice.inc:85 gText_ApprenticePleaseTeach3
	.globl gText_Rom_26D3C6
gText_Rom_26D3C6: @ 0x0826D3C6
	.string "あれ? え? あなたは……!\nいえ そんなはず ないわ\lあたし なんかが {PLAYER}さんに\lあえるはず なんて ないもん\p……ほんとに {PLAYER}さん なの?\nしんじられない おはなし できるなんて!\lああ こんな いいことが あったら\lあとは わるいこと ばっかり おきるんだわ\p……あ ごめんなさい\nあたし…… {STR_VAR_1} です……\lなんの とりえも ありません\lって じこしょうかい なんて しても\lどうせ すぐ わすれちゃいます よね……\p{PLAYER}さんに あえたら\nトレーナーとして そうだんに のって って\lおねがい しようと おもっていたけど\lどうせ ムリですよね?\p……それとも もしかして\nそうだんに のって もらえたり しますか?"
	.byte EOS
	.if (. - gText_Rom_26D3C6) > 0x13a
	.error "gText_Rom_26D3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D3C6) < 0x13a
	.space 0x13a - (. - gText_Rom_26D3C6)
	.endif
